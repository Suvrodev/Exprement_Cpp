#include<iostream>
using namespace std;
class Suvrodev
{
public:
    double Number;
    double SQRT(double);
    double Power(double,double);
    double Multiple_Sqrt(double,double);
};
double Suvrodev::SQRT(double Number)
{
     double i;
     for(i=0.01;i*i<Number;i=i+0.01){

     }
     return i-0.01;
}
double Suvrodev::Power(double Base,double Power)
{
    double Helper=1;
    for(int i=1;i<=Power;i++){
        Helper=Helper*Base;
    }
    return Helper;
}
/*
double Suvrodev::Multiple_Sqrt(double Base,double Power)
{
    double Helper=1,i;
    for(i=.01;i*i<=((double)1/Power);i=i+0.01){
        Helper=Helper*Base;
    }

    return Helper;
}*/
int main()
{
    Suvrodev ob;
    double Number,Base,Power;
    double MultipleRoot;
    while(true){
    cout<<"Sqrt Value"<<endl;
    cout<<"Enter Number for Sqrt Value=";
    cin>>Number;
    double Number_=ob.SQRT(Number);
    cout<<"Sqrt Value of "<<Number<<" is: "<<Number_<<endl;
    cout<<"Power Value"<<endl;
    cout<<"Enter Base=";
    cin>>Base;
    cout<<"Enter Power=";
    cin>>Power;
    double Power_Ans=ob.Power(Base,Power);
    cout<<"Power Value="<<Power_Ans<<endl;


    /*cout<<"Enter Number for multiple sqrt value=";
    cin>>Number;
    cout<<"Enter Value of Multiple root=";
    cin>>MultipleRoot;
    double MultipleRootAns=ob.Multiple_Sqrt(Number,MultipleRoot);
    cout<<"Ans="<<(long double)MultipleRootAns<<endl;*/
    }
    return 0;
}
