#include <iostream>
#include <fstream>
using namespace std;

struct Point {
    int x;
    int y;
};

struct Circle {
    int r;
    Point p;
};

void ex8() {
    ifstream f ("ArrayOfC.txt");
    int n; f >> n; 
    if(f.is_open()) {
        Circle *a = new Circle;
        char t;
        f >> a->r;
        f >> a->p.x;
        f >> t;
        f >> a->p.y;
        cout << a->r << " " << a->p.x << ":" << a->p.y;
        f.close();
        delete[] a;
    }
}

void ex9() {
    ifstream f ("ArrayOfC.txt");
    if(f.is_open()) {
        int n; f >> n;
        Circle *a = NULL;
        a = new Circle[n];
        while(f.good()) {
            for(int i = 0; i < n; i++) {
                char t;
                f >> a[i].r;
                f >> a[i].p.x;
                f >> t; 
                f >> a[i].p.y;
                cout << a[i].r << " " << a[i].p.x << ":" << a[i].p.y << endl;
            }
        }
        f.close();
        delete[] a;
    }
}

int main() {
    //ex8();
    ex9();
    return 0;
}