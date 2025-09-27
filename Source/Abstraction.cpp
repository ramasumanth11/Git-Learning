#include<iostream>
using namespace std;
class Shape{
    public:
        virtual void hello()=0;

};
class circle:public Shape{
    public:
        void hello()
        {
            cout<<"Hello from circle"<<endl;
        }


};
class Rectangle:public Shape{
    public:
        void hello()
        {
            cout<<"hello"<<endl;
        }


};
int main()
{
    circle c;
    c.hello();

    Rectangle r;
    r.hello();





    return 0;
}