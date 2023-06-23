#include<stdio.h>
int main(){

int x,i;
printf("enter the no : ");
scanf("%d",&x);

for(i=x;i>=1;i--){
    if(i%2==0){
    printf("%d \n",i);
}
}

return 0;
}