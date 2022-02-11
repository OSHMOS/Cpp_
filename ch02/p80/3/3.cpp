#include <iostream>
using namespace std;

// 데이터 공간에 할당된 주소 값은 서로 바꿀 수 없는가?
// void SwapAddress() 만들어 보려는데 잘 되지 않아서
// 발생한 질문이다.
void SwapPointer(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int num1 = 5;
    int *ptr1 = &num1;
    int num2 = 10;
    int *ptr2 = &num2;

    cout << "ptr1 주소 값 : " << ptr1 << endl;
    cout << "ptr2 주소 값 : " << ptr2 << endl;
    cout << "ptr1이 참조하는 값 : " << *ptr1 << endl;
    cout << "ptr2이 참조하는 값 : " << *ptr2 << endl;

    cout << "-------------------------------------" << endl;

    // SwapAddress(ptr1, ptr2);
    SwapPointer(ptr1, ptr2);
    cout << "ptr1 주소 값 : " << ptr1 << endl;
    cout << "ptr2 주소 값 : " << ptr2 << endl;
    cout << "SwapPointer(ptr1)이 참조하는 값 : " << *ptr1 << endl;
    cout << "SwapPointer(ptr2)이 참조하는 값 : " << *ptr2 << endl;
}