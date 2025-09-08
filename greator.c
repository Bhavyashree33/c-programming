#include <stdio.h>

int main(){
int x,y,z;
printf("enter a number x,y,z:");
scanf("%d %d %d",&x,&y,&z);
if(x>=y && x>=z){
    printf("the greatest number is:%d\n",x);
}
else if(y>=z && y>=x){
    printf("the greatest number is:%d\n",y);
}
else{
    printf("the largest number is:%d\n",z);
}
return 0;
}