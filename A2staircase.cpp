#include<iostream>
using namespace std;
int main()
{
    int a[100][100]={0};
    int n,key;
    cin>>n>>key;
    int startRow=0;
    int endCol=n-1;
    int val=1;
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    
    while(startRow<=endCol){
        if(key>a[startRow][endCol]){
            startRow++;
        }
        else if(key<a[startRow][endCol]){
            endCol--;
        }
        else if(key==a[startRow][endCol]){
            cout<<"found at"<<startRow<<","<<endCol;
            break;
        }
        else{
            cout<<"not found";
        }
    }
    cout<<"found at"<<startRow<<","<<endCol;
    return 0;
}