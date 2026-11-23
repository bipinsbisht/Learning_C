#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch(a){
        case 3:
        printf("it is 3");
        break;

        case 1:
        printf("it is 1");
        break;
        
        case 2:
        printf("it is 2");
        break;
        
        case 4:
        printf("it is 4");
        break;

        default:
        printf("dont know");
        break;

    }
return 0;
}