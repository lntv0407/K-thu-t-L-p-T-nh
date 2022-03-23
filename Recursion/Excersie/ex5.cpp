#include <iostream>
#include "m.h"
using namespace std;

double Total(int t, int n, int x) {
    if(n < 0) return t;
    t += (double) pow(x, 2*n + 1)/factorial(n);
    return Total(t, n -= 1, x);
}

int main() {
    int x; cout << "Enter x: "; cin >> x;
    int n; cout << "Enter n: "; cin >> n; 
    double s = 0;
    s = Total(s, n, x);
    cout << "Value: " << s;
    return 0;
}