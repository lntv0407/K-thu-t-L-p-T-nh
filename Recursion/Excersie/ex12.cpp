#include <iostream>
using namespace std;

int Tongsonapchai(int TongSoChai, int NapHienCo) {
    int NapDu = 0, Chai;
    if(NapHienCo % 4 == 0) Chai = NapHienCo / 4;
    else {
        Chai = NapHienCo / 4;
        NapDu = NapHienCo * 4;
    }
    TongSoChai += Chai;
    if((Chai + NapDu) > 4) return Tongsonapchai(TongSoChai, Chai + NapDu);
    return TongSoChai;
}