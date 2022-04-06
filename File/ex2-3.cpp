#include <iostream>
#include <fstream>
using namespace std;

int** Allocate(int n, int m) {
    int** temp = new int*[n];
    for(int i = 0; i < n; i++) 
        temp[i] = new int[m];
    return temp;
}

void Input(ifstream& f, int** a, int n, int m) {
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++)
            f >> a[i][j];
}

void Write(int** a, int n, int m) {
    ofstream f;
    f.open ("WrittenMatrix.txt");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            f << a[i][j] << " ";
        f << endl;
    }
    f.close();
}

void Delete(int** a, int n) {
    for(int i = 0; i < n; i++) 
        delete[] a[i];
    delete[] a;
}

int main() {
    int** a = NULL;
    int n, m;
    ifstream f("matrix.txt");
    if(f.is_open()) {
        f >> n;
        f >> m;
    } else {
        cout << "Unable to open file";
        exit(0);
    }
    a = Allocate(n, m);
    Input(f, a, n, m);
    Write(a, n, m);
    f.close();
    Delete(a, n);
    return 0;
}