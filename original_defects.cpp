#include <iostream>
struct Account { double rate() const { return 3.5; } ~Account() { std::cout << "Account destructor\n"; } };
struct SeniorAccount : Account { double* history = new double[100]; double rate() const { return 4.0; } ~SeniorAccount() { delete[] history; std::cout << "SeniorAccount destructor\n"; } };
int main() {
    Account* accounts[2] = {new Account, new SeniorAccount};
    for (Account* a : accounts) std::cout << a->rate() << '\n';
    for (Account* a : accounts) delete a;
    Account copy = SeniorAccount(); // object slicing; temporary's dynamic storage is not owned by Account
    (void)copy;
}
