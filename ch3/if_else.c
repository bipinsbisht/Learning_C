#include <stdio.h>
int main(){
    float marks;
    printf("Enter The Marks\n");

    scanf("%f",&marks);

   /* 90 – 100 => A 
80 – 90 => B 
70 – 80 => C 
60 – 70 => D 
50 – 60 => E 
<50   */     


    if (marks>90 && marks<=100){
        printf("grade A\n");
    }
    else if (marks>80 && marks<=90){
        printf("grade B\n");
    }
    else if (marks>70 && marks<=80){
        printf("grade C\n");
    }
    else if (marks>60 && marks<=70){
        printf("grade D\n");
    }
    else if (marks>50 && marks<=60){
        printf("grade E\n");
    }
    else{
        printf("FAIL");
    }
    
  return 0;
}