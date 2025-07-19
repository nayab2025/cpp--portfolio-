#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to check if username and password match any record
bool login(string user, string pass) {
    ifstream file("users.txt");
    string u, p;
    while (file >> u >> p) {
        if (u == user && p == pass)
            return true;
    }
    return false;
}

int main() {
    int choice;
    cout << "1. Register\n2. Login\nChoice: ";
    cin >> choice;

    string user, pass;
    cout << "Username: ";
    cin >> user;
    cout << "Password: ";
    cin >> pass;

    if (choice == 1) {
        // Register: append username and password to file
        ofstream file("users.txt", ios::app);
        file << user << " " << pass << endl;
        cout << "✅ Registered successfully!" << endl;
    } else if (choice == 2) {
        // Login: check credentials
        if (login(user, pass))
            cout << "✅ Login successful!" << endl;
        else
            cout << "❌ Invalid credentials!" << endl;
    } else {
        cout << "Invalid option!" << endl;
    }

    return 0;
}
