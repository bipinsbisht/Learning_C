#include <stdio.h>
int main()
{
    float num1, num2, c;
    printf("enter the numbers\n");
    scanf("%f %f", &num1, &num2);
    printf("Before swap  %f %f are \n", num1, num2);
    c = num2;

    num2 = num1;
    num1 = c;

    printf("numbers after swar are num1,num2 %f %f", num1, num2);
    return 0;
}