#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[100],largestr[100];
    int n;
    int l=0;
    int lrgstr=0;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(a,100);
        l=strlen(a);
        if(l>lrgstr){
            lrgstr=l;
            strcpy(largestr,a);
        }
    }
    cout<<largestr<<" "<<lrgstr;
    return 0;
}