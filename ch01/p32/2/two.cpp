#include <iostream>

using namespace std;
// int SimpleFunc(int a = 10){}으로 함수 오버로딩 불가능한 이유
// 위 처럼 하면 인수를 아무것도 안 전달할 시 컴퓨터 입장에서는 정확한 하나의 길만
// 있는 것이 아니라 두 가지의 길이 있기 때문이다.
// 자세하게 설명하자면, 위 처럼 작성 시 main에서 SimpleFunc()로 선언 시,
// 첫 번째 함수와 두 번째 함수로 모두 접근 가능하기 때문이라는 뜻이다.
int SimpleFunc(int a)
{
    return a + 1;
}

int SimpleFunc(void)
{
    return 10;
}

int main()
{
    cout << SimpleFunc();
}