//Program to convert decimal number into binary number

#include<stdio.h>
#include<conio.h>
void main()
{
long int n,b=0,i=1,r; //intialized b and i
clrscr();
printf("Enter the number in decimal= ");
scanf("%ld",&n);
while(n!=0)
{
r=n%2;
n=n/2;
b=b+(r*i);
i=i*10;
}
printf("Number in binary= %ld",b);
getch();
}
