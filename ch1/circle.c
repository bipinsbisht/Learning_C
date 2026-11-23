#include <stdio.h>
int main()
{
    int radius;
    radius = 5;
    float area_of_circle;
    area_of_circle = 3.14 * (radius * radius);

    printf("area of circle is %f", area_of_circle);
    float cone;
    float height=12.3;

    cone = area_of_circle*height;
    printf("vol of cone is %f", cone);

    return 0;
}