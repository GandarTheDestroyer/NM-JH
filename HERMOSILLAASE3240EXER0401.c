//Name: Hermosilla, Chris Jansen F.
//Course & Year: 3rd Year BS Aerospace Engineering
//Module 04
//Exercise 01

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 100

int main()
{
double dtpt[SIZE][SIZE]; //, solution_variable[SIZE], gauss_ratio;
double zvalues[SIZE],fracm[SIZE],xsubi[SIZE],ysubi[SIZE];
double xinput;
int i,j,k,n,m,l;

printf("Name: Hermosilla, Chris Jansen F.\n");
printf("Course & Year: 3rd Year BS Aerospace Engineering\n");
printf("Module 04\n");
printf("Exercise 01\n\n");
printf("This program does Quadratic Spline Interpolation using a formula/algorithm online\n\n");

/* loop for accepting the input for the data points of the x y table */
printf("Enter the number of data points:"); scanf("%d", &n);
for(i=1;i <=n;i++){
for(j=1;j <=2;j++){
printf("Row[%d] Column[%d]= ",i,j); scanf("%lf", &dtpt[i][j]);}}

//Print the table
printf("\n\n");
printf("Table of data points:\n");
for(i=1;i <=n;i++){
for(j=1;j <=2;j++){
printf("%.3f  ",dtpt[i][j]);}
printf("\n\n");}
printf("\n\n");

//Check dtpt[i]
//printf("\n\n");
//printf("Values of dtpt[i]:\n");
//for(i=1;i <=n;i++){
//printf("dtpt[%d] = %.3f  \n",i,dtpt[i][1]);
//}

//Getting Z. This program uses a different algorithm not from the discussion but rather from an open source method that involves using Z recursion formula
double zval,z;
z=0;//The first Z at i=o, will be assumed to be 0
for(i=1;i <=n-1;i++){
for(j=1;j <=1;j++){
zval=(-1*z)+2*((dtpt[i+1][j+1]-dtpt[i][j+1])/(dtpt[i+1][j]-dtpt[i][j]));
//printf("Z%d = %.2f  ",i,zval);
}
//printf("\n");
z=zval;
zvalues[i+1]=zval;}

//Print Z externally to check memory
//zvalues[1]=0;
//printf("\n\nZ values\n");
//for(i=1;i <=n;i++){
//printf("Z%d = %.2f  ",i,zvalues[i]);
//printf("\n");
//}
//printf("\n");

//Getting and printing the equations
double frac,square,nonsquare,func;
//printf("Input the value of X= "); scanf("%lf", &xinput);
printf("\nThese are the list of equations\n");
for(i=1;i <=n-1;i++){
for(j=1;j <=1;j++){
    frac=(zvalues[i+1]-zvalues[i])/(2*(dtpt[i+1][j]-dtpt[i][j]));
    //I will be storing the coefficient values acquired from the generated solution into a matrix that I can call on to later as a one dimensional array in order to do the evaluation of the x values
    fracm[i]=frac;
    xsubi[i]=dtpt[i][j];
    ysubi[i]=dtpt[i][j+1];
    //square=(xinput-dtpt[i][j])*(xinput-dtpt[i][j]);
    //nonsquare=zvalues[i]*(xinput-dtpt[i][j]);
    //func=(frac*square)+nonsquare+dtpt[i][j+1];
    printf("f%d(x) = %.2f(x - %.2f)^2 + %.2f(x - %.2f) + %.2f   ",i,frac,dtpt[i][j],zvalues[i],dtpt[i][j],dtpt[i][j+1]);
    printf("if input is between %.2f and %.2f",dtpt[i][1],dtpt[i+1][1]);
}printf("\n");}

//Print frac[i] externally to check memory
//printf("\n\nFrac values\n");
//for(i=1;i <=n-1;i++){
//printf("frac[%d] = %.2f  ",i,fracm[i]);
//printf("\n");
//}

//Evaluating X input and printing
double eval,evalderi;
printf("Input the value of X you want to evaluate= "); scanf("%lf", &xinput);
//Check dtpt[i]
printf("\n\n");
for(i=1;i <=n;i++){
        if( (xinput>=dtpt[i][1]) && (xinput<dtpt[i+1][1])){
        //printf("dtpt[%d] = %.3f and X = %.3f \n",i,dtpt[i][1],xinput);
        eval=(fracm[i]*(xinput-xsubi[i])*(xinput-xsubi[i]))+(zvalues[i]*(xinput-xsubi[i]))+ysubi[i];//basically the open source algorithm I utilzed to find the function and in this case plug in the X values inputted by the user to immediately solve
        evalderi=(frac*2*(xinput-xsubi[i]))+zvalues[i];//this is to evaluate with the derivative of the function and evaluate x at the same time
        //printf("i=%d    xinput=%.3f xi=%.3f yi=%.3f zi=%.3f frac=%.3f;  ",i,xinput,xsubi[i],ysubi[i],zvalues[i],fracm[i]);
        printf("Using equation %d, f%d(%.2f)=%.4f and f'%d(%.2f)=%.4f",i,i,xinput,eval,i,xinput,evalderi);
        break;
        }
//}
}
printf("\n\n");


return 0;
}
