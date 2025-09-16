#include<iostream>
using namespace std;
class person{
    private:
        string name;
        int age;
    public:
        person(string iname,int iage)
        {
            cout<<"paramertized constructor"<<endl;
            name=iname;
            age=iage;
        }

        person(const person& obj)
        {
            cout<<"Copy constructor"<<endl;
            name=obj.name;
            age=obj.age;
        }

        void display()
        {
            cout<<"Name:"<<name<<endl;
            cout<<"Age:"<<age<<endl;
        }

};
int main()
{

    person p1("Ramasumnath",90);
    p1.display();

    person p2=p1;
    p2.display();


    return 0;
}