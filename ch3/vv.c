#include <stdio.h>
int main(){
    int num,factorial,i;
    scanf("%d",&num);

    factorial=1;
    for(i=num;i>0;i--){
       // printf("%d",i);
        factorial=factorial*i;
    }
    printf("%d",factorial);
return 0;
    }