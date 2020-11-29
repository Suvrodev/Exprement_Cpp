#include<iostream>
using namespace std;
class MyMath
{
private:
     double Value;
public:
    int MyRound(double&);
};
int MyMath::MyRound(double &Value)
{
    this->Value=Value;
    int Value1=Value;
    int Value2=Value;
    if(Value<Value1+.5){
        return Value2;
    }else{
      return Value2+1;
    }
}
int main()
{
    while(true){
    MyMath Math;
    double Value;
    cout<<"Enter a double Value=";
    cin>>Value;
    int Taken_Value=Math.MyRound(Value);
    cout<<"Rounded Value="<<Taken_Value<<endl;
    }
    return 0;
}
