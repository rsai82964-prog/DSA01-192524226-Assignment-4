#include <iostream>
#include <string>
using namespace std;
class Person { protected: string name; int id; string phone;
public: Person(string n="",int i=0,string p=""):name(n),id(i),phone(p){cout<<"Person ";} };
class Student : virtual public Person { protected: string programme; double cgpa;
public: Student(string n="",int i=0,string p="",string pr="",double c=0):Person(n,i,p),programme(pr),cgpa(c){cout<<"Student ";} };
class Staff : virtual public Person { protected: string department; double salary;
public: Staff(string n="",int i=0,string p="",string d="",double s=0):Person(n,i,p),department(d),salary(s){cout<<"Staff ";} };
class TeachingAssistant : public Student, public Staff {
public: TeachingAssistant(string n,int i,string p,string pr,double c,string d,double s)
: Person(n,i,p), Student(n,i,p,pr,c), Staff(n,i,p,d,s) { cout<<"TA "; }
};
class ResearchScholar : public Student {
    double fellowship;
public: ResearchScholar(string n,int i,string p,string pr,double c,double f)
    :Person(n,i,p),Student(n,i,p,pr,c),fellowship(f){}
    double getFellowship() const{return fellowship;}
};
int main(){ TeachingAssistant ta("Kavya",11,"9876543210","AIDS",9.1,"CSE",42000); cout<<"\n"; }
