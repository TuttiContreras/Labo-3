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
    void setX(int newX) const {x=newX; } //un error porque la funcion fue declarada como const y no se le puede modificar algunas varibles
};

int main()
{
    Point p(5,3);
    p.setX(9001);
    cout<<p.getX()<<' '<<p.getY();
    return 0;
}
