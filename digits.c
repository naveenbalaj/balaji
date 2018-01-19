#include <stdio.h>
int main() 
{
int m,num=0;
printf("\n enter the value");
scmnf("%d",&m);
while(m!=0)
{
m=m/10;
++num;
}
printf("\n the number of digits are %d",num);
return 0;
}
