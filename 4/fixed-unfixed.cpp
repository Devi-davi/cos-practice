#include <cstdint>
#include <iostream>

using namespace std;

int main()
{
	long a;
	int64_t b;

	a = 0x1234567890;
	b = 0x1234567890;

	cout << "sizeof(a): " << sizeof(a) << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	return 0;
}

//g++ -m32 -c fixed-unfixed.cpp
//g++ -m32 -o fixed-unfixed-32 fixed-unfixed.o
//./fixed-unfixed

//result
//sizeof(a): 4
//a: 878082192
//b: 78187493520

//다르게 나오는 이유? 