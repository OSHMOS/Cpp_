#include <iostream>
using namespace std;

int &RefRetFuncOne(int &ref)
{
    ref++;
    return ref;
}

int main()
{
    int num1 = 1;
    int &num2 = RefRetFuncOne(num1);
    // 같은 데이터에 이름이 총 3개, ref, num1, num2
    int num3 = RefRetFuncOne(num1);
    // num3의 데이터와 num2, num1, ref 데이터는 완전히 다르다.

    num1++;
    num2++;
    num3 += 5;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    cout << "num3: " << num3 << endl;
}