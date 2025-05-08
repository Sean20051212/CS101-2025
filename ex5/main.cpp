#include <iostream>
#include <string>

using namespace std;

class Car {
    protected: 
    string m_DriveMode;
    private: 
    int m_MaxSeating;
    int m_price;
    void m_UpdatePrice(int base = 500000){
        m_price = m_MaxSeating * base;
    }
    public:
    string m_brand;
    string m_model;
    int m_year;
    
    Car(string x,string y,int z,int s){
        m_brand = x;
        m_model = y;
        m_year = z;
        m_MaxSeating = s;
        m_UpdatePrice();
        m_DriveMode = "No-wheel";
    }
    int get_MaxSeating(){
        return m_MaxSeating;
    }
    int get_Price(){
        return m_price;
    }
    string get_DriveMode(){
        return m_DriveMode;
    }
};

class BMW_CAR : public Car{
    public:
    BMW_CAR(string y,int z, int s) : Car("BMW",y,z,s){
        cout << "Constructing BMW_Car\n";
        m_DriveMode = "Rear_wheel";
    }
    string get_DriveMode(){
        return m_DriveMode;
    }
};

class AUDI_CAR : public Car{
    public:
    AUDI_CAR(string y,int z, int s) : Car("AUDI",y,z,s){
        cout << "Constructing AUDI_Car\n";
        m_DriveMode = "Front_wheel";
    }
    string get_DriveMode(){
        return m_DriveMode;
    }
};

class BENZ_CAR : public Car{
    public:
    BENZ_CAR(string y,int z, int s) : Car("BENZ",y,z,s){
        cout << "Constructing BENZ_Car\n";
        m_DriveMode = "Front_wheel";
    }
    string get_DriveMode(){
        return m_DriveMode;
    }
};

int main()
{
    BMW_CAR car_0 ("X5",2023,6);
    cout << car_0.m_brand;
    cout << " Drive Mode = " << car_0.get_DriveMode() << endl;
    
    AUDI_CAR car_1 ("A1",2023,5);
    cout << car_1.m_brand;
    cout << " Drive Mode = " << car_1.get_DriveMode() << endl;

    BENZ_CAR car_2 ("B2",2023,4);
    cout << car_2.m_brand;
    cout << " Drive Mode = " << car_2.get_DriveMode() << endl;
    return 0;
}
