#include<iostream>
using namespace std;

class Base
{
    public :
         int i,j;

         Base()
         {
            cout<<"Inside Base constructor\n";
            i=10;
            j=20;
         }
         ~Base()
         
           { cout<<"Inside Base destructor\n";}
            void Fun()
            {cout<<"Inside Base Fun\n";      }
         

};

class Derived : public Base
{
    public : 
        int x,y;
        Derived()
        {
            cout<<"Inside Derived constructor\n";
            x=30;
            y=40;
        }
        ~Derived()
        
            {cout<<"Inside Derived destructor\n";}
            void Gun()
            {cout<<"Inside Derived gun\n";  }
        

};

class DerivedX : public Derived
{
       public:
            int a,b;
            DerivedX()
            {
                cout<<"Inside DerivedX constructor\n";
                a=50;
                b=60;
            } 

            ~DerivedX()
            {
                cout<<"Inside derivedX destructor\n";
            }
            void Sun()
            {
                cout<<"Inside DerivedX sun\n";
            }
};

int main()
{
    
    DerivedX dobj;
    //constructors : Base->Derived->DerivedX

    cout<<"Inside main function\n";

    cout<<"size of base class "<<sizeof(Base)<<"\n";   //8
   cout<<"size of Derived class "<<sizeof(Derived)<<"\n";  //16
   cout<<"size of DerivedX class "<<sizeof(DerivedX)<<"\n";  //24
   
   
    cout<<dobj.i<<"\n";   //10
    cout<<dobj.j<<"\n";   //20
    cout<<dobj.x<<"\n";    //30
    cout<<dobj.y<<"\n";    //40
    cout<<dobj.a<<"\n";    //50
    cout<<dobj.b<<"\n";    //60
   
    dobj.Fun();   //inside fun of base
    dobj.Gun();   //inside gun of derived
    dobj.Sun();    //inside sun of derivedx

    // Derived : DerivedX->Derived->Base
    return 0;
}