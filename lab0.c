#include <stdio.h>
#include <math.h>
int main()
{ double a = 3, b = 4, c = -2, D, x1,x2;

printf("Vvedite a");
scanf("%lf", &a);
printf("Vvedite b");
scanf("%lf", &b);
printf("Vvedite c");
scanf("%lf", &c);
    D = pow(b,2) - 4*a*c;
if (D>0) {
    
    x1 = (-b + sqrt(D))/(2*a);
    x2 = (-b-sqrt(D))/(2*a);
    printf("x1=%lf, x2=%lf", x1,x2);
    
}
if (D<0) {
    printf("Kornei net");
    
}
if (D == 0) {
    printf("x1=%lf", x1);
}
    
    
    return 0;
}
