#include <iostream>
using namespace std;

int main(int argc, char*argv[])
{
    int a = 10;
    int*k = &a;

    cout << "a= " << a << endl;
    cout << "k= " << k << endl;
    cout << "&a= " << &a << endl;
    cout << "*k= " << *k << endl;

    return 0;
}