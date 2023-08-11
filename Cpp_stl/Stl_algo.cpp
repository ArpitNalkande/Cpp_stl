#include<bits/stdc++.h>
using namespace std;

    // INPUT5 
    // 5
    // 9 7 5 4 9

int main(){

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0 ;i<5;i++){
        cin>>v[i];
    }

    int min = *min_element(v.begin(),v.end());
    cout<<"The minumm element is:" <<min<<endl;

    int max = *max_element(v.begin(),v.end());
    cout<<"The maximum element is:" <<max<<endl;

    int sum  = accumulate(v.begin(),v.end(),0);  // Acclumulate will find the sum go given numbers 
    cout<< "Sum of given numbers are:"<<sum<<endl;

    int cnt  = count(v.begin(),v.end(),9);
    cout<<"The number 9 is repeating:"<< cnt<<"times"<<endl;

   reverse(v.begin(),v.end());
    for(auto val: v){
        cout<<val <<" ";
    }
    cout<<endl;

   reverse(v.begin()+2 ,v.end());
    for(auto val: v){
        cout<<val <<" ";
    }
    cout<<endl;

    // IN CASE OF STRING 

    string str = "asdf";
    reverse(str.begin(),str.end());
    cout<<str<<endl;

    string str1 = "asdf";
    reverse(str1.begin()+1,str1.end());
    cout<<str1<<endl;

    // IN CASE OF ARRAY

    // just replace v.begin() = arr AND  v.end() = arr+n



}