#include<iostream>
using namespace std;

int main()
{
    int a[]={1,3,5,7,10,11,12,13};
    int s=16;
    int j=sizeof(a)/sizeof(int)-1;
    int i=0;
    int count=0;
    cout<<'[';
    while (i < j)
    {
        int currSum=a[i]+a[j];
        if(currSum>s){
            j--;
        }
        else if(currSum<s){
            i++;
        }
        else if (currSum==s){
            cout<<'('<<a[i]<<','<<a[j]<<')';
            count++;
            i++;
            j--;
        }
        
    }
    cout<<']';
    cout<<'\n'<<"I have found "<<count<<" pairs only"<<endl;
}