#include<iostream>
using namespace std;

template <class T>
T Addition (T No1,T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    float A = 10.90f,B=11.90f;
    cout<<Addition(A,B)<<"\n";

    int X=10,Y=11;
    cout<<Addition(X,Y)<<"\n";

    double P=90.99, Q = 78.90;
    cout<<Addition(P,Q)<<"\n";

    return 0;
}