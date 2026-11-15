#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;
class Vehicle { protected:string regNo; double dailyRate; bool rented=false;
public: Vehicle(string r,double rate):regNo(r),dailyRate(rate){} virtual double charge(int days)const=0;
virtual string type()const=0; virtual void show()const{cout<<type()<<" "<<regNo<<" rate="<<dailyRate<<" rented="<<(rented?"yes":"no")<<'\n';}
void rent(){if(!rented){rented=true;cout<<regNo<<" rented\n";}else cout<<regNo<<" already rented\n";}
void giveBack(int daysLate=0){if(rented){rented=false;cout<<regNo<<" returned; late charge="<<daysLate*200<<'\n';}else cout<<regNo<<" was not rented\n";}
virtual ~Vehicle()=default;};
class Bicycle:public Vehicle { public:Bicycle(string r,double d):Vehicle(r,d){} double charge(int days)const override{return dailyRate*days;} string type()const override{return "Bicycle";} };
class TwoWheeler:public Vehicle { double fuel; string serviceDue; public:TwoWheeler(string r,double d,double f,string s):Vehicle(r,d),fuel(f),serviceDue(s){} double charge(int days)const override{return dailyRate*days+fuel*2;} string type()const override{return "TwoWheeler";} };
class Car:public Vehicle { protected:int seats; double fuel; string serviceDue; public:Car(string r,double d,int s,double f,string due):Vehicle(r,d),seats(s),fuel(f),serviceDue(due){} double charge(int days)const override{return dailyRate*days+fuel*2;} string type()const override{return "Car";} };
class ElectricCar:public Car { double batteryKwh; public:ElectricCar(string r,double d,int s,double k,string due):Car(r,d,s,0,due),batteryKwh(k){} double charge(int days)const override{return dailyRate*days+batteryKwh*8;} string type()const override{return "ElectricCar";} };
class ElectricBus:public Vehicle { int seats; double batteryKwh; public:ElectricBus(string r,double d,int s,double k):Vehicle(r,d),seats(s),batteryKwh(k){} double charge(int days)const override{return dailyRate*days+batteryKwh*8;} string type()const override{return "ElectricBus";} };
int main(){vector<unique_ptr<Vehicle>> fleet;
fleet.push_back(make_unique<Bicycle>("BI-101",100));fleet.push_back(make_unique<TwoWheeler>("TW-202",300,5,"2026-12-01"));fleet.push_back(make_unique<Car>("CA-303",1200,5,20,"2026-12-10"));fleet.push_back(make_unique<ElectricCar>("EV-404",1500,5,45,"2026-12-15"));
for(auto& v:fleet){v->show();v->rent();cout<<"2-day charge="<<v->charge(2)<<'\n';v->giveBack(1);}
fleet.push_back(make_unique<ElectricBus>("EB-505",2500,40,120));cout<<"Added new type: ";fleet.back()->show();cout<<"3-day charge="<<fleet.back()->charge(3)<<'\n';}
