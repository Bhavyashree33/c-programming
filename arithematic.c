#include <stdio.h>

int main(){
int x,y,z;
int a,b,c;
printf("enter a number x:");
scanf("%d",&x);
printf("enter a number y:");
scanf("%d",&y);
z=x+y;
a=x-y;
b=x*y;
c=x%y;
printf("substraction of the numbers:%d\n",a);
printf("multiplition of the numbers:%d\n",b);
printf("division of the numbers:%d\n",c);
printf("addition of the numbers:%d\n",z);
return 0;
}