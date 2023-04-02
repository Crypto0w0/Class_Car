#include <iostream>
using namespace std;

//1

class Wheel{
    int size; //размер колеса
public:
    Wheel(){
        size = 0;
    }
};

class Engine{
    int p; //мощность двигателя
public:
    Engine(){
        p = 0;
    }
};

class Door{
public:
    void D_Open(){
        cout << "Opening the door...";
    }
};

class Car : public Wheel, public Engine, public Door{
public:
    Car() : Wheel(),Engine(){
    }
};

//2

class Vehicle{
    int UsedPetrol;
    int Distanse;
public:
    Vehicle(){
        UsedPetrol = 0;
        Distanse = 0;
    }
    Vehicle(int us, int d){
        UsedPetrol = us;
        Distanse = d;
    }
    virtual int GetFuelC(){
        return UsedPetrol / Distanse * 100;
    }
    virtual void PrintFuelC(){
        cout << "Vehicle's fuel consumption: " << GetFuelC();
    }
};

class Plane : public Wehicle{
    virtual void PrintFuelC(){
        cout << "Plane's fuel consumption: " << GetFuelC();
    }
};

class Ship : public Wehicle{
    virtual void PrintFuelC(){
        cout << "Ship's fuel consumption: " << GetFuelC();
    }
};

class Truck : public Wehicle{
    virtual void PrintFuelC(){
        cout << "Truck's fuel consumption: " << GetFuelC();
    }
};

class Bicycle : public Wehicle{
    virtual void PrintFuelC(){
        cout << "Bicycle's fuel consumption: " << GetFuelC();
    }
};

class Auto : public Wehicle{
    virtual void PrintFuelC(){
        cout << "Auto's fuel consumption: " << GetFuelC();
    }
};

Vehicle* Menu(){
    string w;
    int us;
    int d;
    cout << "What wehicle do you want to create?\n";
    cout << "You can pick: plane, truck, ship, bicycle, auto\n";
    cin >> w;
    Vehicle* wh = nullptr;
    if (w == "plane"){
        wh = new Plane;
    }
    else if (w == "ship"){
        wh = new Ship;
    }
    else if (w == "ship"){
        wh = new Ship;
    }
    else if (w == "truck"){
        wh = new Truck;
    }
    else if (w == "bicycle"){
        wh = new Bicycle;
    }
    else if (w == "auto"){
        wh = new Auto;
    }
    else cout << "Error\n";
    return wh;
}

int main() {
    Car c;
    c.D_Open();
    
    Vehicle* wehicle = Menu();
}
