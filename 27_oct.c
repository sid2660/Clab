/*

#include<stdio.h>
int main()

{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    printf("Value of (a<b) && a!=b: %d\n",(a<b)&&(a!=b));
    printf("Value of (a<b) || b<a: %d\n",(a<b)||(b<a));
    printf("Value of !(a==b): %d\n",!(a==b));


}

*/
//  2

#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Enter the age of A: ");
    scanf("%d",&a);
    printf("Enter the age of B: ");
    scanf("%d",&b);

    (x>=18)? printf("B id Eligible for voting\n"):printf("A is Not eligible for voting\n");
    return 0;
}