#include<bits/stdc++.h>
using namespace std;

int maxOnes(vector<int>&nums){
    
    int cnt = 0;
    int maxi = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            cnt++;
        }
        else{
            cnt = 0;
        }
        maxi = max(maxi,cnt);
    }
    return maxi;
}

int main(){
    
   vector<int>nums = {1, 1, 0, 1, 1, 1};
//   int n = sizeof(nums)/sizeof(nums[0]);
   cout<<maxOnes(nums);
}