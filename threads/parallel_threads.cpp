#include <iostream>
#include <thread>

void work(std::string tname){
    std::cout << tname << "Working...." << std::endl;
}

int main(){

    std::thread t1(work, "T1");
    std::thread t2(work, "T2");

    t1.join();
    t2.join();

    return 0;
}