#include <iostream>
using namespace std;

int main() {

    float a, b, z;

    int c;

    cin >> a >> b >> c;
    if (c == 0) {
        z = (a * b) / 2;
        cout << z << endl;


    }else if (c == 1) {
        z = (a * a);
        cout << z << endl;


    }else if (c == 2) {
        z = (a * b);
        cout << z << endl;

    }else if (c>2) {
        cout << "operazione non valida" << endl;


        return 0;
    }
}
