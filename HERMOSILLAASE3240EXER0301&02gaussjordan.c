//Name: Hermosilla, Chris Jansen F.
//Course & Year: 3rd Year BS Aerospace Engineering
//Module 03
//Exercise 01 and 03

#include<stdio.h>
#include<conio.h>
#include<math.h>

#define SIZE 10

int main()
{
		 float a[SIZE][SIZE], x[SIZE], ratio;
		 int i,j,k,n;
		// clrscr();

		printf("Name: Hermosilla, Chris Jansen F.\n");
        printf("Course & Year: 3rd Year BS Aerospace Engineering\n");
        printf("Module 03\n");
        printf("Exercise 01 and 03\n\n");

		 /* Inputs */
		 /* 1. Reading number of unknowns */
		 printf("This program finds the unknowns using Gauss-Jordan Elimination\n\n");
		 printf("How many unknowns?: ");
		 scanf("%d", &n);
		 /* 2. Reading Augmented Matrix */
		 printf("Enter Matrix elements:\n");
		 for(i=1;i<=n;i++)//gets your input for the augmented matrix
		 {
			  for(j=1;j<=n+1;j++)
			  {
				   printf("a[%d][%d] = ",i,j);
				   scanf("%f", &a[i][j]);
			  }
		 }

printf("\n\n");
printf("The augmented matrix table:\n");
for(i=1;i<=n;i++)
		 {
			  for(j=1;j<=n+1;j++)
			  {
				   printf("%.0f   ",a[i][j]);
			  }
			  printf("\n\n");
		 }


		 /* Applying Gauss Jordan Elimination */
		 for(i=1;i<=n;i++)
		 {
			  //if(a[i][i] == 0.0)    //accounts for a case that is considered an error
			  //{
				//  printf("Mathematical Error!");
				//   exit(0);
			 // }
			  for(j=1;j<=n;j++)
			  {
				   if(i!=j)
				   {
					    ratio = a[j][i]/a[i][i];    //actual process of making the iterations
					    for(k=1;k<=n+1;k++)
					    {
					     	a[j][k] = a[j][k] - ratio*a[i][k];  //uses this formula to determine the elements for the next iteration
					     	printf("%0.3f   ",a[j][k]);
					    }

				   }
				   printf("\n\n");
			  }

		 }






		 /* Obtaining Solution */
		 for(i=1;i<=n;i++)
		 {
		  	x[i] = a[i][n+1]/a[i][i];
		 }



		 /* Displaying Solution */
		 printf("\nSolution:\n");
		 for(i=1;i<=n;i++)
		 {
		  	printf("x[%d] = %0.3f\n",i, x[i]);
		 }



		 getch();
		 return(0);
}
