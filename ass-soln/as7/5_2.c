
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000

// constants for defined functions
#define M 1
#define A 2
#define B 3
#define C 4

int integrate(double (*f)(double), double a, double b);

// Linear function :
double linear(double x) { return M * x + C; }
// Quadratic function :
double quadratic(double x) { return A * x * x + B * x + C; }
// Constant function :
double constant(double x) { return C; }

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Bad command line argument\n");
        printf(
            "Please use the format ./<executable name> <function name> <a> "
            "<b>\n");
        printf(
            "  <function name> : Name of the integrand\n"
            "\tc or C for constant function \n"
            "\tl or L for linear function \n"
            "\tq or Q for quadratic function \n");
        printf("  <a> : lower limit for integration\n");
        printf("  <b> : upper limit for integration\n");

        return 0;
    }
    char ch = *(argv[1]);
    double a = strtod(argv[2], NULL);
    double b = strtod(argv[3], NULL);
    switch (ch) {
        case 'c':
        case 'C':
            integrate(constant, a, b);
            break;
        case 'l':
        case 'L':
            integrate(linear, a, b);
            break;
        case 'q':
        case 'Q':
            integrate(quadratic, a, b);
            break;
        default:

            printf("Bad command line argument\n");

            printf(
                "Please use the format ./<executable name> <function name> <a> "
                "<b>\n");
            printf(
                "  <function name> : Name of the integrand\n"
                "\tc or C for constant function \n"
                "\tl or L for linear function \n"
                "\tq or Q for quadratic function \n");
            printf("  <a> : lower limit for integration\n");
            printf("  <b> : upper limit for integration\n");
    }
}

int integrate(double (*f)(double), double a, double b) {
    printf("Using trapezoidal method : \n");
    double h = (b - a) / N;
    double s = f(a) + f(b);
    int i;
    for (i = 1; i < N; i++) {
        s += 2.0 * f(a + i * h);
    }
    printf("Result : %lf\n", ((h / 2) * s));

    printf("Using Simpson method : \n");
    h = (b - a) / N;
    s = 0;
    for (i = 0; i < N; i++) {
        if (i == 0 || i == N)
            s += f(a + i * h);
        else if (i % 2 != 0)
            s += 4 * f(a + i * h);
        else
            s += 2 * f(a + i * h);
    }
    printf("Result : %lf\n", (s * (h / 3)));
}
