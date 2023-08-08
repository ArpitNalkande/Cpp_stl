#include<bits/stdc++.h>
using namespace std;
int main(){

    queue<string>q;
    q.push("a");
    q.push("b");
    q.push("c");
    q.push("d");

    while(!q.empty()){
       cout<< q.front()<<endl;
       q.pop();
    }
}