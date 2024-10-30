// #include<iostream>
   #include<bits/stdc++.h>
#define ll long long
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()
#define imax INT_MAX
#define imin INT_MIN
#define sz(a) (int) a.size()
#define pll pair<ll,ll>
 using namespace std;
 #define el "\n"
 #define ull  unsigned long long
 void FOI () {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
   const int N = 2e5 + 20 , M = 1e5 + 5 , NN=1e6+6;
   const ll MOD = 1e9 + 7 , inf = 1e18; 
 // l+(r-l)/2
  // ll num = 1LL << 60 ;
 const double EPS = 0.00000001;
     
    #define FAST ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

     class TriangleDisplay {
    // Data members
    int row, column;

      public:
    // Constructor to initialize row and column
    TriangleDisplay(int r, int c) {
        row = r;
        column = c;
    }

    // Function to display numerical triangle
    void display_num_tri() {
        int num = 1;
        for (int i = 1; i <= row; i++) {
            for (int j = 1; j <= i; j++) {
                cout << num << " ";
                num++;
            }
            cout << endl;
        }
    }

    // Function to display alphabetical triangle
    void display_alpha_tri() {
        char alpha = 'a';
        for (int i = 1; i <= row; i++) {
            for (int j = 1; j <= i; j++) {
                cout << alpha << " ";
                alpha++;
            }
            cout << endl;
        }
    }
};

  void solve(){
      // Create an object of TriangleDisplay class
    TriangleDisplay triangle(3, 3);

    // Display numerical triangle
    cout << "Numerical Triangle:" << endl;
    triangle.display_num_tri();

    // Display alphabetical triangle
    cout << "Alphabetical Triangle:" << endl;
    triangle.display_alpha_tri();
    
  }
   
  // #define FAST ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 int main(){
    FAST 
      FOI () ;
       //  cout << fixed << setprecision(9);
    int tt = 1;
     // cin>> tt;
    while (tt--) {
        solve();
    }  
 }
