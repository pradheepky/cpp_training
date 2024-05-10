#include <iostream>
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

template <typename T>
class SmartPointer{
    T *ptr;
public:
    SmartPointer(T* ptrRef): ptr(ptrRef){}
    ~SmartPointer(){
        delete ptr;
    }
    T* operator->(){
        return ptr;
    }
};

void instantiate(){
    SmartPointer<A> smartPtr(new A());
    smartPtr->operation();
}

int main() {
    instantiate();
    return 0;
}

//Smart pointer & template & operartor overlaoding
