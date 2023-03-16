//Name: Hermosilla, Chris Jansen F.
//Course & Year: 3rd Year BS Aerospace Engineering
//Module 01
//Exercise 02

#include <stdio.h>
#include <math.h>
int main(){
    double num1,num2;
    int precision;

printf("Name: Hermosilla, Chris Jansen F.\n");
printf("Course & Year: 3rd Year BS Aerospace Engineering\n");
printf("Module 01\n");
printf("Exercise 02\n\n");

printf("Enter first number: "); scanf("%lf",&num1);
printf("Enter second number: "); scanf("%lf",&num2);
printf("Enter the number of decimal places you want: "); scanf("%d", &precision); //To be used as the Switch case

double sqrt1,sqrt2,sum,diff,prod,quo,sqrtsum; //Variables for the mathematical operations

//This section involves the mathematical operations
sum=num1+num2;
diff=num1-num2;
prod=num1*num2;
quo=num1/num2;
sqrt1=sqrt(num1);
sqrt2=sqrt(num2);
sqrtsum=sqrt1+sqrt2;
//Mathematical operations end here


switch (precision){ //Taken from your input of the desired decimal place
case (1):if(num2>0 && num1>=0){                           //Valid Quotient and non-negative Square root
         printf("\nSum= %.1f",sum);
         printf("\nDifference= %.1f",diff);
         printf("\nProduct= %.1f",prod);
         printf("\nQuotient= %.1f",quo);
         printf("\nSum of their two square roots= %.1f",sqrtsum);}
         else if(num2!=0){                     //Valid Quotient and Negative Square root
         printf("\nSum= %.1f",sum);
         printf("\nDifference= %.1f",diff);
         printf("\nProduct= %.1f",prod);
         printf("\nQuotient= %.1f",quo);
         printf("\nSum of square root is invalid because one or more input numbers are less than zero");}
         else if(num2==0 && num1>=0){                    //Invalid Quotient and non-negative Square root
         printf("\nSum= %.1f",sum);
         printf("\nDifference= %.1f",diff);
         printf("\nProduct= %.1f",prod);
         printf("\nQuotient is Invalid because Divisor is zero");
         printf("\nSum of their two square roots= %.1f",sqrtsum);}
         else if(num2==0 && num1<0){
         printf("\nSum= %.1f",sum);                      //Invalid Quotient and Negative Square root
         printf("\nDifference= %.1f",diff);
         printf("\nProduct= %.1f",prod);
         printf("\nQuotient is Invalid because Divisor is zero");
         printf("\nSum of square root is invalid because one of the input values are less than zero");
         }
         else{
            printf("I legit don't know what I did not account for this error to happen");
         }
         break;

case (2):if(num2>0 && num1>=0){                           //Valid Quotient and non-negative Square root
         printf("\nSum= %.2f",sum);
         printf("\nDifference= %.2f",diff);
         printf("\nProduct= %.2f",prod);
         printf("\nQuotient= %.2f",quo);
         printf("\nSum of their two square roots= %.2f",sqrtsum);}
         else if(num2!=0){                     //Valid Quotient and Negative Square root
         printf("\nSum= %.2f",sum);
         printf("\nDifference= %.2f",diff);
         printf("\nProduct= %.2f",prod);
         printf("\nQuotient= %.2f",quo);
         printf("\nSum of square root is invalid because one or more input numbers are less than zero");}
         else if(num2==0 && num1>=0){                    //Invalid Quotient and non-negative Square root
         printf("\nSum= %.2f",sum);
         printf("\nDifference= %.2f",diff);
         printf("\nProduct= %.2f",prod);
         printf("\nQuotient is Invalid because Divisor is zero");
         printf("\nSum of their two square roots= %.2f",sqrtsum);}
         else if(num2==0 && num1<0){
         printf("\nSum= %.2f",sum);                      //Invalid Quotient and Negative Square root
         printf("\nDifference= %.2f",diff);
         printf("\nProduct= %.2f",prod);
         printf("\nQuotient is Invalid because Divisor is zero");
         printf("\nSum of square root is invalid because one of the input values are less than zero");
         }
         else{
            printf("I legit don't know what I did not account for this error to happen");
         }
         break;

case (3):if(num2>0 && num1>=0){                           //Valid Quotient and non-negative Square root
         printf("\nSum= %.3f",sum);
         printf("\nDifference= %.3f",diff);
         printf("\nProduct= %.3f",prod);
         printf("\nQuotient= %.3f",quo);
         printf("\nSum of their two square roots= %.3f",sqrtsum);}
         else if(num2!=0){                     //Valid Quotient and Negative Square root
         printf("\nSum= %.3f",sum);
         printf("\nDifference= %.3f",diff);
         printf("\nProduct= %.3f",prod);
         printf("\nQuotient= %.3f",quo);
         printf("\nSum of square root is invalid because one or more input numbers are less than zero");}
         else if(num2==0 && num1>=0){                    //Invalid Quotient and non-negative Square root
         printf("\nSum= %.3f",sum);
         printf("\nDifference= %.3f",diff);
         printf("\nProduct= %.3f",prod);
         printf("\nQuotient is Invalid because Divisor is zero");
         printf("\nSum of their two square roots= %.3f",sqrtsum);}
         else if(num2==0 && num1<0){
         printf("\nSum= %.3f",sum);                      //Invalid Quotient and Negative Square root
         printf("\nDifference= %.3f",diff);
         printf("\nProduct= %.3f",prod);
         printf("\nQuotient is Invalid because Divisor is zero");
         printf("\nSum of square root is invalid because one of the input values are less than zero");
         }
         else{
            printf("I legit don't know what I did not account for this error to happen");
         }
         break;

case (4):if(num2>0 && num1>=0){                           //Valid Quotient and non-negative Square root
         printf("\nSum= %.4f",sum);
         printf("\nDifference= %.4f",diff);
         printf("\nProduct= %.4f",prod);
         printf("\nQuotient= %.4f",quo);
         printf("\nSum of their two square roots= %.4f",sqrtsum);}
         else if(num2!=0){                     //Valid Quotient and Negative Square root
         printf("\nSum= %.4f",sum);
         printf("\nDifference= %.4f",diff);
         printf("\nProduct= %.4f",prod);
         printf("\nQuotient= %.4f",quo);
         printf("\nSum of square root is invalid because one or more input numbers are less than zero");}
         else if(num2==0 && num1>=0){                    //Invalid Quotient and non-negative Square root
         printf("\nSum= %.4f",sum);
         printf("\nDifference= %.4f",diff);
         printf("\nProduct= %.4f",prod);
         printf("\nQuotient is Invalid because Divisor is zero");
         printf("\nSum of their two square roots= %.4f",sqrtsum);}
         else if(num2==0 && num1<0){
         printf("\nSum= %.4f",sum);                      //Invalid Quotient and Negative Square root
         printf("\nDifference= %.4f",diff);
         printf("\nProduct= %.4f",prod);
         printf("\nQuotient is Invalid because Divisor is zero");
         printf("\nSum of square root is invalid because one of the input values are less than zero");
         }
         else{
            printf("I legit don't know what I did not account for this error to happen");
         }
         break;

case (5):if(num2>0 && num1>=0){                           //Valid Quotient and non-negative Square root
         printf("\nSum= %.5f",sum);
         printf("\nDifference= %.5f",diff);
         printf("\nProduct= %.5f",prod);
         printf("\nQuotient= %.5f",quo);
         printf("\nSum of their two square roots= %.5f",sqrtsum);}
         else if(num2!=0){                     //Valid Quotient and Negative Square root
         printf("\nSum= %.5f",sum);
         printf("\nDifference= %.5f",diff);
         printf("\nProduct= %.5f",prod);
         printf("\nQuotient= %.5f",quo);
         printf("\nSum of square root is invalid because one or more input numbers are less than zero");}
         else if(num2==0 && num1>=0){                    //Invalid Quotient and non-negative Square root
         printf("\nSum= %.5f",sum);
         printf("\nDifference= %.5f",diff);
         printf("\nProduct= %.5f",prod);
         printf("\nQuotient is Invalid because Divisor is zero");
         printf("\nSum of their two square roots= %.5f",sqrtsum);}
         else if(num2==0 && num1<0){
         printf("\nSum= %.5f",sum);                      //Invalid Quotient and Negative Square root
         printf("\nDifference= %.5f",diff);
         printf("\nProduct= %.5f",prod);
         printf("\nQuotient is Invalid because Divisor is zero");
         printf("\nSum of square root is invalid because one of the input values are less than zero");
         }
         else{
            printf("I legit don't know what I did not account for this error to happen");
         }
         break;

case (6):if(num2>0 && num1>=0){                           //Valid Quotient and non-negative Square root
         printf("\nSum= %.6f",sum);
         printf("\nDifference= %.6f",diff);
         printf("\nProduct= %.6f",prod);
         printf("\nQuotient= %.6f",quo);
         printf("\nSum of their two square roots= %.6f",sqrtsum);}
         else if(num2!=0){                     //Valid Quotient and Negative Square root
         printf("\nSum= %.6f",sum);
         printf("\nDifference= %.6f",diff);
         printf("\nProduct= %.6f",prod);
         printf("\nQuotient= %.6f",quo);
         printf("\nSum of square root is invalid because one or more input numbers are less than zero");}
         else if(num2==0 && num1>=0){                    //Invalid Quotient and non-negative Square root
         printf("\nSum= %.6f",sum);
         printf("\nDifference= %.6f",diff);
         printf("\nProduct= %.6f",prod);
         printf("\nQuotient is Invalid because Divisor is zero");
         printf("\nSum of their two square roots= %.6f",sqrtsum);}
         else if(num2==0 && num1<0){
         printf("\nSum= %.6f",sum);                      //Invalid Quotient and Negative Square root
         printf("\nDifference= %.6f",diff);
         printf("\nProduct= %.6f",prod);
         printf("\nQuotient is Invalid because Divisor is zero");
         printf("\nSum of square root is invalid because one of the input values are less than zero");
         }
         else{
            printf("I legit don't know what I did not account for this error to happen");
         }
         break;
default: printf("Invalid Character detected! \nor... did you put 7+ decimal places?\n Apologies but I only made switch cases until the 6th decimal place");
         break;

}


}
