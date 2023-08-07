#include<bits\stdc++.h>
using namespace std;
int main(){

    unordered_set<int>s;

    s.insert(5);
    s.insert(48);
    s.insert(1);
    s.insert(54);
    s.insert(10);
    s.insert(16);


    unordered_set<int>::iterator itr;
    

    for(  itr = s.begin();itr!= s.end();itr++){
        cout<<" "<<*itr;
    }
}