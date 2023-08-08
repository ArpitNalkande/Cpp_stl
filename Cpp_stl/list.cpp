#include<bits/stdc++.h>
using namespace std;
int main(){

    // list<int>random_list{1,2,34,5,3,212};
    list<string>random_list{"arpit","kartik","vivek"};

    list<string>::iterator itr;

    // random_list.push_back(45);
    // random_list.push_front(47);
    // random_list.max_size();
    // random_list.clear();


    for(itr=random_list.begin();itr!=random_list.end();itr++){
        cout<<" " << *itr << endl;
    }
}

