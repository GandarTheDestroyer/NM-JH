//Name: Hermosilla, Chris Jansen F.
//Course & Year: 3rd Year BS Aerospace Engineering
//Module 02
//Exercise 02

#include <stdio.h>
#include <stdlib.h>
#define f(x) 19*pow(x,4)-(110*pow(x,3))-(3300*pow(x,2))+12000 //used to define the function mainly to be used
#define g(x) 76*pow(xi,3)-(330*pow(xi,2))-(6600*pow(xi,1))
main(){
double xi,xd,fxL,fxU,check;

//Student and course information per instruction
printf("Name: Hermosilla, Chris Jansen F.\n");
printf("Course & Year: 3rd Year BS Aerospace Engineering\n");
printf("Module 02\n");
printf("Exercise 02\n\n");

//Just description and explanation
printf("This Program will solve for the root of the function:\nf(x)=f(x) = 19x^(4) - 110x^(3) - 3300x^(2) + 12000 using the NEWTON-RAPHSON Method");
printf("\nAccording to calculations, you should expect the roots to be around\n x=1.99858 ; x=1.86794; x=-10.37934; x=16.29945\n\n");
printf("Guess a number: "); scanf("%lf", &xi);

if(xi!=0){
printf("You inputted %.lf\n",xi);//checking only do not mind
printf("Checking: f(x) is %.lf and f(x)'= %.lf\n",f(xi),g(xi));//checking only do not mind


printf("\n\n\t\tPRIMARY INFORMATION\n\n");
double x,x1,x2,error;
int i=1;

do{     //Repeats the following process
x1=xi;  //assigns the current guess as x1 to be used later on when calculating the % diff.
x=xi-((f(xi))/(g(xi)));   //The newton-raphson formula

printf("Iteration %d    f(x) = %.2f    f(x)' = %.2f    x = %lf",i,f(xi),g(xi),x);
i=1+i;  //The counter for the iteration

            x2=x;   //Assigns the x value as the new xi which is x2 for the % diff
            error=((x2-x1)/x1)*100; //simply the % diff formula
            printf("   Error = %.3f %% \n\n",fabs(error));
            xi=x;   //after calculating % diff, assigns the calculated x as the new xi for the next iteration
}
while(fabs(error)>0.1);   //I used the "abs or absolute" function to account for negative percentage
printf("\nThe root is = %1f\n\n",x);    //The final root from the last iteration
}

else{
    printf("Did you know that for the given function's 1st derivative when x=0 \nwill yield f(x)'=0 making the numerator 0 in the Newton-Rahpson formula hence an undefined quotient");
}
}
