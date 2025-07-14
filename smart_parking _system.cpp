#include <iostream>
using namespace std;

class Parking {
    int slots;
public:
    Parking(int s) { slots = s; }
    void park() {
        if(slots > 0) {
            slots--;
            cout << "Car parked. Slots left: " << slots << endl;
        } else {
            cout << "Parking full!" << endl;
        }
    }
};

int main() {
    Parking lot(3);
    lot.park();
    lot.park();
    lot.park();
    lot.park();
    return 0;
}
