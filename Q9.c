#include<stdio.h>
int main(){

int x,i;
printf("enter the no : ");
scanf("%d",&x);

for(i=1;i<=x;i++){
    
    printf("%d \n",i*i*i);

}

return 0;
}