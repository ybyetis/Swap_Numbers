#include<stdio.h>  
 int main()    
{    
int a,b;  
printf("Please give a number as 1st variable:");   
scanf("%d", &a);     
printf("Please give a number as 2st variable:");   
scanf("%d", &b);    
a=a+b;  
b=a-b;  
a=a-b;   
printf("The value of the 1st variable:%d",a);    
printf("\nThe value of the 2st variable:%d",b);    
return 0;  
} 
