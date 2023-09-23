#include<stdio.h>
#include<math.h>
int main()
{
    double X1,X2,Y1,Y2;
    scanf("%lf%lf",&X1, &Y1);

    scanf("%lf%lf",&X2, &Y2);
    double P1=X2-X1;
    double P2= Y2-Y1;
    double plane1=P1*P1;
    double plane2=P2*P2;
    double Distance = sqrt(plane1+plane2);
    printf("%.4lf\n", Distance);
    return 0;
}
