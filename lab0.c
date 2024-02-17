#include <stdio.h>
#include <math.h>
int main()
{     double a , b , c , D, x1,x2;
    int answer;
    printf("Programma prodolzaetsya? (1/0):");
    scanf("%d", &answer );
    while (answer == 1){
        

        printf("Vvedite a\n");
        scanf("%lf", &a);
        printf("Vvedite b\n");
        scanf("%lf", &b);
        printf("Vvedite c\n");
        scanf("%lf", &c);
        D = pow(b,2) - 4*a*c;
        if (D>0) {
    
            x1 = (-b + sqrt(D))/(2*a);
            x2 = (-b-sqrt(D))/(2*a);
            printf("x1=%lf, x2=%lf", x1,x2);
            printf("\n");
}
        if (D<0) {
            printf("Kornei net\n");
    
}
        if (D == 0) {
            printf("x1=%lf", x1, "\n");
}
    }

    
    return 0;
}
