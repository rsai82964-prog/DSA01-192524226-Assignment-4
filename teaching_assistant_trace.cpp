#include <iostream>
#include <string>
using namespace std;
struct Person { string name; Person(string n):name(n){cout<<"Person+ ";} virtual ~Person(){cout<<"Person- ";} };
struct Student: virtual Person { Student(string n):Person(n){cout<<"Student+ ";} ~Student(){cout<<"Student- ";} };
struct Staff: virtual Person { Staff(string n):Person(n){cout<<"Staff+ ";} ~Staff(){cout<<"Staff- ";} };
struct TeachingAssistant: Student, Staff { TeachingAssistant(string n):Person(n),Student(n),Staff(n){cout<<"TA+ ";} ~TeachingAssistant(){cout<<"TA- ";} };
int main(){ {TeachingAssistant ta("Kavya"); cout<<"| ";} cout<<'\n'; }
