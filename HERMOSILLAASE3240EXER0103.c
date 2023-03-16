//Name: Hermosilla, Chris Jansen F.
//Course & Year: 3rd Year BS Aerospace Engineering
//Module 01
//Exercise 03

#include <stdio.h>
#include <math.h>
int main(){
    double side1,side2,side3,side4,ang1,ang2;
    char pick,f1,f2,f3,f4;   //variables for the Yes/No options in each side when asking for fraction
    int f1n,f2n,f3n,f4n,f1d,f2d,f3d,f4d; //variables for the cases involving fractions composing of numerators and denominators

    double squareside;//variables for the case of Square
    char squarefraction;
    int squarenum,squaredenum;

    double rl,rw;   //variables for the case of rectangle
    char rfl,rfw;
    int r1n,r1d,r2n,r2d;

    double romd1,romd2; //variables for the case of rhombus
    char romfrac1,romfrac2;
    int rom1n,rom1d,rom2n,rom2d;


printf("Name: Hermosilla, Chris Jansen F.\n");
printf("Course & Year: 3rd Year BS Aerospace Engineering\n");
printf("Module 01\n");
printf("Exercise 03\n\n");

printf("Enter (a) for area of Square, \n(b) Rectangle, \n(c) Rhombus, and \n(d) General Quadrilateral(input 4 sides and 2 angles)"); scanf(" %c", &pick);

if(pick=='d'){
printf("\nYou chose general quadrilateral(Values inputted are in meters):\n");//A disclaimer that the values you inputted are assumed to be in meters

//from here on from Sides 1-4 until the angles, the same if-else cases are repeated where you are simply asked if you want to input a fraction or not
printf("Side 1:");
printf("\nInput a fraction? i.e(3/4, 5/2, etc.) y/n: "); scanf(" %c", &f1);
 if(f1=='y'){   //The decision case that gives you the option to enter a fraction's numerator and denominator
         printf("Numerator= "); scanf("%d",&f1n);
            printf("Denominator= "); scanf("%d",&f1d);
            side1=(double)f1n/(double)f1d;  //It simply divides your inputted num and denum
            printf("1st Side: %d/%d or %.2f\n\n",f1n,f1d,side1);    //displays the values which you inputted num, denum, and the quotient which will be assigned value for that side
    }
    else{   //Decision case for which you chose to input a whole number or a decimal
        printf("\n1st Side: "); scanf("%lf",&side1);
    }
printf("\nSide 2:");
printf("\nInput a fraction? i.e(3/4, 5/2, etc.) y/n: "); scanf(" %c", &f2);
 if(f2=='y'){
         printf("Numerator= "); scanf("%d",&f2n);
            printf("Denominator= "); scanf("%d",&f2d);
            side2=(double)f2n/(double)f2d;
            printf("2nd Side: %d/%d or %.2f\n\n",f2n,f2d,side2);
    }
    else{
        printf("\n2nd Side: "); scanf("%lf",&side2);
    }
printf("\nSide 3:");
printf("\nInput a fraction? i.e(3/4, 5/2, etc.) y/n: "); scanf(" %c", &f3);
 if(f3=='y'){
         printf("Numerator= "); scanf("%d",&f3n);
            printf("Denominator= "); scanf("%d",&f3d);
            side3=(double)f3n/(double)f3d;
            printf("3rd Side: %d/%d or %.2f\n\n",f3n,f3d,side3);
    }
    else{
        printf("\n3rd Side: "); scanf("%lf",&side3);
    }
printf("\nSide 4:");
printf("\nInput a fraction? i.e(3/4, 5/2, etc.) y/n: "); scanf(" %c", &f4);
 if(f4=='y'){
         printf("Numerator= "); scanf("%d",&f4n);
            printf("Denominator= "); scanf("%d",&f4d);
            side4=(double)f4n/(double)f4d;
            printf("4th Side: %d/%d or %.2f\n\n",f4n,f4d,side4);
    }
    else{
        printf("\n4th Side: "); scanf("%lf",&side4);
    }

//Prompt for angle input
printf("\nAngle 1: "); scanf("%lf",&ang1);
printf("\nAngle 2: "); scanf("%lf",&ang2);


double s,ang1rad,ang2rad,theta,area,abcd,costhingy,cosinesquared,sqm,hectares,acres,sqkm,sqmi; //All variables to be used and inserted into the formula

//This is where all the mathematical operations and use of relevant formula are done.
s=(side1+side2+side3+side4)/2; //'S' is the formula of getting the semi-perimeter of the parallelogram
ang1rad=(ang1*3.142857)/180;
ang2rad=(ang2*3.142857)/180;
theta=ang1rad+ang2rad; //sum of the two angles
abcd=side1*side2*side3*side4;
costhingy=cos(theta/2);
cosinesquared=costhingy*costhingy;
area=sqrt(((s-side1)*(s-side2)*(s-side3)*(s-side4))-(abcd*cosinesquared)); //Based on the Bretschneider′s formula. The unit is in square meters


//Here is where the variable area which is in meters will be converted into the various required units
hectares=area/10000;
acres=area/4047;
sqkm=area/1000000;
sqmi=area/2590000;

//This section is used for checking if the variables inserted into the formula is correct.
printf("\nChecking Section:");
printf("\nSemi perimeter %(s%) is= %.4f",s);
printf("\nTheta is= %.4f",theta);
printf("\nCosine in Radians= %.4f",costhingy);
printf("\nCosine Squared= %.4f",cosinesquared);

printf("\n\nThe Area in different Units(If you get an answer like 0.00000,");
printf("\nit simply means that the values inputted are too small and due to");
printf("\nthe limitations of the double only being able to display certain decimal precision):\n");
printf("\nArea in square meters= %.6f",area);
printf("\nArea in hectares= %.6f",hectares);
printf("\nArea in acres= %.6f",acres);
printf("\nArea in square kilometers= %.6f",sqkm);
printf("\nArea in square miles= %.6f",sqmi);
}

//This section is for when you picked square
else if(pick=='a'){
printf("\nYou chose square(Values inputted are in meters):\n");//A disclaimer that the values you inputted are assumed to be in meters
printf("Measurement of 1 side:");
printf("\nInput a fraction? i.e(3/4, 5/2, etc.) y/n: "); scanf(" %c", &squarefraction);
 if(squarefraction=='y'){   //The decision case that gives you the option to enter a fraction's numerator and denominator
         printf("Numerator= "); scanf("%d",&squarenum);
            printf("Denominator= "); scanf("%d",&squaredenum);
            squareside=(double)squarenum/(double)squaredenum;  //It simply divides your inputted num and denum
            printf("Side: %d/%d or %.2f\n\n",squarenum,squaredenum,squareside);    //displays the values which you inputted num, denum, and the quotient which will be assigned value for that side
    }
    else{   //Decision case for which you chose to input a whole number or a decimal
        printf("\nSide: "); scanf("%lf",&squareside);
    }
double squarearea,squaresqm,squarehectares,squareacres,squaresqkm,squaresqmi; //All variables to be used and inserted into the formula

//This is where all the mathematical operations and use of relevant formula are done.
squarearea=squareside*squareside; //Simply 4 equal sides so simply L X W


//Here is where the variable area which is in meters will be converted into the various required units
squarehectares=squarearea/10000;
squareacres=squarearea/4047;
squaresqkm=squarearea/1000000;
squaresqmi=squarearea/2590000;

printf("\n\nThe Area in different Units(If you get an answer like 0.00000,");
printf("\nit simply means that the values inputted are too small and due to");
printf("\nthe limitations of the double only being able to display certain decimal precision):\n");
printf("\nArea in square meters= %.6f",squarearea);
printf("\nArea in hectares= %.6f",squarehectares);
printf("\nArea in acres= %.6f",squareacres);
printf("\nArea in square kilometers= %.6f",squaresqkm);
printf("\nArea in square miles= %.6f",squaresqmi);

}

//this section is for when you pick rectangle
else if(pick=='b'){
printf("\nYou chose rectangle(Values inputted are in meters):\n");//A disclaimer that the values you inputted are assumed to be in meters
printf("Measurement of Length:");
printf("\nInput a fraction? i.e(3/4, 5/2, etc.) y/n: "); scanf(" %c", &rfl);
 if(rfl=='y'){   //The decision case that gives you the option to enter a fraction's numerator and denominator
         printf("Numerator= "); scanf("%d",&r1n);
            printf("Denominator= "); scanf("%d",&r1d);
            rl=(double)r1n/(double)r1d;  //It simply divides your inputted num and denum
            printf("Length: %d/%d or %.2f\n\n",r1n,r1d,rl);    //displays the values which you inputted num, denum, and the quotient which will be assigned value for that side
    }
    else{   //Decision case for which you chose to input a whole number or a decimal
        printf("\nLength: "); scanf("%lf",&rl);
    }
printf("Measurement of Width:");
printf("\nInput a fraction? i.e(3/4, 5/2, etc.) y/n: "); scanf(" %c", &rfw);
 if(rfw=='y'){   //The decision case that gives you the option to enter a fraction's numerator and denominator
         printf("Numerator= "); scanf("%d",&r2n);
            printf("Denominator= "); scanf("%d",&r2d);
            rw=(double)r2n/(double)r2d;  //It simply divides your inputted num and denum
            printf("Width: %d/%d or %.2f\n\n",r2n,r2d,rw);    //displays the values which you inputted num, denum, and the quotient which will be assigned value for that side
    }
    else{   //Decision case for which you chose to input a whole number or a decimal
        printf("\nWidth: "); scanf("%lf",&rw);
    }
double rectarea,rectsqm,recthectares,rectacres,rectsqkm,rectsqmi; //All variables to be used and inserted into the formula

//This is where all the mathematical operations and use of relevant formula are done.
rectarea=rl*rw; //Area of a rectangle is L X W


//Here is where the variable area which is in meters will be converted into the various required units
recthectares=rectarea/10000;
rectacres=rectarea/4047;
rectsqkm=rectarea/1000000;
rectsqmi=rectarea/2590000;

printf("\n\nThe Area in different Units(If you get an answer like 0.00000,");
printf("\nit simply means that the values inputted are too small and due to");
printf("\nthe limitations of the double only being able to display certain decimal precision):\n");
printf("\nArea in square meters= %.6f",rectarea);
printf("\nArea in hectares= %.6f",recthectares);
printf("\nArea in acres= %.6f",rectacres);
printf("\nArea in square kilometers= %.6f",rectsqkm);
printf("\nArea in square miles= %.6f",rectsqmi);

}

//This is for the case you pick Rhombus;
else if(pick=='c'){
printf("\nYou chose Rhombus(Values inputted are in meters):\n");//A disclaimer that the values you inputted are assumed to be in meters
printf("Measurement of 1st Diagonal:");
printf("\nInput a fraction? i.e(3/4, 5/2, etc.) y/n: "); scanf(" %c", &romfrac1);
 if(romfrac1=='y'){   //The decision case that gives you the option to enter a fraction's numerator and denominator
         printf("Numerator= "); scanf("%d",&rom1n);
            printf("Denominator= "); scanf("%d",&rom1d);
            romd1=(double)rom1n/(double)rom1d;  //It simply divides your inputted num and denum
            printf("1st Diagonal: %d/%d or %.2f\n\n",rom1n,rom1d,romd1);    //displays the values which you inputted num, denum, and the quotient which will be assigned value for that side
    }
    else{   //Decision case for which you chose to input a whole number or a decimal
        printf("\1st Diagonal: "); scanf("%lf",&romd1);
    }
printf("Measurement of 2nd Diagonal:");
printf("\nInput a fraction? i.e(3/4, 5/2, etc.) y/n: "); scanf(" %c", &romfrac2);
 if(romfrac2=='y'){   //The decision case that gives you the option to enter a fraction's numerator and denominator
         printf("Numerator= "); scanf("%d",&rom2n);
            printf("Denominator= "); scanf("%d",&rom2d);
            romd2=(double)rom2n/(double)rom2d;  //It simply divides your inputted num and denum
            printf("2nd Diagonal: %d/%d or %.2f\n\n",rom2n,rom2d,romd2);    //displays the values which you inputted num, denum, and the quotient which will be assigned value for that side
    }
    else{   //Decision case for which you chose to input a whole number or a decimal
        printf("\2nd Diagonal: "); scanf("%lf",&romd2);
    }
double romarea,romsqm,romhectares,romacres,romsqkm,romsqmi; //All variables to be used and inserted into the formula

//This is where all the mathematical operations and use of relevant formula are done.
romarea=(romd1*romd2)/2; //Using the formula of the rhombus to get its area using 2 diagonals

//Here is where the variable area which is in meters will be converted into the various required units
romhectares=romarea/10000;
romacres=romarea/4047;
romsqkm=romarea/1000000;
romsqmi=romarea/2590000;

printf("\n\nThe Area in different Units(If you get an answer like 0.00000,");
printf("\nit simply means that the values inputted are too small and due to");
printf("\nthe limitations of the double only being able to display certain decimal precision):\n");
printf("\nArea in square meters= %.6f",romarea);
printf("\nArea in hectares= %.6f",romhectares);
printf("\nArea in acres= %.6f",romacres);
printf("\nArea in square kilometers= %.6f",romsqkm);
printf("\nArea in square miles= %.6f",romsqmi);

}

else{
    printf("You inputted '%c' which is not part of the choices",pick);
}

}
