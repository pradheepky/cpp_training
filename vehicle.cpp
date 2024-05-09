//Base class pointer can store the address of dervived class
#include <string>
#include <iostream>
using namespace std;
//Strategy pattern
class Vehicle{
    private:
        string regName;
        string name;
    public:
        virtual void start(){
            cout<<"Key start"<<endl;
        }
        virtual void stop(){
            cout<<"Key stop"<<endl;
        }
        virtual void drive()=0;
};
class Car: public Vehicle{
    public:
        void start() override{
            cout<<"push start"<<endl;
        }
        void stop(){
            cout<<"push stop"<<endl;
        }
        void drive(){
            cout<<"Car is driving"<<endl;
        }
};

class Truck: public Vehicle{
    public:
        void drive(){
            cout<<"Truck is driving"<<endl;
        }
};

class VehicleSimulator{
    Vehicle *v;
    public:
        void VehicleSimulator(Vehicle *vArg){
            this->v = vArg;
        }
        void start(){
            v->start();
        }
        void stop(){
            v->stop();
        }
        void drive(){
            v->drive();
        }

};

int main(){
    Car c;
    Truck t;
    VehicleSimulator vs;
    vs.VehicleSimulator(&c);
    vs.start();
    vs.drive();
    vs.stop();
    vs.VehicleSimulator(&t);
    vs.start();
    vs.drive();
    vs.stop();
    return 0;
};
