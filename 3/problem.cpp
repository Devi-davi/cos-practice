#include <iostream>
using namespace std;

int main(int argc, char*argv[])
{
    int a{};
    cout << "Enter a first number: " << endl;
    cin >> a;
    int b{};
    cout << "Enter a second number: " << endl; 
    cin >> b;
    
    if (a > b) {
        cout << "The first number should be less than or equal to the second number.\n" << endl;
        return 1; // 프로그램 종료
    }

    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i; 
    }

    cout << "The sum from " << a << " to " << b << " is: " << sum << endl;
    
    return 0;
}

//다른 방법
// int main(int argc, char* argv[])
// {
//     int first{};
//     cout << "Enter First Number: " << endl;
//     cin >> first;

//     int second{};
//     cout << "Enter Second Number: " << endl;
//     cin >> second;
//     int sum = 0;

//     if (first < second){
//         while(first < second){
            
//             sum += first; //sum = sum + 1
//             first++; //first = first +1
//         }
//         cout << "The sum is " << sum + second << endl; 
//     } else{
//         cout << "Try again" << endl;
//     }

//     return 0;
// }
