#include<iostream>
using namespace std;

void rotateImage(int a[][100],int n){
    int transpose[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            transpose[i][j]=a[j][i];
        }
    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    int a[100][100];
    int n;
    cin>>n;
    int val=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=val;
            // cout<<a[i][j]<<" ";
            val=val+1;  
        }
        // cout<<endl;
    }
    rotateImage(a,n);
    return 0;
}