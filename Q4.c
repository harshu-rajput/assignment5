#include<stdio.h>
int main(){

int x,i;
printf("enter the no : ");
scanf("%d",&x);

for(i=1;i<=x;i+=2){
    printf("%d \n",i);
}

return 0;
}