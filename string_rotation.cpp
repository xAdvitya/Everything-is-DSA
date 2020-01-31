#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string str1 = "abc";
    string str2 = "aba";
    
    if(str1.length() != str2.length()){
        cout<<"Not A rotation"<<endl;
    }
    
    else{
    string chk = str1+str1;
    cout<< chk<<endl;
    
    if(chk.find(str2) != string::npos){
        cout<<"Are a rotation";
    }
    else{
        cout<<"Not A rotation"<<endl;
    }
        }
}
