//============================================================================
// Name        : Week3_Class3.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;

void Print(const vector<string> &a) {
	for (const auto &c : a) {
		cout << c << " ";
	}
}

string Tolower(string& a){
	for(auto& c : a){
		c = (char)tolower(c);
}
	return a;
}


int main() {
	int n;
	cin >> n;
	vector<string> v(n);
	for(auto& f : v){
		cin >> f;
	}
	sort(v.begin(), v.end(), [](string x, string y){
		return Tolower(x) < Tolower(y);
	});
	Print(v);
	return 0;
}

