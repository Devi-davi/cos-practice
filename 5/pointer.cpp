#include <iostream>
#define BUFLEN 10
using namespace std;

int main(int argc, char*argv[])
{
    int arr[BUFLEN];
    int*p;
    int a, i;

    for (i=0; i<BUFLEN; i++)
        arr[i] = 10 - i;

    p = arr + 2;

    cout << "arr[2]= " << arr[2] << endl;
    cout << "arr+2= " << arr + 2 << endl;

    cout << "*(arr+2)= " << *(arr+2) << endl;
    cout << "p= " << p << endl;
    cout << "*p= " << *p << endl;

    // a = 5;
    // p = &a;

    // cout << "a= " << a << endl;
    // cout << "p= " << p << endl;

    // *p = 10;

    // cout << "a= " << a << endl;
    // cout << "p= " << p << endl;

    // cout << "&a= " << &a << endl;
    // cout << "*p= " << *p << endl;
    // cout << "arr= " << arr << endl;

    return 0;
}