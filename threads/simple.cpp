#include <iostream>
#include <thread>

void hello(){
    std::cout << "Hello" << std::endl;
}

void printNumbers(int limit, std::string name){
    for(int i=1;i<=limit;i++){
        std::cout << name << ": " << i << std::endl;
    }
}

int main(){

    std::thread t(hello); // start a new thread;
    t.join(); // wait for the thread to finish
    std::cout<< "Hello From Main";
    std::thread t1(printNumbers, 5, "Thread-1");
    t1.join();
    return 0;
}
