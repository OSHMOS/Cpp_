#include <iostream>

using namespace std;

int main()
{
    int num;
    while (true)
    {
        cout << "판매 금액을 만원 단위로 입력(-1 to end) : ";
        cin >> num;

        if (num == -1)
        {
            return 0;
        }
        // 밑의 cout보다 나중에 쓰면 num이 -1이더라도 cout이 표현되고 프로그램이 종료되므로
        // 조건문을 cout보다 윗 줄에 작성하여야 한다.
        cout << "이번 달 급여 : " << 50 + num * 0.12 << endl;
    }
}