#include<iostream>
#include <chrono>

/*namespace std::chrono {
    class Testing{
        public:
            void day(){}
    };
}*/

using namespace std::chrono;

int main(){
    milliseconds mil(100);
    mil = mil*60;

    std::cout << "duration (in periods): ";
    std::cout << mil.count() << " milliseconds.\n";

}
