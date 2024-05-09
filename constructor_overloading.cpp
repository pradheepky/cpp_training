
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class A{
public:
    int x=10;
    A(){
    cout<<"A constrcutor"<<endl;
    }
};
void test (A obj){
    obj.x=300;
    cout<<obj.x<<endl;
}
int main() {
    // Write C++ code here
    A aObj;
    test(aObj);
    return 0;
}
