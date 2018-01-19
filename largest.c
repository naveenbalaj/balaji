#include<stdio.h>
int main()
{ 
    int p,b,c;
    int largest;
 
    printf("Enter three numbers \t:");
    scanf("%d%d%d",&p,&b,&c);
 
    if(p>b && a>c)        
        largest=p;
    else if(b>p && b>c)       
        largest=b;
    else
        largest=c;
 
    printf("Largest number is = %d",largest);
 
    return 0;
}
