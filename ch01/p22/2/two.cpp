#include <iostream>

using namespace std;

int main()
{
    char name[100];
    char num[100];

    cout << "이름 : ";
    cin >> name;

    cout << "주민등록번호 : ";
    cin >> num;

    cout << "이름 : " << name << " ,"
         << "주민등록번호 : " << num << endl;
}