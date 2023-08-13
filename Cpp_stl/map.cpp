#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
                        
    map<string,int> marksMap;

    marksMap["arpit"] = 98;
    marksMap["radhe"] = 68;
    marksMap["mohan"] = 18;

    marksMap.insert({{"sundar",233},{"daya",47}});

  map<string,int>:: iterator itr;

  for(auto value:marksMap)
//   for(itr=marksMap.begin();itr!=marksMap.end();itr++)
  {
    cout<<value.first<<"  "<<value.second<<"\n";
  }

  cout<<"the size will be:"<<marksMap.size()<<" "<<marksMap.empty();

     

}