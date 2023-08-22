#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

void findDuplicate(string str){

sort(str.begin(),str.end());

for(int i = 0;i<str.length();i++){
    int count = 1;

    while(i<str.length()-1 && str[i]==str[i+1]){
        count++;
        i++;
    }
    if(count>1){
        cout<<"The duplicate char is:"<<" "<<str[i];
    }
    
}

}

int main(){

    string str = "aabcd";
    findDuplicate(str);

}