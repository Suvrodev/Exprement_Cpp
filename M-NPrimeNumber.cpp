#include<iostream>
using namespace std;
class Suvrodev
{
public:
    void PrimeNumber(int,int);
};
void Suvrodev::PrimeNumber(int M,int N)
{
    int count=0;
    int Total_Number=0;
    for(int i=M;i<=N;i++){
            if(i==0 || i==1 || i==2){
                continue;
            }
        for(int j=2;j<=i-1;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0){
          cout<<i<<" ";
          Total_Number++;
       }
       count=0;
    }
    cout<<"\nTotal Number="<<Total_Number<<endl;
}
int main()
{
    cout<<"Prime Number"<<endl;
    Suvrodev ob;
    int Beg,end;
    while(true){
    cout<<"Enter Begin Number=";
    cin>>Beg;
    cout<<"Enter Ending Number=";
    cin>>end;
    ob.PrimeNumber(Beg,end);
    }
    return 0;
}
