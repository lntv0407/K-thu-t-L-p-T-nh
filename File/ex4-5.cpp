#include <iostream>
#include <fstream>
using namespace std;

struct Fraction {
    int num;
    int den;
};

void Ex4() {
    ifstream f ("ArrayOfFrac.txt");
    Fraction *a = new Fraction;
    char t; f >> t;
    if(f.is_open()) {
        f >> a->num;
        f >> t;
        f >> a->den;
    }
    cout << a->num << "/" << a->den;
    f.close();
}

void Ex5() {
    ifstream f ("ArrayOfFrac.txt");
    if(f.is_open()) {
        int n; f >> n;
        Fraction *a = NULL;
        a = new Fraction[n];
        char t;
        while(f.good()) {
            for(int i = 0; i < n; i++) {
                f >> a[i].num;
                f >> t;
                f >> a[i].den;
                cout << a[i].num << "/" << a[i].den << endl;
            }
        }
        delete[] a;
        f.close();
    } else cout << "Unable to open file";
}

int main() {
    Ex4();
    //Ex5();
    return 0;
}