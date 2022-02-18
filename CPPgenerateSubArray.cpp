#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    int count=0;
    int a[100];
    cout<<"enter array elements:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<a[k]<<",";
            }
            
        cout<<endl;
        }
        
    }
    cout<<count;
    return 0;
}