#include <stdio.h>

struct data {
    double x;
    double y;
};

typedef struct data data;
double lagrange(data a[], int n, double xi);
double forwardDiff(data a[], int n, double xi);
double backwardDiff(data a[], int n, double xi);

int main() {
    int n;
    printf("Enter data set size:");
    scanf("%d", &n);
    data ar[n];
    printf("Enter x f(x) in this format for whole set\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &(ar[i].x), &(ar[i].y));
    }
    printf("Enter value to be interploated\n");
    double value;
    scanf("%lf", &value);
    printf(
        "Enter 1 for Lagrange method,\n"
        "2 for Newton's forward difference method,\n"
        "3 for Newton's backward difference method\n");
    int op;
    scanf("%d", &op);
    switch (op) {
        case 1:
            printf("Result through Lagrange method is %lf",
                   lagrange(ar, n, value));
            break;
        case 2:
            printf("Result through Newton's forward difference method is %lf",
                   forwardDiff(ar, n, value));
            break;
        case 3:
            printf("Result through Newton's backward difference method is %lf",
                   backwardDiff(ar, n, value));
            break;
        default:
            printf("Invalid choice please try again");
            break;
    }
}

double lagrange(data a[], int n, double xi) {
    double result = 0;
    for (int i = 0; i < n; i++) {
        double term = a[i].y;
        for (int j = 0; j < n; j++) {
            if (j != i) term = term * (xi - a[j].x) / (a[i].x - a[j].x);
        }
        result += term;
    }
    return result;
}

double forwardDiff(data a[], int n, double xi) {
    double yd[n][n];
    // initializing difference matrix
    for (int i = 0; i < n; i++) {
        yd[i][0] = a[i].y;
    }
    // calculating difference matrix
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++)
            yd[j][i] = yd[j + 1][i - 1] - yd[j][i - 1];
    }
    double r = (xi - a[0].x) / (a[1].x - a[0].x);
    double num = r;
    double deno = 1;
    double sum = yd[0][0];
    for (int i = 1; i < n; i++) {
        deno *= i;
        sum += (num * yd[0][i]) / deno;
        num *= (r - i);
    }
    return sum;
}

double backwardDiff(data a[], int n, double xi) {
    double yd[n][n];
    // initializing difference matrix
    for (int i = 0; i < n; i++) {
        yd[i][0] = a[i].y;
    }
    // calculating difference matrix
    for (int i = 1; i < n; i++) {
        for (int j = n - 1; j >= i; j--)
            yd[j][i] = yd[j][i - 1] - yd[j - 1][i - 1];
    }
    double r = (xi - a[n - 1].x) / (a[1].x - a[0].x);
    double num = r;
    double deno = 1;
    double sum = yd[n - 1][0];
    for (int i = 1; i < n; i++) {
        deno *= i;
        sum += (num * yd[n - 1][i]) / deno;
        num *= (r + i);
    }
    return sum;
}