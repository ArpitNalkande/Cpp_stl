#include<bits/stdc++.h>
using namespace std;

// sort(a,a+n)       a = means address of first element 
//                   a+n = means address of last element(n-1)+1  i.e a+n 



int main(){

    vector<int> v;

    v.push_back(111);
    v.push_back(1);
    v.push_back(45);
    v.push_back(7);

   
    vector<int>::iterator itr;

     for(  itr = v.begin();itr!= v.end();itr++){
        cout<<" "<<*itr<<endl;
     }

    std::sort(v.begin(),v.end());

    vector<int>::iterator it;

     for(  it = v.begin();it!= v.end();it++){
        cout<<" "<<*it;
     }

}