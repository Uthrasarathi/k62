#include<stdio.h>
#include<conio.h>
void main()
{
long  num,dec_num,rem,base=1,binary=0;
printf("Enter a decimal\n");
scanf("%ld",&num);
dec_num=num;
while(num>0)
{
rem=num%2;
binary=binary+rem*base;
num=num/2;
base=base*10;
}
printf("%ld",dec_num);
printf("%ld\n",binary);
getch();
}
