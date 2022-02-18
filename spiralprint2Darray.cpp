#include<iostream>
using namespace std;


 void spiralprint(int a[100][100], int m, int n){
        int startRow=0;
        int startCol=0;
        int endRow=m-1;
        int endCol=n-1;

        while(startRow<=endRow and startCol<=endCol){
        //top-row
        for(int i=startCol;i<=endCol;i++){
            cout<<a[startRow][i]<<" ";
        }
        startRow++;
        //last-col
        for(int i=startRow;i<=endRow;i++){
            cout<<a[i][endCol]<<" ";
        }
        endCol--;
        if(endRow>startRow){
        for(int i=endCol;i>=startCol;i--){
            cout<<a[endRow][i]<<" ";
        }
        endRow--;
        }
        if(endCol>startCol){
        for(int i=endRow;i>=startRow;i--){
            cout<<a[i][startCol]<<" ";
        }
        startCol++ ;
        }
    }
 }
int main()
{
    int a[100][100]={0};
    int m,n;
    
    cin>>m>>n;

    int val=1;

    for(int row=0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            a[row][col]=val;
            val=val+1;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    spiralprint(a, m, n);
    return 0;
}