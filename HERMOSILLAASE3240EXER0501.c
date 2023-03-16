//Name: Hermosilla, Chris Jansen F.
//Course & Year: 3rd Year BS Aerospace Engineering
//Module 05
//Exercise 02
#include <stdio.h>
#include <math.h>

double fxy(double x, double y){ //This is the given function dy/dx = 4e^(0.8x) - 0.5y
    return (4*exp(0.8*x))-(0.5*y);
}
//double fxy(double xval, double yval){
//    return (exp(xval)-(2*xval))/yval;
//}

main(){
int iter,i;
double fxy(double xval, double yval);
//double xval=0, yval=2, hval=0.3; //initial conditions
double xval, yval, hval=0.3;
double xiter,yiter,k1val,k2val,k2valx,k2valy,k3val,k3valy,k4val,k4valx,k4valy;
char choice1,choice2;

printf("Name: Hermosilla, Chris Jansen F.\n");
printf("Course & Year: 3rd Year BS Aerospace Engineering\n");
printf("Module 05\n");
printf("Exercise 01\n\n");

printf("This program will solve the function dy/dx = 4e^(0.8x) - 0.5y \nusing the 4th-order Runge-Kutta Method\n");
printf("Given that y(0)=2 and h=0.3\n\n");
printf("Do you want to use the given h=0.3? y or n?\nIf no, then  you will be prompted to input your own: "); scanf(" %c", &choice2);
if(choice2=='n'){
    printf("Input h: "); scanf("%lf", &hval);
}
printf("Do you want to use the intial values x=0 and y=2? y or n?\nIf no, then  you will be prompted to input your own: "); scanf(" %c", &choice1);
if(choice1=='n'){
    printf("Input initial x: "); scanf("%lf", &xval);
    printf("Input initial y: "); scanf("%lf", &yval);
}
printf("Enter the number of iterations: "); scanf("%d", &iter);
xval=0;
yval=2;
printf("\nx \t\t y \t\t x_i+1 \t\t y_i+1 \t\t k1 \t\t k2 \t\t k3 \t\t k4\n\n"); //printing the columns for the table
do{
    xiter=xval+hval; //solving for the next x
    k1val=fxy(xval,yval); //solving for this iteration's k1
    k2valx=xval+(0.5*hval); //solving for the x component of the k2
    k2valy=yval+(0.5*k1val*hval); //solving for the y component of the k2
    k2val=fxy(k2valx,k2valy); //solving for this iteration's k2
    k3valy=yval+(0.5*k2val*hval); //solving for the y component of the k3
    k3val=fxy(k2valx,k3valy); //solving for this iteration's k3
    k4valx=xval+hval; //solving for the x component of the k4
    k4valy=yval+k3val*hval; //solving for the y component of the k4
    k4val=fxy(k4valx,k4valy); //solving for this iteration's k4
    yiter=yval+(0.166666667*(k1val+(2*k2val)+(2*k3val)+k4val)*hval); //solving for the next y
    printf("\n %.4f \t %.4f \t %.4f \t %.4f \t %.4f \t %.4f \t %.4f \t %.4f",xval,yval,xiter,yiter,k1val,k2val,k3val,k4val); //printing the table
    yval=yiter; //assigning the new y for thenext iteration
    xval=xiter; //assigning the new x for thenext iteration
    i++;
}
while(i<iter);

return 0;
}
