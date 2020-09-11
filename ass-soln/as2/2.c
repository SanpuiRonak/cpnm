#include <stdio.h>
#define For(i, n) fr(int i = 0; i < n; i++)

int main() {
    printf("Enter length and breadth\n");
    int l, b;
    scanf("%d %d", &l, &b);
    printf("Area of rectangle is %d\n", l * b);
    printf("Perimeter of Rectangle is %d\n", 2 * (l + b));
    printf("Enter Radius of circle\n");
    int r;
    scanf("%d", &r);
    printf("Area of circle is %f\n", 3.14 * r * r);
    printf("Permieter of circle is %f\n", 2 * 3.14 * r);
}