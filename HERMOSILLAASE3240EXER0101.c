//Name: Hermosilla, Chris Jansen F.
//Course & Year: 3rd Year BS Aerospace Engineering
//Module 01
//Exercise 01

#include <stdio.h>
#include <math.h>
int main(){
    double mass,drag,stepsize;

printf("Name: Hermosilla, Chris Jansen F.\n");
printf("Course & Year: 3rd Year BS Aerospace Engineering\n");
printf("Module 01\n");
printf("Exercise 01\n\n");

printf("Hello, I will solve the ball problem using do..while loop\n");
printf("Enter mass of ball: "); scanf("%lf",&mass);
printf("Enter coeffecient of drag: "); scanf("%lf",&drag);
printf("Enter step size "); scanf("%lf",&stepsize);

double velocity2,velocity1,time2,time1,percentdiff;
double g=9.8;

do{
    velocity2=velocity1+(g-(drag/mass)*velocity1)*(time2-time1);

    printf("Time: %.lf ",time2);
    printf("Velocity: %.2f",velocity2);
    printf("\nPercent Difference= %.3f %%\n\n",percentdiff); //show the percentage difference of the last two velocity values

    percentdiff=((velocity2-velocity1)/velocity2)*100.00; //Before v1 and v2 is reinitialized, we should calculate immediately the % difference here
    velocity1=velocity2;
    time1=time2;
    time2=time1+stepsize;
}while(percentdiff>=0.1); //set the condition for percentage difference to be greater than or equal 0.1%
;
return 0;

}
