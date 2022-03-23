#include <iostream>
using namespace std;

double Sum(double sum, int n) {
    if(n == 0) return sum;
    sum += (double) 1/n;
    return Sum(sum, n -= 1);
}

int main() {
    double sum = 0;
    int n; cout << "Enter n: "; cin >> n;
    sum = Sum(sum, n);
    cout << "Value: " << sum;
    return n;
}