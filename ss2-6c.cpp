#include <stdio.h>

int main() {
    const float PI = 3.14;

    float radius = 5.0; 

    float circumference = 2 * PI * radius; 
    float area = PI * radius * radius;     

    printf("Bán kính hình tròn: %.2f cm\n", radius);
    printf("Chu vi của hình tròn: %.2f cm\n", circumference);
    printf("Diện tích của hình tròn: %.2f cm^2\n", area);

    return 0;
}
