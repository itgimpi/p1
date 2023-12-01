#include<bits/stdc++.h>
using namespace std;

const unsigned NAJ = 10;

//tip naziv      dva parametra
float stepen(float osnova, unsigned stepen) {
	
// lose resenje za takmicarsko prog. O(n)
// dobro resenje O( log n )

	float res = 1.0f; // neutralni el. za mnozenje

	for(unsigned i = 0; i < stepen; i++)
		res *= osnova;

	return res; }

int main() {
	unsigned i;
	for(i = 0; i <= NAJ; i++)
		cout << i << ' ' << stepen(2.0f,i) << ' ' << stepen(3.0f,i) << endl;
	return 0;
}


