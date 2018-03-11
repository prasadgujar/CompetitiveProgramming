#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main()
{
    double param, result;
    param = 1.0;
    result = atan(param) * 180 / PI;
    printf("The arc tanget of %f is %f degrees \n", param, result);
    return 0;
}