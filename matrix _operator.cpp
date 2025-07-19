#include <iostream>
using namespace std;

class Matrix {
  int a[2][2];

public:
  void input() {
    cout << "Enter 4 elements (2x2 matrix):\n";
    for (int i = 0; i < 2; i++)
      for (int j = 0; j < 2; j++)
        cin >> a[i][j];
  }

  Matrix operator+(Matrix m) {
    Matrix temp;
    for (int i = 0; i < 2; i++)
      for (int j = 0; j < 2; j++)
        temp.a[i][j] = a[i][j] + m.a[i][j];
    return temp;
  }

  void display() {
    cout << "Matrix:\n";
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++)
        cout << a[i][j] << " ";
      cout << endl;
    }
  }
};

int main() {
  Matrix m1, m2, m3;
  cout << "Enter elements for Matrix 1:\n";
  m1.input();
  cout << "Enter elements for Matrix 2:\n";
  m2.input();
  m3 = m1 + m2;
  cout << "Result of Matrix Addition:\n";
  m3.display();
  return 0;
}
