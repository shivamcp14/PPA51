#include<iostream>
using namespace std;

class Demo
{
    public:
           int A;
    private:
           int B;
    public:
          Demo()
          {
            A=11;
            B=21;
          }
          void Fun()
          {
            cout<<"value of A : "<<A<<"\n"; //Allowed
            cout<<"value of B : "<<B<<"\n"; //Allowed
          }

};

int main()
{
    Demo obj;                             
    obj.Fun();                               //Allowed
    cout<<"value of A : "<<obj.A<<"\n";      //Allowed
    //cout<<"value of B : "<<obj.B<<"\n";       //Not Allowed

    return 0;
}
