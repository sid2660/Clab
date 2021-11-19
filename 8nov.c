// Gross salary = basic salary + hra + da
// net salary = gross - professional tax - income tax
// professional tax = 200
// Income tax = 10%
#include<stdio.h>
int main()
{
    double Gross_s= 1000, basic_s=800 , hra=150, da=50, pro_tax=200,income_tax,net_s;
    income_tax = 0.1*Gross_s;
    net_s = Gross_s - pro_tax - income_tax;

    printf("The Net salary is: %lf\n",net_s);

}