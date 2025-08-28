#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    while(true) {
        cout << "Hello from C++ app running in Kubernetes!" << endl;
        this_thread::sleep_for(chrono::seconds(5));
    }
    return 0;
}
