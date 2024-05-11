#include <stdio.h>
#include <math.h>

int main() {
    float radius, volume;

    scanf("%f", &radius);

    volume = (4.0 / 3.0) * M_PI * radius * radius * radius;

    printf("The volume of the sphere radius %.2f cubic units\n", volume);

    return 0;

    // Reference: https://learn.microsoft.com/en-us/cpp/c-runtime-library/math-constants?view=msvc-170#:~:text=2.30258509299404568402-,m_pi,-pi
}
