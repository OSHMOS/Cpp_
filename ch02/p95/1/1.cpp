#include <iostream>
#include <cstring>

using namespace std;

typedef struct __Point
{
    int xPos;
    int yPos;
} Point;

Point &PntAdder(const Point &p1, const Point &p2)
{
    Point *pptr = new Point;
    pptr->xPos = p1.xPos + p2.xPos;
    pptr->yPos = p1.yPos + p2.yPos;
    // 구조체의 요소에 접근하는 문법은 '->'이다.
    return *pptr;
}
int main()
{
    Point *pptr1 = new Point;
    pptr1->xPos = 3;
    pptr1->yPos = 30;

    Point *pptr2 = new Point;
    pptr2->xPos = 70;
    pptr2->yPos = 7;

    Point &pref = PntAdder(*pptr1, *pptr2);

    cout << "[" << pref.xPos << "," << pref.yPos << "]" << endl;

    delete pptr1;
    delete pptr2;
    delete &pref;
    // 참조자에 저장된 값에서 new를 사용했기 때문에 참조자도 delete 해야 한다.
    // 참조자를 delete 할 때는 &까지 써야한다.
    return 0;
}