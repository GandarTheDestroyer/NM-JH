//Name: Hermosilla, Chris Jansen F.
//Course & Year: 3rd Year BS Aerospace Engineering
//Module 02
//Exercise 02

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double vmL(double mL, double vm, double tm, double cm){ //for the function V(mL)
    return ((((9.81*mL)/cm)*(1-exp(-1*(cm/mL)*tm)))-vm); //Velocity formula with the first guessed mass value as the variable
    }

double vmU(double mU, double vm, double tm, double cm){ //for the function V(mU)
    return ((((9.81*mU)/cm)*(1-exp(-1*(cm/mU)*tm)))-vm); //Velocity formula with the second guessed mass value as the variable
    }

double vmR(double mR, double vm, double tm, double cm){ //for the function V(mR)
    return ((((9.81*mR)/cm)*(1-exp(-1*(cm/mR)*tm)))-vm); //Velocity formula with the calculated mass value from the secant method formula value as the variable
    }

double vcL(double cL, double vc, double tm, double m){ //for the function V(cL)
    return ((((9.81*m)/cL)*(1-(exp(-1*(cL/m)*tm))))-vc); //Velocity formula with the first guessed drag coefficient value as the variable
    }

double vcU(double cU, double vc, double tm, double m){ //for the function V(cL)
    return ((((9.81*m)/cU)*(1-(exp(-1*(cU/m)*tm))))-vc); //Velocity formula with the first guessed drag coefficient value as the variable
    }

double vcR(double cR, double vc, double tm, double m){ //for the function V(cR)
    return ((((9.81*m)/cR)*(1-(exp(-1*(cR/m)*tm))))-vc); //Velocity formula with the calculated drag coefficient value from the secant method formula value value as the variable
    }

main (){
double c,cL,cU,m,mL,mU,lower,upper,v,t,funcL,funcU,check;
double vmL(double mL, double vm, double tm, double cm); //This and the ones below all call on their respective functions
double vmU(double mU, double vm, double tm, double cm);
double vmR(double mR, double vm, double tm, double cm);
double vcL(double cL, double vc, double tm, double m);
double vcU(double cU, double vc, double tm, double m);
double vcR(double cR, double vc, double tm, double m);

char choice,a,b;

//Student and course information per instruction
printf("Name: Hermosilla, Chris Jansen F.\n");
printf("Course & Year: 3rd Year BS Aerospace Engineering\n");
printf("Module 02\n");
printf("Exercise 02\n\n");

//Just description and explanation
printf("This Program will solve for either mass or the drag coefficient using the Secant Method\n\n");

printf("Enter Time: "); scanf("%lf", &t);
printf("Enter Velocity: "); scanf("%lf", &v);
printf("Do you want to look for a) Mass or b) Drag Coefficient (Type 'a' or 'b')? "); scanf(" %c", &choice); //as per instructions, you can choose to either look for the mass or the drag coefficient

if(choice=='a'){ //In the case you are looking for the mass
printf("Enter C constant: "); scanf("%lf", &c);
printf("Enter 1st Mass Guess (x_0): "); scanf("%lf", &mL);
if(mL<0){   //restricts user to only input a positive mass value because it would not be realistic though you can comment out this part of the program part and the calculation will still yield results
    do{
       printf("You cannot have a negative mass!\n");
       printf("Enter 1st Mass Guess(x_0): "); scanf("%lf", &mL);
    }
    while(mL<0);
}
printf("Enter 2nd Mass Guess(x_1): "); scanf("%lf", &mU);
if(mU<0){   //restricts user to only input a positive mass value because it would not be realistic though you can comment out this part of the program part and the calculation will still yield results
    do{
       printf("You cannot have a negative mass!\n");
       printf("Enter 2nd Mass Guess(x_1): "); scanf("%lf", &mU);
    }
    while(mU<0);
}

lower=mL; //once the user inputs are acquired, these values have to be stored under a new variable name so it can be easily used and reinitialized every new iteration
upper=mU;
funcL = vmL(mL,v,t,c);
funcU = vmU(mU,v,t,c);

}

else{    //In the case, you are looking for the drag coefficient
printf("Enter Mass: "); scanf("%lf", &m);
if(m<0){
    do{
       printf("You cannot have a negative mass!\n");
       printf("Enter Mass: "); scanf("%lf", &m);
    }
    while(mU<0);
}
printf("Enter 1st Drag coeff. Guess(x_0): "); scanf("%lf", &cL);
printf("Enter 2nd Drag coeff. Guess(x_1): "); scanf("%lf", &cU);
lower=cL; //once the user inputs are acquired, these values have to be stored under a new variable name so it can be easily used and reinitialized every new iteration
upper=cU;
funcL = vcL(cL,v,t,m);
funcU = vcU(cU,v,t,m);
}

printf("\nYou inputted %.2f and %.2f\n",lower,upper);//checking only do not mind
printf("Checking v(x_0) is %.3f and v(x_1) %.3f\n",funcL,funcU);//checking only do not mind

//printf("\n\t\tPRIMARY INFORMATION\t\t\t\t\t\t\t\t\t\tSECONDARY INFORMATION\n\n");
double r,funcR,error,x1,x2;
int i=1;

do{

x1=upper;  //assigns the current upper limit as x1 to be used later on when calculating the % diff.

if(choice=='a'){ //makes use of the following functions depending on whether mass or drag is being looked for. Mass is chosen in this case
funcL = vmL(lower,v,t,c);
funcU = vmU(upper,v,t,c);}
else{   //Drag coefficient is the variable being calculated for in this case
funcL = vcL(lower,v,t,m);
funcU = vcU(upper,v,t,m);}

r=(upper-((funcU*(lower-upper))/(funcL-funcU)));   //formula of the Secant Method

if(choice=='a'){    //The v(x) function to where the 'r' will be plugged in once again depends on the choice. This is mass in this case
funcR = vmR(r,v,t,c);}
else{   //This case is drag coefficient
funcR = vcR(r,v,t,m);}

x2=r;   //The calculated 'r' is then assgined as the x_new to be plugged in the % diff formula

error=((x2-x1)/x1)*100; //The % diff formula to calculated for the error

printf("\nIteration %d\tmL = %.4f\tmU = %.4f\tmR = %.4f\t",i,lower,upper,r);
printf("v(mL) = %.4f    v(mU) = %.4f v(mR) = %.4f Error=%.3f %%\n",funcL,funcU,funcR,fabs(error));

lower=upper; //Reinitialize and assign the previous upper value(2nd guess) as the new lower value(1st guess) for the next iteration
upper=r;    //Reinitialize and assign the calculated as the new lower value(1st guess) for the next iteration

i=1+i;  //The counter for the iteration

}
while(fabs(error)>0.1);   //I used the "abs or absolute" function to account for negative percentage
//while(i<=200);// There is a big issue I discovered when putting inputs of x_0 and x_1 that are way high above the true
//...value like in the slide example when t=10s.v=40 m/s, and m=68.1 kg. We know that the true drag coeff is around 14.8
//..but if you input 50 and 53 for example as your x_0 and x_1; the 'while' criteria of % percent error causes it to stop halfway at a value far from
//... from 14.8 when it is in fact still nowhere close to the value 14.8 which is why I added this while condition that does 200 iterations
//...instead that got the correct value this time but was achieved at the 130th iteration for this example.
//...Just comment in this while condition and comment out the other while condition to test it. Input values that are negative
//...seem to be an exception.
if(choice=='a'){
printf("\nThe Mass is = %1f\n\n",r);
}
else{
printf("\nThe drag coefficient is = %1f\n\n",r);
}


}



