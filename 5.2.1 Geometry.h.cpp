#include <iostream>

using namespace std;

class Rectangle : public Polygon
{
public:
    Rectangle(const Point &a, const Point &b);
    Rectangle(const ina a, const int b, const int c, const int d);
    virtual double area() const;
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
