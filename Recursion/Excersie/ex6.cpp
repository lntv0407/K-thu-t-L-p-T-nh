#include <iostream>
#include "m.h"
using namespace std;

void Input(int* a, int n) {
    for(int i = 0; i < n; i++) 
        cin >> *(a + i);
}

int Sum(int temp, int x, int n, int *a, int i) {
    if(n < 0) return temp;
    temp += pow(n, 2) * a[i];
    return Sum(temp, x, n -= 1, a, i += 1);
}

int main() {
    int x; cout << "Enter x: "; cin >> x;
    int n; cout << "Enter n: "; cin >> n; 
    int* a = new int[n];
    Input(a, n);
    int s = 0, i = 0;
    s = Sum(s, x, n, a, i);
    cout << "Value: " << s;
    delete []a;
    return 0;
}