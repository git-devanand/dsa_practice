#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if (n&(1<<0))
            cout<<n<<" is Odd \n";
        else
            cout<<n<<" is Even \n";
    }
    return 0;
}
