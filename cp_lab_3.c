//   1

/*
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);

	printf("Addition of a+b = %d\n",a+=b);
    // a = a+b
	printf("Subtraction of a-b= %d\n",a-=b);
    // a = a-b
	printf("Multiplication of a*b = %d\n",a*=b);
    // a = a*b
	printf("Division of a/b = %d\n",a/=b);
    // a = a/b
}

*/

//     2

// Pre increment/decrement operator


#include<stdio.h>
int main()
{
    int x = 2, y = 3, res;

    printf("Initial value of x = %d\n", x); // print the initial value of x
    printf("Initial value of y = %d\n\n", y); // print the initial value of y

    res = ++x +y; // Pre increment of x
    printf("The output of Result is %d\n\n",res);

    printf("After incrementing by 1: x = %d\n", x);
    printf("y = %d\n\n", y);

    printf("After decrementing by 1: x = %d\n", x);
    printf("y = %d\n\n", y);

    // Signal to operating system everything works fine
    return 0;
}



// 3
// Post Increment/Decrement operator 
/*
#include<stdio.h>

int main()
{
    int x = 2, y = 3, res;
    // res = resultant variable

    printf("Initial value of x = %d\n", x); // print the initial value of x
    printf("Initial value of y = %d\n\n", y); // print the initial value of y

    res = x ++ +y; // Post increment of x
    printf("The output of Result is %d\n\n",res);
    
    printf("After incrementing by 1: x = %d\n", x);
    printf("y = %d\n\n", y);
    
    printf("After decrementing by 1: x = %d\n", x);
    printf("y = %d\n\n", y);

    // Signal to operating system everything works fine
    return 0;
}
*/