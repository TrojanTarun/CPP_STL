#include<iostream>
using namespace std;

int main(){
    // int n;
    // cin>>n;

    int a[100];
    int currSum=0;
    int maxSum=0;

    for (int i = 0; i < 9; i++)
    {
        /* code */
        cin>>a[i];
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = i; j < 9; j++)
        {   
            currSum=0;
            for (int k = i; k < j; k++)
            {
                currSum+=a[k];
            }
            if(currSum>maxSum){
                maxSum=currSum;
            }
        }
    }
    
    cout<<maxSum;

}