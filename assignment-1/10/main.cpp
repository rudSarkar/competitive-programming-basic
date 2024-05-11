#include <stdio.h>
#include <math.h>

int main() {
    int power;
    double result;

    scanf("%d", &power);

    result = pow(2, power);

    printf("%.0lf\n", result);

    return 0;
}
