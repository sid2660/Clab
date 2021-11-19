/*
#include<stdio.h>
int main()
{
    int a,b,c,d,result;
    
    printf("Enter the value of a,b,c&d: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    result = a+b*c+d;
    printf("The value of result 1 is: %d\n",result);
    result = a+(b*c)+d;
    printf("The value of result 2 is: %d\n",result);
    result = (a+b)*(c+d);
    printf("The value of result 3 is: %d\n",result);
    result = (a+b)*c+d;
    printf("The value of result 4 is: %d\n",result);
}
*/
// 08/11/2021
/*
#include<stdio.h>
int main()
{
    int a=6,b=2,c=3,d=12,e=4,r;
    r= a*a+b-d/e+c;
    printf("r = %d\n",r);
}

*/

///2
/*

// p=3,r=6,q=2,w=14,x=3
// p*r%q+w/x
#include<stdio.h>
int main()
{
    int  p=3,r=6,q=2,w=14,x=3,res;
    res = p*r%q+w/x;
    printf("Result is:%d\n",res);

}
*/

//  3
/*
// a=10,b=5,c=2,d=4,e=3
// a/b%c+d*e

#include<stdio.h>
int main()
{
    int a=10,b=5,c=2,d=4,e=3,res;
    res = a/b%c+d*e;
    printf("Result is: %d\n",res);
}
*/

/// 4
/*


 //   Exercise 2:

 //   res=a*(b+c)*d-e

  //   a = 2.5,b=3,c=10,d=2,e=4
 //    output = 61


#include<stdio.h>
int main()
{
    int a=2.5,b=3,c=10,d=2,e=4,res;
    res=a*(b+c)*d-e;
    printf("Result is: %d\n",res);
}

*/
/*
////////////////
#include<stdio.h>
int main()
{
    int v1=10 ,v2=3;
    float res;
    res =v1/(float)v2;
    printf("Result with type casting is: %f\n",res);
}
*/

// Exercise 

/// total student = 10
// total marks = 20
// average = sum total marks obtained/total student

#include <stdio.h>
int main()
{
    double s1=10,s2=12,s3=16,s4=20,s5=5,s6=10,s7=3,s8=18,s9=18,s10=20,avg;
    avg = (s1+s2+s3+s4+s5+s6+s7+s8+s9+s10)/10;
    printf("The Average is: %lf\n",avg);
}

// 