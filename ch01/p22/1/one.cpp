#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;

    cout << "1번 째  정수 입력 : ";
    cin >> num1;
    cout << "2번 째  정수 입력 : ";
    cin >> num2;
    cout << "3번 째  정수 입력 : ";
    cin >> num3;
    cout << "4번 째  정수 입력 : ";
    cin >> num4;
    cout << "5번 째  정수 입력 : ";
    cin >> num5;

    int result = num1 + num2 + num3 + num4 + num5; // 처음에 선언하면 num1 ~ num5 값을 알지 못하여 제대로 된 출력이 이루어지지 않는다.
    cout << "합계 : " << result;
}