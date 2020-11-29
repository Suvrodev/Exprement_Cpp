#include <iostream>
using namespace std;
class GCDLCM
{
private:
     int hcf;
     int Big,Small,Temp;
     int GCD_Private(int,int);
public:
    int gcd;

    int GCD(int,int);
    int LCM(int,int);
};
int GCDLCM::GCD(int Big_number,int Small_Number)
{
    int gcd;
    int Big,Small,Temp;
    Big=Big_number;
    Small=Small_Number;
    while(Small!=0)
    {
        Temp=Big%Small;
        Big=Small;
        Small=Temp;
    }
    gcd=Big;
}
int GCDLCM::GCD_Private(int Big_number,int Small_Number)
{
    ///Swapping variables Big_number and Small_Number if Small_Number is greater than Big_number.
      if ( Small_Number > Big_number) {
        int temp = Big_number;
        Big_number = Small_Number;
        Small_Number = temp;
    }

    for (int i = 1; i <=  Big_number; ++i) {
        if (Big_number % i == 0 && Small_Number % i ==0) {
            hcf = i;

        }
    }
    return hcf;
}
int GCDLCM::LCM(int Big_number,int Small_Number){
    ///36,24
    ///39,15
    int GCD_Value=GCD_Private(Big_number,Small_Number);
    int Value=(Big_number*Small_Number)/GCD_Value;
    return Value;
}
int main() {
    cout<<"Welcome to GCD and LCM"<<endl;
    for(;;){
    GCDLCM gl;
    int number1, number2,hcf, gcd,lcm,pgcd;
    cout << "Enter Big number: ";
    cin >> number1;
    cout<<"Enter Small Number:";
    cin>>number2;
    hcf=gl.GCD(number1,number2);
    lcm=gl.LCM(number1,number2);

    cout <<"GCD= " <<hcf<<endl;
    cout<<"LCM="<<lcm<<endl;
    }
    return 0;
}
