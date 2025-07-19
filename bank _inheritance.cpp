#include <iostream>
using namespace std;

class Account {
protected:
    string name;
    int accNo;
    double balance;
public:
    void input() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Balance: ";
        cin >> balance;
    }
};

class Savings : public Account {
public:
    void display() {
        cout << "\n🏦 Savings Account Details\n";
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accNo << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    Savings s;
    s.input();
    s.display();
    return 0;
}
