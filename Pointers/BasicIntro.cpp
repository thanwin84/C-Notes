#include <iostream>
using namespace std;

int main() {
    int a = 100;
    int* p = &a;
    cout << "address of a: " << &a << endl;
    cout << "Address of a pointed by p: " << p << endl;
    cout << "value at address pointed by p: " << *p << endl;
    *p = 200; //only value is modified, p still points to a;  
    cout << "value at address pointed by p: " << *p << endl;
    return 0;
}
