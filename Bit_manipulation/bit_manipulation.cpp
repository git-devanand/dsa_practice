#include<bits/stdc++.h>
using namespace std;

void toBits(int n){
    for(int i=31; i>=0; i--){
        if (n&(1<<i)) cout<<"1";
        else cout<<"0";
    }
    cout<<"\n";
}

void displaySet(int n){
    for (int i=0; i<32; i++){
        if (n&(1<<i)) cout<<i<<" ";
    }
    cout<<"\n";
}

int main()
{
    int n = 43;
    cout<<"Left shift of "<<n<<" by 3 is "<<(n<<3)<<"\n";
    cout<<"Right shift of "<<n<<" by 3 is "<<(n>>3)<<"\n";
    cout<<"Value of (1<<n) is "<<(1<<n)<<"\n";
    cout<<"\n***********************************************\n";
    // Bit Operations
    cout<<"Value of AND operation (22 & 26) is "<<(22&26)<<"\n";
    cout<<"Value of OR operation (22 | 26) is "<<(22|26)<<"\n";
    cout<<"Value of XOR operation (22 ^ 26) is "<<(22^26)<<"\n";

    toBits(n);
    cout<<"\n ";
    cout<<"\n************************************************\n";
    int x = -43;
    unsigned int y = x;
    cout << x << "\n"; // -43
    cout << y << "\n"; // 4294967253
    cout<<"\n************************************************\n";
    int a = 2147483647;
    cout << a << "\n"; // 2147483647
    a++;
    cout << a << "\n"; // -2147483648
    cout<<"\n************************************************\n";
    x = 5328; // 00000000000000000001010011010000
    cout << __builtin_clz(x) << "\n"; // 19
    cout << __builtin_ctz(x) << "\n"; // 4
    cout << __builtin_popcount(x) << "\n"; // 5
    cout << __builtin_parity(x) << "\n"; // 1
    cout<<"\n************************************************\n";
    int count=0;
    for (int i=0; i<32; i++){
        if(x&(1<<i)) count++;
    }
    cout<<"Number of 1's in "<<x<<" is "<<count<<"\n";
    cout<<"\n************************************************\n";
    // Bit applications
    //set kth bit to ones
    cout<<"Original bits: ";
    toBits(x);
    cout<<"3rd set bit to 1: ";
    toBits(x|(1<<3));
    cout<<"7th bit set to 0: ";
    toBits(x&~(1<<7));
    cout<<"5th bit be inverted: ";
    toBits(x^(1<<5));

    cout<<"\n************************************************\n";
    // set operations using bit manipulation
    // the sets p = {1,3,4,8} and
    // q = {3,6,8,9}, and then constructs the set u = p ∪ q = {1,3,4,6,8,9}
    int p = (1<<1)|(1<<3)|(1<<4)|(1<<8);
    int q = (1<<3)|(1<<6)|(1<<8)|(1<<9);
    int u = p|q;    // union of p and q
    int i = p&q;    //intersection of p and q
    cout<<"set p: ";
    displaySet(p);
    cout<<"set q: ";
    displaySet(q);
    cout<<"union of set p and q: \n";
    displaySet(u);
    cout<<"intersection of set p and q: \n";
    displaySet(i);
    cout<<"set difference p-q: \n";
    displaySet(p&(~q));
    cout<<"set difference q-p: \n";
    displaySet(q&(~p));


}