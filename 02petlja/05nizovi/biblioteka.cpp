#include<bits/stdc++.h>
using namespace std;
// C++ biblio f-je
int main() {
    //int a[] = {1,5,10,15,15,20,20,20};
                //|begin                |end
                //v                     V  
    vector<int>v {1,5,10,15,15,20,20,20};
    cout << v[0] << endl; // C
    cout << v.at(0) << endl; // C++
    cout << *v.begin() << endl; // C++
    cout << *begin(v) << endl; // C++
    auto it = begin(v);
    cout << *it << endl;
    cout << *it + 1 << endl;
    cout << *(it + 1) << endl;
    // begin ukazuje na 0. el
    // end ukazuje na 7 + 1. el 
    cout << distance( begin(v), end(v) ) << endl;
    cout << distance( end(v), begin(v) ) << endl;
    auto it3 = it + 3; // it3 ukazuje na treci (cetvrti)
    cout << distance(begin(v), it3) << endl;
    cout << *it3 << endl;
    cout << *next(it3) << endl;
    cout << *next(it3,2) << endl;
    cout << *prev(it3) << endl;
    cout << *min_element( begin(v), end(v) ) << endl;
    cout << *min_element( begin(v)+1, end(v)-1 ) << endl;
    cout << *max_element( begin(v)+1, end(v)-1 ) << endl;

    auto it15 = find(begin(v), end(v), 15);
    cout << *it15 << endl;
    cout << distance(begin(v),it15) << endl;
    auto it16 = find(begin(v), end(v), 16);
    if (it16 != v.end())
        cout << distance(begin(v),it16) << endl;
    else
        cout << "nema" << endl;
    
    return 0;  
}