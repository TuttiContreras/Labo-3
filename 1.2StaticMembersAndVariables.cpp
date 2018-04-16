#include <iostream>

using namespace std;

class CDummy
{
public:
    static int n;
    CDummy() { ++n;}
    ~CDummy() { --n;}
};

int CDummy::n=0;

int main()
{
    CDummy a;
    CDummy b[5];
    CDummy*c=new CDummy;
    cout<<a.n<<"\n"; //Print out 7
    delete c;
    return 0;
}
