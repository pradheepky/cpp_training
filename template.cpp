#include <iostream>
using namespace std;

//This is called function template

template<typename T>
T add(T operandOne, T operaendTwo){
    return operandOne+operaendTwo;
}
int main() {
    // Write C++ code here
    int result=add<int>(100,200);
    cout<<result<<endl;

    return 0;
}
