#include <iostream>

void printNTimes(int x,int n){
    if(x>n){
        return;
    }
    std::cout<<  x << " vikas" << "\n";
    printNTimes(x+1,n);
}

void printForwardNumbers(int x,int n){
    if(x>n)return;
    std::cout<<" n:" <<x++ << "\n";
    printNumbers(x,n);
}

void printBackwardNumbers(int x,int n){
    if(x<n)return;
    std::cout<<x--<<"\n";
    printBackwardNumbers(x,n);
}

void printForwardNumbersBackTrack(int x,int n){
    if(x<n)return;
    printForwardNumbersBackTrack(x-1,n);
    std::cout<<" x:" << x << "\n";
}

//parametarized recurssion
void sum(int n,int result){
    if(n<1){
        std::cout<<"sum:"<<result<<"\n";
        return;
    }
    sum(n-1,result+n);
}

void fact(int n,int result){
    if(n<1){
        std::cout<< "fact:"<<result;
        return;
    }
    fact(n-1,result*n);
}

//functional recurssion
int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}

int fact(int n){
    if(n==0){
        return 1;
    }
    return n* fact(n-1);
}

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    int n;
    std::cin>>n;
    printNTimes(1,n);
    return 0;
}