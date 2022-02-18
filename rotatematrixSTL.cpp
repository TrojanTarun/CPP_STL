#include<iostream>
#include<algorithm>
using namespace std;

void rotateImageSTL(int a[][100],int n){

    for(int i=0;i<n;i++){
        reverse(a[i],a[i]+n);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                swap(a[i][j],a[j][i]);
            }
            
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
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
    rotateImageSTL(a,n);
    return 0;
}