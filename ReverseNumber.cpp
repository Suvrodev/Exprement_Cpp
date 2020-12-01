#include<iostream>
using namespace std;
class Reverse
{
public:
    int Reverse_Number(int);
};
int Reverse::Reverse_Number(int data){
    int sum=0;
    int Reminder=data;
    int Helper;
    while(Reminder!=0){
        Helper=Reminder%10;
        sum=sum*10+Helper;
        Reminder=Reminder/10;
    }
    return sum;
}
int main()
{
    Reverse rv;
    int Number;
    while(true){
        cout<<"Enter a Number=";
        cin>>Number;
        int Number_=Number;
        int Value=rv.Reverse_Number(Number);
        cout<<"Reverse Number of "<<Number_<<" is:"<<Value<<endl;
        if(Number_==Value){
            cout<<"It is Palindrome"<<endl;
        }else{
            cout<<"Not Palindrome"<<endl;
        }
    }
    return 0;
}
