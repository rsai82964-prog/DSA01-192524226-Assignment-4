#include <iostream>
struct Order { int first; int second; Order(int a,int b):second(b),first(a){} };
int main(){Order o(1,2);std::cout<<o.first<<' '<<o.second<<'\n';}
