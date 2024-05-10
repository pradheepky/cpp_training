#include <iostream>
#include <memory> // for std::unique_ptr
using namespace std;

class A{
public:
    A(){
        cout<<"A instantiated"<<endl;
    }
    ~A(){
        cout<<"A Destructed"<<endl;
    }
    void operation(){
        cout<<"A operation called"<<endl;
    }
};

void instantiate(){
    unique_ptr<A> smartPtr(new A());
    smartPtr->operation();
}

int main() {
    instantiate();
    return 0;
}
