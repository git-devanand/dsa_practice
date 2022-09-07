#include<bits/stdc++.h>

using namespace std;

int squareRoot(int N){
    int s=0, e=N;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(mid*mid==N)
            return mid;
        else if(mid*mid>N)
            e = mid - 1;
        else
            s = mid + 1;
        
        mid = s+(e-s)/2;
    }
}

int main()
{
    int N;
    cin>>N;
    cout<<"Square root of "<<N<<" is "<<squareRoot(N)<<"\n";
}