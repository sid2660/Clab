/*
#include <stdio.h>
int main()
{
	int x= 22,y=20;
	if(x>y)
	{
		printf("x is greater than y\n");
	}
	if(x<y)
	{
		printf("X is less than Y\n");
	}
	if(x==y)
	{
		printf("X is == y\n");
	}
	if(x!=y)
	{
		printf("x is not equal to y\n");
	}
}

*/
/*
#include<stdio.h>
int main()
{
	int a,b,even,positive;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);

	if(a==b)
	{
		printf("A is == B\n");
	}
	else
	{
		printf("A is not == B\n");
	}
	// check even odd
	even = a%2;
	if(even==0)
	{
		printf("Value is even\n");
	}
	else
	{
		printf("Value is odd\n");
	}
	// Negative or positive
	if (a<0)
	{
		printf("A is netagive\n");
	}
	else
	{
		printf("A is Positive \n");
	}
}
*/

#include<stdio.h>
int main()
{
	int year;  
    printf("Enter a year: ");  
    scanf("%d", &year);  
    if(((year%4==0) && ((year%400==0) || (year%100!=0))))
    {  
        printf("%d is a leap year\n",year);  
    } 
	else 
	{  
        printf("%d is not a leap year\n",year);  
    }  
}
