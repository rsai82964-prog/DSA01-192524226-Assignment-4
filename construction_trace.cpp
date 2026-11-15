#include <iostream>
#include <string>
using namespace std;
class Address { string city; int pin;
public: Address(string c,int p):city(c),pin(p){cout<<"Address+ ";} ~Address(){cout<<"Address- ";}
string str()const{return city+"-"+to_string(pin);} };
class Person { protected:string name; int age; Address home;
public: Person(string n,int a,string c,int p):name(n),age(a),home(c,p){cout<<"Person+ ";}
virtual ~Person(){cout<<"Person- ";} };
class Course { string title;
public: Course(string t):title(t){cout<<"Course+ ";} ~Course(){cout<<"Course- ";} };
class Student: public Person { long long regNo; Course course;
public: Student(string n,int a,long long r,string city,int pin,string cr):Person(n,a,city,pin),regNo(r),course(cr){cout<<"Student+ ";}
~Student(){cout<<"Student- ";} void print()const{cout<<regNo<<' '<<name<<" ("<<age<<") "<<home.str()<<'\n';} };
class Staff: public Person { double salary;
public: Staff(string n,int a,string c,int p,double s):Person(n,a,c,p),salary(s){cout<<"Staff+ ";} ~Staff(){cout<<"Staff- ";} };
class Vehicle { public: Vehicle(){cout<<"Vehicle ";} ~Vehicle(){cout<<"~Vehicle ";} };
class Engine { public: Engine(){cout<<"Engine ";} ~Engine(){cout<<"~Engine ";} };
class Car: public Vehicle { Engine e; public: Car(){cout<<"Car ";} ~Car(){cout<<"~Car ";} };
int main(){
 cout<<"Student trace: "; {Student s("Kavya",19,192311001,"Salem",636001,"C++"); s.print();} cout<<"\nStaff trace: "; {Staff s("Ravi",40,"Chennai",600001,50000);} cout<<"\nTA-style base/member rule is shown in Task02.\nVehicle prediction: "; {Car c; cout<<"| ";} cout<<'\n';
}
