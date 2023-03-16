//Name: Hermosilla, Chris Jansen F.
//Course & Year: 3rd Year BS Aerospace Engineering
//Module 03
//Exercise 01 and 03

#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

//declaration of value of constant

#define SIZE 10

//main function

int main()

{

float coefficient_array[SIZE][SIZE], solution_variable[SIZE], gauss_ratio;

int i,j,k,n;

printf("Name: Hermosilla, Chris Jansen F.\n");
printf("Course & Year: 3rd Year BS Aerospace Engineering\n");
printf("Module 03\n");
printf("Exercise 01 and 03\n\n");


/* Enter number of unknowns */

printf("This program solves using Gauss-Seidel Method\n\n ");
printf("Enter number of unknowns: ");

scanf("%d", &n);

/* loop for accepting the input for coefficient Matrix */

printf("Enter value for coefficient Matrix:\n");

for(i=1;i <=n;i++)

{

for(j=1;j <=n+1;j++)

{

printf("coefficient_array[%d][%d] = ",i,j);

scanf("%f", &coefficient_array[i][j]);

}

}

//Print the initial augmented matrix

printf("Initial Matrix:\n");

for(i=1;i <=n;i++)

{

for(j=1;j <=n+1;j++)

{

printf("%.3f  ",coefficient_array[i][j]);

}

printf("\n\n");

}

/* Gauss Jordan technique */

for(i=1;i <=n;i++)

{

if(coefficient_array[i][i] == 0.0)

{

printf("Input Math Error!");

exit(0);

}

for(j=1;j <=n;j++)

{

if(i!=j)

{

gauss_ratio = coefficient_array[j][i]/coefficient_array[i][i];

for(k=1; k <=n+1;k++)

{

coefficient_array[j][k] = coefficient_array[j][k] - gauss_ratio*coefficient_array[i][k];

printf("%.3f  ",coefficient_array[j][k]);
}

}
printf("\n\n");
}

}

/* Calculating Solution of the linear equations */

for(i=1;i <=n;i++)

{

solution_variable[i] = coefficient_array[i][n+1]/coefficient_array[i][i];

}

/* Printing the Solution of the linear equations*/

printf("\nSolution of simultaneous linear equations:\n");

for(i=1;i <=n;i++)

{

printf("solution_variable[%d] = %0.3f\n",i, solution_variable[i]);

}

getch();

return(0);

}
