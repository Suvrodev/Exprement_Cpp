#include<iostream>
///#include<cmath>
using namespace std;
class Math
{
public:
    double var;
    int MyRound(double);
};
int Math::MyRound(double Value)
{
    var=Value;
    int ivar=var;
    int iivar=ivar;

    if(var<ivar+.5){
    return iivar;
    }else{
      return iivar+1;
    }
}
int main()
{
   Math m;
   while(true){
   double Value;
   cout<<"Enter Value=";
   cin>>Value;
   int Ans=m.MyRound(Value);
   cout<<"Value="<<Ans<<endl;
   }
}
