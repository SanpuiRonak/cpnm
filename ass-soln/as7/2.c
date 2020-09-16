#include <math.h>
#include <stdio.h>
#define LIMIT 0.001
#define MAX_ITER 10000
int nRapson(double x);
int bisection(double ll, double ul);
double f(double x);
double df(double x);

double d;
int main() {
    printf("Enter c:\n");
    scanf("%d", &d);
    int op;
    printf(
        "Enter\n"
        "1 to use bisection method\n"
        "2 to use Newton-Rapson method\n");
    scanf("%d", &op);
    int rootNo1 = 3;
    int rootNo2 = 3;

    switch (op) {
        case 1:
            while (rootNo1 > 0) {
                double ll, ul;
                printf("Enter lower and upper limit\n");
                scanf("%lf %lf", &ll, &ul);
                int res = bisection(ll, ul);
                if (res == 0) {
                    printf("Guess again\n");
                    continue;
                } else {
                    printf("Enter guesss for next root,");
                    rootNo1--;
                    continue;
                }
            }
            break;
        case 2:
            while (rootNo2 > 0) {
                double x;
                printf("Enter your guess\n");
                scanf("%lf", &x);
                int res = nRapson(x);
                if (res == 0) {
                    printf("Guess again\n");
                    continue;
                } else {
                    printf("Enter guesss for next root,");
                    rootNo2--;
                    continue;
                }
                break;
                default:
                    printf("Invalid choice!");
                    break;
            }
    }
}

int bisection(double a, double b) {
    if (f(a) * f(b) >= 0) {
        printf("Sorry no root exsists btween %lf and %lf\n", a, b);
        return 0;
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
    printf("The root  is % lf\n", c);
    return 1;
}

int nRapson(double x) {
    double xl = x;
    double h = f(xl) / df(xl);
    int i = 0;
    while (abs(h) >= LIMIT && i < MAX_ITER) {
        h = f(xl) / df(xl);
        xl = xl - h;
        if (f(xl) == 0) break;
        i++;
    }
    printf("Root is %lf\n", xl);
}

double f(double x) { return x * tan(x) - d; }

double df(double x) { return tan(x) + x / (cos(x) * cos(x)); }