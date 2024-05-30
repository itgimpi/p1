#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    double pi = 0.0;
    double dx = (double)1.0/n;
    for(int i = 0; i < n; i++){
        //double xi = (double)i/n;
        double xi = (double)i/n+dx/2.0;
        double yi=sqrt(1.0-xi*xi);
        pi+=yi;
    }
    pi*=4*dx;
    cout  << showpoint << fixed << setprecision(20) << pi << '\n';

    return 0;
 }
