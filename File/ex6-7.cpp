#include <iostream>
#include <fstream>
using namespace std;

struct Point{
    int x;
    int y;
};

void ex6() {
    Point *a = new Point;
    ifstream f ("ArrayOfP.txt");
    char t; f >> t;
    if(f.is_open()) {
        f >> a->x;
        f >> t;
        f >> a->y;
        f.close();
        cout << a->x << ":" << a->y; 
    }
    delete[] a;
}

void ex7() {
    ifstream f ("ArrayOfP.txt");
    if(f.is_open()) {
        int n; f >> n;
        Point *a = NULL;
        a = new Point[n];
        char t;
        while(f.good()) {
            for(int i = 0; i < n; i++) {
                f >> a[i].x;
                f >> t;
                f >> a[i].y;
                cout << a[i].x << ":" << a[i].y << endl;
            }
        }
        f.close();
        delete[] a;
    } else cout << "Unable to open file";
}

int main() {
    ex6();
    //ex7();
    return 0;
}