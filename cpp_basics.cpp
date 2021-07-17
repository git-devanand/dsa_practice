# include <bits/stdc++.h>

using namespace std;

// macros 
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout <<"This is the example of Quick Sort  Algorithm \n";
    cout <<"Size of int datatype is : "<<sizeof(int)<<"\n";
    cout <<"Size of double datatype is : "<<sizeof(double)<<"\n";
    cout <<"Size of bool datatype is : "<<sizeof(bool)<<"\n";
    cout <<"Size of char datatype is : "<<sizeof(char)<<"\n";
    /*
    int a, b;
    string x;
    cin >> a>>b>>x;
    cout <<"sum of "<<a <<" and "<<b<<" is "<< a + b<<"\n This is a string -> "<<x<<"\n";

    // getline function
    string s;
    getline(cin, s);

    // if the amount of data is unknown , the following loop os useful 
    while (cin>>x){
        cout<<x;
    }
    */

   // file for input and output
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);

   // long long integer example
   long long x = 3214123435325342LL;
   cout <<"size of "<<x<<" is" <<sizeof(x)<<"\n";

   int a = 123456789;
   long long b = a*a;
   cout <<b<<"\n";  //-1757895751

   int d = 123456789;
   long long f = (long long)a * a;
   cout << f << "\n";

    // shortening code
    typedef long long ll;

    ll y = 123456789;
    ll z = 987654321;
    cout << a*b<<"\n";

    // complex types shortenings
    typedef vector<int> vi;
    typedef pair<int,int> pi;

    REP(i,1,100){
        if (i%2 != 0) cout<<i<<"\n";
    }




   return 0;
}
