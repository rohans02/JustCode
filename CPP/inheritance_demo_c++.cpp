#include <iostream>
using namespace std;
class aman
{
    public:
    void display()
    {
        cout<<"i am aman manwani\n";
    }
};
class derived:public aman
{
    public:
    void show()
    {
        cout<<"my roommate name is vasu devrani\n";
    }
};
int main()
{
    derived d;
    d.display();
    d.show();
    return 0;
}
