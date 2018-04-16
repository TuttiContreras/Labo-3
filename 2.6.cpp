#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Point
{
private:
    int x,y;

public:
    Point(int u, int v):x(u), y(v){}
    int getX(){return x;}
    int getY(){return y;}
    void doubleVal()
};

int main()
{
    Point *p=new Point(5,3);
    //Si se usa el "new"
    //corresponde utilizar el "delete"
    cout<<p->getX()<<' '<<p->getY();
    return 0;
}
