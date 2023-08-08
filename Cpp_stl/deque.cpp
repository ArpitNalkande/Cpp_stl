#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int>dq;
    dq.push_back(5);
    dq.push_back(90);
    dq.push_back(90);
    dq.push_back(78);
    dq.push_back(89);

    dq.push_front(69);
    

    deque<int>:: iterator it;
    for(it = dq.begin(); it!= dq.end();it++){
        cout<<"  " << *it<<endl;
    }

    cout<<dq.at();
    
}