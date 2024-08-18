#include <stdio.h>

int main(void)
{
    int radius, height;
    float pi = 3.14;
    float volume;

    printf("Enter the radius of the cylinder\n");
    scanf("%d", &radius);
    printf("Enter the height of the cylinder\n");
    scanf("%d", &height);

    volume = pi * radius * radius * height;
    printf("Volume of the Cylinder = %0.2f \n", volume);

    return 0;
}