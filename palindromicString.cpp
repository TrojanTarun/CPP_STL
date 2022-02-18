#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char a[]){
    int j=strlen(a)-1;
    int i=0;
    while(i<j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main()
{
    char a[100];
    cin.getline(a,100);
    if(isPalindrome(a)){
        cout<<"String is Palindrome";
    }
    else{
        cout<<"String is not Palindrome";
    }
    return 0;
}