#include<iostream>
using namespace std;
class A
{
public:     
    void adata()
    {
        cout<<"This is class A."<<endl;
    }
};
class B : virtual public A
{
public: 
    void bdata()
    {
        cout<<"This is class B."<<endl;
    }
};
class C : virtual public A
{
public: 
    void cdata()
    {
        cout<<"This is class c."<<endl;
    }
};
int main()
{
    A a;
    B b;
    C c;
    a.adata();
    b.bdata();
    c.cdata();

    return 0;
}