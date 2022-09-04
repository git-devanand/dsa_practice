#include<bits/stdc++.h>

using namespace std;

void check(int n){
    if(n&(1<<0))
        cout<<"Odd\n";
    else
        cout<<"Even\n";
}

int main()
{
    int n;
    cin>>n;
    cout<<n<<" is ";
    check(n);
}