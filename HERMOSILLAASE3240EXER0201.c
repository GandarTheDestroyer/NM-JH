//Name: Hermosilla, Chris Jansen F.
//Course & Year: 3rd Year BS Aerospace Engineering
//Module 02
//Exercise 01

#include <stdio.h>
#include <stdlib.h>
#define f(x) 19*pow(x,4)-(110*pow(x,3))-(3300*pow(x,2))+12000 //used to define the function mainly to be used

main(){
double xL,xU,fxL,fxU,check;

//Student and course information per instruction
printf("Name: Hermosilla, Chris Jansen F.\n");
printf("Course & Year: 3rd Year BS Aerospace Engineering\n");
printf("Module 02\n");
printf("Exercise 01\n\n");

printf("This Program will solve for the root of the function:\nf(x)=f(x) = 19x^(4) - 110x^(3) - 3300x^(2) + 12000 using the BISECTION Method");
printf("\nAccording to calculations, you should expect the roots to be around\n x=1.99858 ; x=1.86794; x=-10.37934; x=16.29945\n\n");
printf("Enter Lower Limit: "); scanf("%lf", &xL);
printf("Enter Upper Limit: "); scanf("%lf", &xU);

printf("You inputted %.lf and %.lf\n",xL,xU);//checking only do not mind
printf("Checking f(xL) is %.lf and f(xU) %.lf\n",f(xL),f(xU));//checking only do not mind
printf("Checking f(xL)f(xU) is %.lf\n\n",(f(xL))*(f(xU)));//checking only do not mind
check=(f(xL))*(f(xU));

printf("\n\t\tPRIMARY INFORMATION\t\t\t\t\t\t\t\t\t\tSECONDARY INFORMATION\n\n");
double xr,error,prod2,x1,x2;
int i=1;

if(check<=0){   //checks if the product of f(xL) and f(xU) is less than zero or else the process is terminated
do{
x1=xU;  //assigns the current upper limit as x1 to be used later when calculating the % diff.
xr=(xL+xU)/2;   //Step 2 of the Bisection Method
prod2=(f(xL))*(f(xr));

printf("Iteration %d\txL = %.2f\txU = %.2f\txR = %lf\t",i,xL,xU,xr);
printf("\tf(xL) = %.2f  f(xU) = %.2f   f(xR) = %.2f   f(xL)f(xR) = %.2f",f(xL),f(xU),f(xr),prod2);
i=1+i;  //The counter for the iteration

if(prod2<0){    //when f(xL))*(f(xr) < 0
        if(x1!=0){
            xU=xr;  //makes the xr as the new xU
            x2=xU;  //Assigns the xU as the x2 for calculation of % diff
            error=((x2-x1)/x1)*100;
            printf("   Error = %.3f %%\t\n\n",fabs(error));
        }
        else{   //to address the case when the first xU is zero which causes an error is the % diff formula
            xU=xr;
            x2=xU;
            error=100;  //according to my research, it said to assume it a 100% if it is a zero
            printf("   Error = %.3f %%\t\n\n",fabs(error));
        }

}
if(prod2>0){    //when f(xL))*(f(xr) > 0
        if(x1!=0){
            xL=xr;
            x2=xL;
            error=((x2-x1)/x1)*100;
            printf("   Error = %.3f %%\t\n\n",fabs(error));
        }
        else{   //to address the case when the first xU is zero which causes an error is the % diff formula
            xL=xr;
            x2=xL;
            error=100;  //according to my research, it said to assume it a 100% if it is a zero
            printf("   Error = %.3f %%\t\n\n",fabs(error));
        }

}
if((prod2)==0){ //when f(xL))*(f(xr) = 0
    printf("\nThe root is = %lf\n\n",xr);
}



}
while(fabs(error)>0.1);   //I used the "fabs or floating point absolute" function to account for negative percentage sign
printf("\nThe root is = %lf\n\n",xr);
}


else{
    printf("\nf(xL)f(xU) is not less than zero therefore the root does not exist in this range"); //The case when the product of f(xL) and f(xU) is greater than zero or a positive
}

}
