#include<bits/stdc++.h> // Geometrija
using namespace std;

typedef struct { // point je novi tip - struktura
    double x;
    double y; } point;

typedef struct { // point je novi tip - struktura
    point a;
    point b;
    point c; } triangle;

double dist0(point p){
    return sqrt(p.x * p.x + p.y * p.y); }

double dist(point a, point b){
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y)); }

double triangle_per(triangle t){
    return dist(t.a, t.b) + dist(t.b, t.c) + dist(t.c, t.a); }

double triangle_area(triangle t){
    double s = triangle_per(t) / 2.0;
    double a = dist(t.b, t.c);
    double b = dist(t.a, t.c);
    double c = dist(t.b, t.a);
    return sqrt(s * (s - a) * (s - b) * (s - c)); }

int main() {

    point a, b, c;
    cin >> a.x >> a.y; 
    cin >> b.x >> b.y;
    cin >> c.x >> c.y; 

    //cout << dist0(a)<< endl;
    //cout << dist(a, b)<< endl;

    triangle tr1;
    tr1.a = a; tr1.b = b; tr1.c = c; 
    cout << triangle_per(tr1) << endl;
    cout << triangle_area(tr1) << endl;

    return 0;}