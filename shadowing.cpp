#include <string>
#include <iostream>
using namespace std;

class textBox{
    public:
        void accept(string text){
            cout <<"Text accepted nb: "<<endl;
        }
};


class NumericTextBox: public textBox{
    public:
        void accept(string text)  {
            cout <<"Numeric Text accepted: "<<endl;
        }
};

class MaskedTextBox: public textBox{
    public:
        void accept(string text) override {
            cout <<"Masked Text accepted: "<<endl;
        }
};

int main(){
    textBox tb;
    //tb.accept("123"); //Text accepted:
    NumericTextBox ntb;
    ntb.accept("ddd"); //Numeric Text accepted:
    //textBox *tbPtr = &ntb;
    
    //tbPtr->accept("123"); //Text accepted: 
    return 0;
}
