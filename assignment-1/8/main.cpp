#include <stdio.h>
#include <math.h>

int main() {
    float side1, side2, angle, radianAngle, area;

    scanf("%f %f %f", &side1, &side2, &angle);

    radianAngle = angle * M_PI / 180.0;

    area = 0.5 * side1 * side2 * sin(radianAngle);

    printf("Area: %.0f Square Unit\n", area);

    return 0;

    // reference: https://learn.microsoft.com/en-us/cpp/c-runtime-library/math-constants?view=msvc-170#:~:text=2.30258509299404568402-,m_pi,-pi
}
