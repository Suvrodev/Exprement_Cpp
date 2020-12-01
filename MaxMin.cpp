#include<iostream>
using namespace std;
class MaxMin
{
public:
    void MxMn(int[],int);
};
void MaxMin::MxMn(int Data[],int Limit)
{   int i;
    int Max=Data[1];
    int Min=Data[1];
    for( i=1;i<=Limit;i++){
        if(Max<=Data[i]){
            Max=Data[i];
        }
        if(Min>=Data[i]){
            Min=Data[i];
        }
    }
    cout<<"Maximum Value="<<Max<<endl;
    cout<<"minimum Value="<<Min<<endl;
}
int main()
{
    MaxMin m;
    int Limit,i;
    for(;;){
    cout<<"Enter limit of Array=";
    cin>>Limit;
    int Data[Limit];
    cout<<"Enter Element"<<endl;
    for(i=1;i<=Limit;i++){
        cout<<i<<". Input=";
        cin>>Data[i];
    }
    m.MxMn(Data,Limit);
    }
    return 0;
}
