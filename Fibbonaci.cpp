#include<iostream>
using namespace std;
class Fibbonaci_Series
{
public:
    void Fibbonaci_Array(int);
    void Fibbonaci_While(int);
    void Fibbonaci_While_(void);
};
void Fibbonaci_Series::Fibbonaci_While(int Range)
{
    ///Fibonacci Series up to n number of terms
    int count=0,fibo,first=0,second=1;
    cout<<"Fibbonaci Series"<<endl;
    while(count<Range){
     if(count<=1){
        fibo=count;
     }else{
        fibo=first+second;
        first=second;
        second=fibo;
     }
     cout<<fibo<<" ";
     count++;
    }

}
void Fibbonaci_Series::Fibbonaci_While_(void){
   ///Program to Generate Fibonacci Sequence Up to a Certain Number
    int first = 0, second = 1, nextTerm = 0, number;
    cout << "\nEnter a positive number: ";
    cin >> number;
    cout << "Fibonacci Series: " << first << " " << second << ", ";
    nextTerm = first + second;

    while(nextTerm <= number)
    {
        cout << nextTerm << " ";
        first = second;
        second = nextTerm;
        nextTerm = first + second;
    }

}
void Fibbonaci_Series::Fibbonaci_Array(int Range){
    int Data[100]={0,1};
     for(int i=2;i<Range;i++)
     {
        Data[i]=Data[i-1]+Data[i-2];
     }
      for(int i=0;i<Range;i++){
        cout<<Data[i]<<" ";
      }
}
int main()
{
    Fibbonaci_Series f;
    int Range;
    for(;;){
    cout<<"\nEnter Range=";
    cin>>Range;
    f.Fibbonaci_While(Range);
    f.Fibbonaci_While_();
    cout<<"\nEnter Range for Array Fibbonaci=";
    cin>>Range;
    f.Fibbonaci_Array(Range);
    }
    return 0;

}
