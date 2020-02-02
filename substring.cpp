#include <bits/stdc++.h>
using namespace std;
void no_function(string str);
void fun(string str);

int main() {
 
 string str="hello";
 no_function(str);
 fun(str);

}

void no_function(string str){
     for(int start=0;start<str.length();start++){
     
     for(int no=start;no<=str.length();no++){
         
         for(int i=start;i<no;i++){
             cout<<str[i];
         }
         cout<<"\n";
     }
 }
}

void fun(string str){
    cout<<"function approach\n";
    for(int i=0;i<str.length();i++){
        for(int j=0;j<=str.length()-i;j++){
            cout<<str.substr(i,j)<<"\n";
        }
        cout<<"\n";
    }
}