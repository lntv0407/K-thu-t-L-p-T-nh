#include <iostream>
#include <fstream>
using namespace std;

void Input(int *a) {
    ifstream f ("input.txt");
    int i = 0;
    if(f.is_open()) {
        while(f.good()) {
            f >> a[i];
            cout << a[i] << " ";
            i++;
        }
        f.close();
    } else cout << "unable to open file";
}

bool Check(int n) {
    if(n < 2) return false;
    if(n == 2) return true;
    for(int i = 3; i < n; i++)
        if(n % i == 0) return false;
    return true;
}

void Write(int* a) {
    ofstream f;
    f.open ("output.txt");
    for(int i = a[0]; i < a[1]; i++) 
        if(Check(i))
            f << i << " ";
    f.close();
}

int main() {
    int *a = NULL;
    a = new int[2];
    Input(a);
    Write(a);
    delete[]a;
}