#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x; //storing the address of x
    int** pp = &p; //storing the address of p
    int*** ppp = &pp; //storing the address of pp
    cout << "address of x: " << &x << endl;
    cout << "address of p: " << &p << endl;
    cout << "address of pp: " << &pp << endl;
    cout << "value stored at address p: " << *p << endl;
    cout << "value stored at address pp: " << *pp << endl;
    cout << **pp << endl;

    return 0;
}
