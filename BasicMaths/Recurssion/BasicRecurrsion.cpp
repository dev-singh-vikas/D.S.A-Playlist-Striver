#include <iostream>

void printNTimes(int x,int n){
    if(x>n){
        return;
    }
    std::cout<<  x << " vikas" << "\n";
    printNTimes(x+1,n);
}

void printNumbers(int x,int n){
    if(x>n)return;
    std::cout<<" n:" <<x++ << "\n";
    printNumbers(x,n);
}

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    int n;
    std::cin>>n;
    printNTimes(1,n);
    return 0;
}