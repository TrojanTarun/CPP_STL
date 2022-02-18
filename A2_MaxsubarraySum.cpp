#include<iostream>
using namespace std;


int main()
{
    int a[100];
    int CSA[100]={0};
    int currSum=0;
    int maxSum=0;
    cin>>a[0];
    CSA[0]=a[0];
    for (int i = 1; i < 9; i++)
    {
        /* code */
        cin>>a[i];
        CSA[i]=CSA[i-1]+a[i];
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = i; j < 9; j++)
        {   
            currSum=0;
            currSum = CSA[j]-CSA[i-1];
            if(currSum>maxSum){
                maxSum=currSum;
            }
        }
    }
    cout<<maxSum;
}