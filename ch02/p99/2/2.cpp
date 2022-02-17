#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL)); // 매 실행마다 랜덤으로 난수 생성이 가능하게 해주는 코드이다.
    for (int i = 0; i < 5; i++)
    {
        cout << "Random number #" << i << ":" << rand() % 100 << endl;
    }
    return 0;
}
