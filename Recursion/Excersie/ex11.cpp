#include <iostream>
using namespace std;

int Sum(int temp, int n) {
    if(n == 0) return temp;
    if((n % 10) % 2 == 0) temp += (n % 10);
    return Sum(temp, n /= 10);
}

int main() {
    int n; cout << "Enter n: "; cin >> n; 
    int* a = new int[n];
    
    count = Sum(count, n);
    cout << "Enter sum: " << count;
    return 0;
}