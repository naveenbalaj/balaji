#include<stdio.h>
int main()
{
int value,a,sum=0,temp;
printf("Enter a value");
scanf("%d",&value);
for(temp=value;value!=0;value=value/10)
{
a=value%10;
sum=sum*10+a;
}
if(temp==sum)
printf("%d is a palindaome",temp);
else
printf("%d is not a palindaome",temp);
return 0;
}
