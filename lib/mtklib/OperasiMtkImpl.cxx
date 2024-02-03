#include<stdexcept>
#include "OperasiMtk.h"

int MTK::Operasi::tambah(const int &a, const int &b){
    return a + b;
}

int MTK::Operasi::kurang(const int &a, const int &b){
    return a - b;
}

int MTK::Operasi::kali(const int &a, const int &b){
    return a * b;
}

int MTK::Operasi::bagi(const int &a, const int &b){
    if(b == 0) throw std::overflow_error("dibagi dengan 0 adalah bencana");
    return a/b;
}

