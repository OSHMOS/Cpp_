#include <iostream>
using namespace std;

int main()
{
    const int num = 12;
    const int *ptr = &num; // const 포인터
    const int &ref = num;  // const 참조자

    cout << *ptr << endl;
    cout << ref << endl;
}