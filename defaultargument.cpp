#include<iostream>
using namespace std;

float calculatearea(float Red, float PI=3.14f)
{
    float Ans = 0.0f;
    Ans = PI * Red* Red;
    return Ans;
}
int main()
{
  float Ret = 0.0f;

  

   Ret = calculatearea(10.5f);
  cout<<"area of circle is : "<<Ret<<"\n";

   Ret = calculatearea(10.5f,7.20f);
  cout<<"area of circle is : "<<Ret<<"\n";

    return 0;
}