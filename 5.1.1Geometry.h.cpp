#include <iostream>

using namespace std;

class Polygon
{
protected:
    static int numPolygons;
    PointArray point;

public:
    Polygon(const PointArray &pa);
    Polygon(const Point points[], const int numPoints);
    virtual double area() const=0;
    static int getNumPolygons(){retunr numPolygons;}
    int getNumSides() const {return points.getSize();}
    const PointArray *getPoints() const {return &points;}
    ~Polygon() {--numPolygons;}
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
