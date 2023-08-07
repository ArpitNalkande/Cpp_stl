#include<bits/stdc++.h>
#include<iostream>
// #include<map>
// #include<string>
using namespace std;


int main(){
                        
    unordered_map<string,int> marksMap;

    marksMap["arpit"] = 98;
    marksMap["radhe"] = 68;
    marksMap["mohan"] = 18;

    marksMap.insert({{"sundar",233},{"daya",47}});

  unordered_map<string,int>:: iterator itr;
  for(itr=marksMap.begin();itr!=marksMap.end();itr++)
  {
    cout<<(*itr).first<<"  "<<(*itr).second<<"\n";
  }

//   cout<<"the size will be:"<<marksMap.size()<<" "<<marksMap.empty();

     

}