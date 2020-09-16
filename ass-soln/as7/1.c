#include <math.h>
#include <stdio.h>
#define LIMIT 0.001
#define MAX_ITER 1000000

double f(double x);
double df(double x);
void bisection(double a, double b);
void regulaFalsi(double a, double b);
double nRapson(double x);

int main() {
    printf(
        "Enter 1 for bisection method\n"
        "2 for regula falsi method\n3 for "
        "Newton-Rapson method\n");
    int op;
    scanf("%d", &op);
    switch (op) {
        case 1:
            printf("Enter lower n upper bounds\n");
            double ul, ll;
            scanf("%lf %lf", &ll, &ul);
            bisection(ll, ul);
            break;
        case 2:
            printf("Enter lower n upper bounds\n");
            double ul, ll;
            scanf("%lf %lf", &ll, &ul);
            regulaFalsi(ul, ll);
            break;
        case 3:
            printf("Enter your guess\n");
            double x;
            scanf("%lf", &x);
            nRapson(x);
            break;
        default:
            printf("SOrry invaid choice");
            break;
    }
    double ul, ll;
    scanf("%lf %lf", &ll, &ul);
    nRapson(ll);
}

double nRapson(double x) {
    double h = f(x) / df(x);
    while ((h > 0.0 && h >= LIMIT) || (h < 0.0 && h >= -LIMIT)) {
        h = f(x) / df(x);
        x = x - h;
        if (f(x) == 0) break;
    }
    printf("Root is %lf", x);
}

void regulaFalsi(double a, double b) {
    if (f(a) * f(b) >= 0) {
        printf("Sorry no root exsists between %lf and %lf", a, b);
        return;
    }
    double c;
    for (int i = 0; i < MAX_ITER; i++) {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));

        if (f(c) == 0) {
            break;
        } else if (f(a) * f(c) < 0.0) {
            b = c;
        } else {
            a = c;
        }
    }
    printf("The root is %lf", c);
}

void bisection(double a, double b) {
    if (f(a) * f(b) >= 0) {
        printf("Sorry no root exsists btween %lf and %lf", a, b);
        return;
    }
    double c = a;
    while ((b - a) >= LIMIT) {
        c = (a + b) / 2;

        if (f(c) == 0.0) {
            break;
        } else if (f(c) * f(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    printf("The root  is % lf", c);
}

/*  this function represents the mathametical function
    f(x)=x^3+15*x^2-1500*x+12500=(x-25)(x-10)(x+50)
*/
double f(double x) {
    return (x * x * x) + (15.0 * x * x) - (1500.0 * x) + 12500.0;
}
/*
    derivative of the above function
*/
double df(double x) { return (3 * x * x) + (30.0 * x) + 1500.0; }
