#include <stdio.h>

struct data {
    int x;
    int y;
};

typedef struct data data;
double lagrange(data a[], int n, double xi);

int main() {
    data ar[] = {{1, 1}, {2, 8}, {3, 27}, {4, 64}};
    printf("%lf", lagrange(ar, 4, 2.5));
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

double forwarDiff(data a[], int n, double xi) {
    double yd[n][n];
    // initializing difference matrix
    for (int i = 0; i < n; i++) {
        yd[i][0] = a[i].y;
    }
    (int)double r = (xi - a[0].x) / (a[1].x - a[0].x);
}