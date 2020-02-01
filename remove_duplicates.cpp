#include <bits/stdc++.h>
using namespace std;
void set_bst(string str);
void hashing(string str);

int main() {
 
 string str="hello";
 
 set_bst(str);
 cout<<"\n";
 hashing(str);
}

void set_bst(string str){

set<char> s;
 int i=0;
 while(str[i]){
     s.insert(str[i]);
     i++;
 }

for(auto itr : s){
    cout<<itr;
}
}
/////////////under development///////////////
void hashing(string str){
    
unordered_map<char,int>ma;
 string str1;
for(int i=0;i<str.length();i++){
    
    int index=0;
   
    if(ma[str[i]]==0){

        str1[index++] = str[i];
        cout<<str1[index]<<" "<<str[i]<<endl; 
        ma[str[i]]++;
        //index++;
    }

}

str1[1]='p';
cout<<str1;

}