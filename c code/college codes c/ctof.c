#include<stdio.h>
int main() {
    int c, f;
    printf("enter temperature in celcius: ");
    scanf("%d", &c);
    float convert = ((c*1.8) + 32);
    printf("temperature in fahrenheit: %f", convert);
    return 0;


}