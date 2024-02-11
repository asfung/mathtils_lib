#include<iostream>

// bisa mirip dibilang generic lah, dengan T(ype) definition
template<typename T>
void print(T value){
    std::cout << value << std::endl;
}


int main(){
    print("halo dunia");
}


