float fahrenheit(float a);
#include <stdio.h>
int main()
{
    float a;
    printf("Enter the value of temperature in celcius\n");

    scanf("%f", &a);
    printf("the value of temperature in fahrenheit is  %f\n");
    return 0;
}
float fahrenheit(float a){
    float result;
     result = (float)(a*9/5)+32;
    return result;
}
