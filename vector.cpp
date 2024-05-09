#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Device {
public:
    string name;

    friend ostream& operator<<(ostream& os, const Device& d);
};

ostream& operator<<(ostream& os, const Device& d) {
    os << d.name;
    return os;
}

template <typename T>
class Vector {
    vector<T> items;
public:
    void push_back(const T& item){
        items.push_back(item);
    }

    friend ostream& operator<<(ostream& os, const Vector& v) {
        for (const auto& item : v.items) {
            os << item << ' ';
        }
        return os;
    }
};

int main() {
    Vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    
    Vector<string> vs;
    vs.push_back("A10");
    vs.push_back("B10");
    
    Vector<Device> vd;
    Device obj1;
    obj1.name="D1";
    Device obj2;
    obj2.name="D2";
    vd.push_back(obj1);
    vd.push_back(obj2);
    
    cout<<v<<endl;
    cout<<vs<<endl;
    cout << vd << endl;
}
