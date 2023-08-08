#include<bits/stdc++.h>
using namespace std;



// int main(){

//     // pair<1,2>p;  "here 1 and 2 is datatype like int string float"
//     pair<int,string>p;
//     p={1,"arpit"};
//     cout<<p.first<<endl;
//     cout<<p.second;

// }


int main()
{
    vector<int>v;
    for(int i=0;i<5;i++){

        v.push_back(i);
    }

    vector<int>::iterator it;

    for(auto  it=v.begin();it!=v.end();it++){
        cout<<" "<< *it;
    }
 
}


