#include<iostream>
using namespace std;


// to read a sentance/paragraph and store it
// cin.get() reads a single char


// void readline(char a[], int maxLen){
//     int i=0;
//     char ch = cin.get();
//     while(ch !='\n'){
//         a[i]=ch;
//         i++;
//         if(i==(maxLen - 1)) {
//             break;
//         }
//         ch = cin.get();
//     }
//     a[i]='\0';
//     return;
// }


int main()
{
    char a[100];
    cin.getline(a,100);
    cout<<a<<endl;
}