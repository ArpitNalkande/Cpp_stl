#include <bits/stdc++.h>
using namespace std;
int main(){

    set<int>s;
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(9);

    set<int>::iterator it;

    for(auto it = s.begin(); it!=s.end(); it++){
            cout<<" "<< *it<<endl;
    }

    
}

// it will store the value in ascending order(increasing value)
// all the values are unique 