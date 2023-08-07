#include<bits/stdc++.h>
using namespace std;

void printHello(){
    cout<<"motherfucker";
}

int sum(int a ,int b){
    int result=(a+b);
    return result;
}



int main(){
    int n;
    cin>> n;
    int digit_sum=0;
    while (n)
    {
        digit_sum = digit_sum + n%10;
        n=n/10;
    }
    cout<<digit_sum<<endl;
    
    printHello();
    cout<<sum(34,23);


}

