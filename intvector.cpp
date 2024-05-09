#include <iostream>
using namespace std;

class IntVector{
    int items[10];
public:
    IntVector() {
        for (int& item : items) {
            item = 0; 
        }
    }

    void push_back(int item){
        for (int i = 0; i < 10; i++) {
            if (items[i] == 0) {
                items[i] = item;
                break;
            }
        }
    }

    int& operator[](int index){
        return items[index];
    }

    friend ostream& operator<<(ostream& os, const IntVector& v);
};

ostream& operator<<(ostream& os, const IntVector& v) {
    for (const int& item : v.items) {
        if (item != 0) {
            os << item << ' ';
        }
    }
    return os;
}

int main() {
    IntVector v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    int item = v[3];
    cout << item << endl;
    cout << v << endl;
}
