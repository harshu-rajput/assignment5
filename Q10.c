#include<stdio.h>
int main(){

int x,i,j;
printf("enter the no : ");
scanf("%d",&x);

for(i=1;i<=10;i++){
     
    printf("%d * %d = %d\n",x,i,(i*x));
}


return 0;
}