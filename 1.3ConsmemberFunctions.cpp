#include <iostream>

using namespace std;

const string &Person::getName() const
{
    return name;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
