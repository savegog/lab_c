#include <stdio.h>
#include <math.h>
int main()
{ double a = 3, b = 4, c = -2, D, x1,x2;
    D = b*b - 4*a*c;
    x1 = (-b + sqrt(D))/(2*a);
    x2 = (-b-sqrt(D))/(2*a);
    printf("d= %lf \n", D);
    printf("x1=%lf, x2=%lf", x1,x2);
    
    
    return 0;
}
