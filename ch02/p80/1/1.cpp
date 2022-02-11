#include <iostream>
using namespace std;

int PlusOneFunc(int &ref1)
{
    int num = ref1 + 1;
    return num;
}

int ChangeSignFunc(int &ref1)
{
    int num = ref1 * -1;
    return num;
}
int main()
{
    int val1 = 10;
    cout << val1++ << endl;
    // 출력 전에 값이 더해지지 않고 출력 후에 값이 더해짐
    // 출력 : 10 출력 후 val1 : 11
    cout << ++val1 << endl;
    // 출력 전에 값이 더해지고 출력됨
    // 출력 : 12 출력 후 val1 : 12
    cout << PlusOneFunc(val1) << endl;
    cout << ChangeSignFunc(val1) << endl;
}