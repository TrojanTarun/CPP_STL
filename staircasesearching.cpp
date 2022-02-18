#include<iostream>
using namespace std;
int main()
{
    int a[100][100]={0};
    int n;
    int key;
    cin>>n>>key;
    // int val=1;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<=n-1;i++){
         for(int j=0;j<=n-1;j++){
            if(a[i][j]==key){
                cout<<"found at"<<i<<"th row and "<<j<<"th col";
            }
        }

    }

    return 0;
}