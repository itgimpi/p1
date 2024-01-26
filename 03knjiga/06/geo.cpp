#include<bits/stdc++.h>
using namespace std;
// Geometrija
typedef int ceo;
typedef long long ll;
typedef unsigned long long ull;

/*double dist0(double x, double y){
    return sqrt(x*x+y*y); }

struct { // neimenovana struktura
    double x;
    double y; } t;

struct tacka { // imenovana struktura
    double x;
    double y; };    */  

typedef struct { // point je novi tip - struktura
    double x;
    double y; } point;

double dist0(point p){
    return sqrt(p.x * p.x + p.y * p.y); }

int main() {
    /*double x, y; cin >> x >> y; // bez struktura
    cout << dist0(x, y);

    cin >> t.x >> t.y; // neimenovana
    cout << t.x << ' ' << t.y;

    struct tacka t;
    cin >> t.x >> t.y; // imenovana
    cout << t.x << ' ' << t.y; 

    int qq;
    ceo ww; */

    point a;
    cin >> a.x >> a.y; 
    //cout << sqrt(a.x*a.x+a.y*a.y); 
    cout << dist0(a)<< endl;

    return 0;}