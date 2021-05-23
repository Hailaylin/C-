/**
 * @file 05-03.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */
#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int x1, int y1) : x(x1), y(y1) {}
    bool operator>(Point &a);
    void show();
};

void Point::show()
{
    cout << "(" << x << "," << y << ")" << endl;
}

bool Point::operator>(Point &a)
{
    if (x * x + y * y > a.x * a.x + a.y * a.y)
        return true;
    else
        return false;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    Point p1(a, b), p2(c, d);
    p1.show();
    p2.show();
    if (p1 > p2)
        cout << "p1>p2" << endl;
    else
        cout << "p1<=p2" << endl;
    return 0;
}