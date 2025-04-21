#include <iostream>
using namespace std;

void decode1(long *xp, long *yp, long *zp) {
    __asm__(
        "movq (%rdi), %r8\n"
        "movq (%rsi), %rcx\n"
        "movq (%rdx), %rax\n"
        "movq %r8, (%rsi)\n"
        "movq %rcx, (%rdx)\n"
        "movq %rax, (%rdi)\n"
    );
}

// int sum(int a, int b){
//     __asm__(
        // "mov %rsp,%rbp\n"
        // "mov %edi,-0x4(%rbp)\n"
        // "mov %esi,-0x8(%rbp)\n"
        // "mov -0x4(%rbp),%edx\n"
        // "mov -0x8(%rbp),%eax\n"
        // "add %edx,%eax\n"
//     );
// }

// 최적화
// int sum(int a, int b){
//     __asm__(
//         "add %%esi,%edi\n"
//         "mov %efi,%edx"
//     );
// }


int main(){
    // int a, b, c;
    // a = 3;
    // b = 5;
    // c = sum(a, b);
    // cout << "c: " << c << endl;

    long x, y, z;
    x = 10000; y = 20000; z = 30000;
    cout << "before decode1(): " << "x: " << x << "y: " << y << "z: " << z << endl;
    decode1(&x, &y, &z);
    cout << "after decode1(): " << "x: " << x << "y: " << y << "z: " << z << endl;

    return 0;
}