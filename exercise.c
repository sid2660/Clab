// Pre increment/decrement operator


#include<stdio.h>
int main()
{
    int x = 2, y = 3, res;

    printf("Initial value of x = %d\n", x); // print the initial value of x
    printf("Initial value of y = %d\n\n", y); // print the initial value of y

    res = --x -y; // Pre decrement of x
    printf("The output of Result is %d\n\n",res);

    printf("After incrementing by 1: x = %d\n", x);
    printf("y = %d\n\n", y);

    printf("After decrementing by 1: x = %d\n", x);
    printf("y = %d\n\n", y);

    // Signal to operating system everything works fine
    return 0;
}


// Post Increment/Decrement operator 
/*
#include<stdio.h>

int main()
{
    int x = 2, y = 3, res;
    // res = resultant variable

    printf("Initial value of x = %d\n", x); // print the initial value of x
    printf("Initial value of y = %d\n\n", y); // print the initial value of y

    res = x -- -y; // Post decrement of x
    printf("The output of Result is %d\n\n",res);
    
    printf("After incrementing by 1: x = %d\n", x);
    printf("y = %d\n\n", y);
    
    printf("After decrementing by 1: x = %d\n", x);
    printf("y = %d\n\n", y);

    // Signal to operating system everything works fine
    return 0;
}
*/