#include <iostream>

using namespace std;

int main()
{
    string s = "Hello";
    s += " world!";
    if (s == "Hello world!")
    {
        cout<<"Success!"<<endl;
    }
    cout<<s.substr(6,6)<<endl; //Imprimir� "world!"    return 0;
    cout<<s.find("world")<<endl; //print 6
    cout<<s.find('1',5); //print 9
    return 0;
}
