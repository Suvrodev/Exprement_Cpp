#include<iostream>
using namespace std;
class Suvrodev
{
public:
    int Value;
    double Method(double);
};
double Suvrodev::Method(double Value)
{
    this->Value=Value;
    if(Value>=0){
        return Value;
    }else{
      Value=Value*(-1);
      return Value;
    }
}
int main()
{
    cout<<"Welcome to Abs Method"<<endl;
    Suvrodev ob;
    for(;;){
    double Value;
    cout<<"Enter a value=";
    cin>>Value;
    Value=ob.Method(Value);
    cout<<"abs Value="<<Value<<endl;
    }
}
