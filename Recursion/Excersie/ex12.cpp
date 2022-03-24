#include <iostream>
#include "OP.h"
using namespace std;

bool CheckPrimeNumber(int n) {
    if(n < 2) return false;
    else if(n == 2) return true;
    else {
        for(int i = 2; i < n; i++) 
            if(n % i == 0) return false;
        return true;
    }
}

int Sum(int s, int *a, int n) {
    if(n == 1)
        if(CheckPrimeNumber(a[0])) 
            return s *= a[0];
        else return s;
    if(CheckPrimeNumber(a[n - 1])) s *= a[n - 1];
    return Sum(s, a, n -= 1);
}


int main() {
    int n; cout << "Enter n: "; cin >> n; 
    int* a = new int[n];
    
    Input(a, n);
    Output(a, n);

    int s = 1;
    s = Sum(s, a, n);
    cout << "Value: " << s;
    delete []a;
    return 0;
}