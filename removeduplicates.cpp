#include<iostream>
#include<cstring>
using namespace std;

void rmveduplicates(char a[]){
    int l=strlen(a);
    int prev=0;
    for(int curr=1;curr<l;curr++){
        if(a[curr]!=a[prev]){
            prev++;
            a[prev]=a[curr];
        }
    }
    a[prev+1]='\0';
    return;

}

int main()
{
    char a[100];
    cin.getline(a,100);
    rmveduplicates(a);
    cout<<a<<endl;
    return 0;
}