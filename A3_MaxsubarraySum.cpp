//Kadaen's Algorithm


#include<iostream>
using namespace std;


int main()
{
    int a[100];
    int currSum=0;
    int maxSum=0;
    for (int i = 0; i < 9; i++)
    {
        cin>>a[i];       
    }
    for (int i = 0; i < 9; i++)
    {
        currSum+=a[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum=max(currSum,maxSum);
    }
    
    
    cout<<maxSum;
}