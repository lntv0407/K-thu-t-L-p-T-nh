#include <iostream>
using namespace std;

bool Check3(int n) {
    while(n > 0) {
        int temp = n % 10;
        if((temp % 10) == 1) return true;
        n /= 10;
    }
    return false;
}

int main() {
    int n = 209;
    if(Check3(n)) cout << "Y";
    else cout << "N";
    return 0;
}