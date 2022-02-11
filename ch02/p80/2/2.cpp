#include <iostream>
using namespace std;

void SwapByRef2(int &ref1, int &ref2)
{
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}
int main()
{
    int val1 = 10;
    int val2 = 20;

    SwapByRef2(val1, val2);
    cout << "val1: " << val1 << endl;
    cout << "val2: " << val2 << endl;

    // SwapByRef2(23, 45);
    // 참조에 대한 초기 값은 lvalue여야 한다.
    // lvalue : 대입 연산자 '=' 기준 왼쪽에 있는 값. 즉, 변수 이름.
    return 0;
}