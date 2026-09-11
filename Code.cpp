#include <bits/stdc++.h>
using namespace std;
void center(string s,int size){


int spaces = (size- s.length()) / 2;

cout << string(spaces, ' ') << s << endl;
}
int main() {
    cout<<"========================================"<<endl;
    string s="Welcome to CGPA calculator";
	center(s,37);
	

}
