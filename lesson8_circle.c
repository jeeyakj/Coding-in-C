#include <stdio.h>
#include <math.h>

int main(){

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    const double pi = M_PI;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    area = pi * pow(radius, 2);
    surfaceArea = 4 * pi * pow(radius, 2);
    printf("The area of the circle with radius %.2lf is %.2lf\n", radius, area);
    printf("The surface area of the sphere with radius %.2lf is %.2lf\n", radius, surfaceArea);


    return 0;
}