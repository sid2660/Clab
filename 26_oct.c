#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter he value of a: ");
    scanf("%d",&a);
    printf("Enter he value of b: ");
    scanf("%d",&b);
    

    printf("Value of C: %d\n",c=a+b);
    printf("Value of += %d\n",c+=b);
    printf("Value of -=: %d\n",c -= b);
    printf("Value of *= %d\n",c*=b);
    printf("Value of /=: %d\n",c/=b);
    printf("Value of division %d\n",c%=b);

}