#include <iostream>
using namespace std;

void HappyFunc(int prm)
{
    prm++;
}
// 매개변수로 받은 지역변수 변경 불가능

void HellFunc(int &ref)
{
    ref++;
}
// 매개변수가 참조자면 지역변수도 변경 가능하다.
// 하지만 이는 참조자의 단점이라고 한다.

int main()
{
    int num = 24;
    HappyFunc(num);
    HellFunc(num);
    cout << num << endl;
}