#include<iostream>
using namespace std;
class Base{
    public:
        virtual void hello()
        {
            cout<<"Base class hello....."<<endl;
        }


};
class Derived:public Base{
    public:
        void hello()
        {
            cout<<"Derived class hello"<<endl;
        }

};
int main()
{

    Base *b=new Derived();
    b->hello();




    return 0;
}