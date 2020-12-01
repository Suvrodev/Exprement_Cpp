#include<iostream>
using namespace std;
class Factorial
{
public:
    int Factorial_Method(int);
    void Factorial_Function(int);
};
int Factorial::Factorial_Method(int Value)
{
    int Helper=1;
    for(int i=1;i<=Value;i++){
     Helper=Helper*i;
    }
    return Helper;
}
void Factorial::Factorial_Function(int Value){
     int Helper=1;
     int Value_=Value;
     while(Value!=0){
        Helper=Helper*Value;
        Value--;
     }
    cout<<"Factorial value of "<<Value_<<" :"<<Helper<<endl;
}
int main()
{
    cout<<"Welcome to Factorial Converter"<<endl;
    Factorial f;
    int Number;
    for(;;){
    cout<<"Enter A number to Factorial=";
    cin>>Number;
    int Number_=Number;
    int Factorial=f.Factorial_Method(Number);
    cout<<"Factorial value of "<<Number_<<" :"<<Factorial<<endl;

    f.Factorial_Function(Number_);
    }
    return 0;
}
