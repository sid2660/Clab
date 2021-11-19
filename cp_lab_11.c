/* 
	Problem 1. Write a program to print a message "WELCOME TO CP LAB".

Problem 2. Write a program to swap two number.
    1. Read two number say a and b.
    2. Create a temporary variable.
    3. Assign value of a to temp.
    4. Assign value of b to a.
    5. Assign value of temp to b.
    6. Display the value of swapped value of a and b.
*/
/*
#include <stdio.h>

int main()
{
	int a;
	int b;
	int temp;
	a = 10;
	b = 20;
	printf("******* Befor Exchange ******\n");
	printf("Value of a is %d\n",a);
	printf("Value of b is %d\n",b);
	printf("******************************\n");

	temp = a;
	a = b;
	b = temp;
	printf("******* After Exchange ******\n");
	printf("Value of a is %d\n",a);
	printf("Value of b is %d\n",b);
	printf("******************************\n");
	return 0;
}
*/
/*

Problem 3. Write a program to swap two number.
    1. Read two number say a and b.
    2. Add value of a and b, assign it to a i.e, a = a+b.
    3. Subtract by a, assign it to b i.e, b = a-b.
    4. Subtract b by a, assign it to a i.e, a = a-b.
    5. Display the value of swapped value of a and b.

*/

/*
#include <stdio.h>

int main()
{
	int a;
	int b;
	a = 10;
	b = 20;
	printf("******* Befor Exchange ******\n");
	printf("Value of a is %d\n",a);
	printf("Value of b is %d\n",b);
	printf("******************************\n");

	a = a+b;
	b = a-b;
	a = a-b;	

	printf("******* After Exchange ******\n");
	printf("Value of a is %d\n",a);
	printf("Value of b is %d\n",b);
	printf("******************************\n");
	return 0;
}

*/


/*
Problem 4. Write a program to find area of a circle.
    1. Read radius r.
    2. Set pi value = 3.14
    3. Compute area of the circle.
    4. Display the area of the circle value.
*/
/*
#include <stdio.h>
int main()
{
	float radius;
	float perimeter;
	float pi = 3.14;

	printf("Enter the value of radius: ");
	scanf("%f",&radius);
	
	perimeter = 2*pi *radius;
	printf("perimeter is %.2f\n",perimeter);

	return 0;
}
*/


/*
Problem 5. Write a program to compute the following expression.
    d = p+q/r


*/

//      22/10/2021 _1
/*
#include<stdio.h>
int main()
{
	printf("Storage space of int is: %ld bytes\n",sizeof(int));
	printf("Storage space of float is: %ld bytes\n",sizeof(float));
	printf("Storage space of char is: %ld bytes\n",sizeof(char));
	printf("Storage space of double is: %ld bytes\n",sizeof(double));

	return 0;
}
*/

//     2

/*
#include<stdio.h>

int main()
{
	double a=1.1234567890, b= 2.123456765432;
	printf("Value of a =%0.10f b=%0.10lf\n",a,b);

}

*/

//    3

/*
#include<stdio.h>

int main()
{
	char a, b,ch='h';
	printf("Enter the First Character and Second Character: ");
	scanf("%c %c",&a,&b);
	

	printf("The Character a is: %c \nCharacter b is: %c\nCharacter ch is: %c\n",a,b,ch);

}
*/

//    4


#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);

	printf("Addition of a+b = %d\n",a+b);
	printf("Subtraction of a-b= %d\n",a-b);
	printf("Multiplication of a*b = %d\n",a*b);
	printf("Division of a/b = %d\n",a/b);
}
