#include <iostream>
#include "../lib/mtklib/OperasiMtk.h"

int main(){
    std::cout<<"pointer,memory leaked,contexpr,etc is very interesting, Uncle Udin"<<std::endl;

    MTK::Operasi operasi;
    int hasil1 = operasi.tambah(4, 1);
    int hasil2 = operasi.kurang(4, 1);
    int hasil3 = operasi.kali(4, 2);
    int hasil4 = operasi.bagi(6, 3);

    std::cout<<"jumlahan: "<<hasil1<<std::endl;
    std::cout<<"kurangan: "<<hasil2<<std::endl;
    std::cout<<"perkalian: "<<hasil3<<std::endl;
    std::cout<<"pembagian: "<<hasil4<<std::endl;
    
}
