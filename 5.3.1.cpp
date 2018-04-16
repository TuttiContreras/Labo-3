#include <iostream>

using namespace std;
class Triangle : public Polygon {

public :
    Triangle( const Point &a, const Point &b, const Point &c);
    virtual double area() const ;
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
