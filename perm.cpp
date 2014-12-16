#include<iostream>
#include<string>
#include<vector>

using namespace std;
void swap(char& a, char& b) {
char t = a;
a=b;
b=t;
}

void perm(string s, int i) {
    if(i == s.length())
	cout<<"\n "<<s;
    else {
	for(int j=i;j<s.length();++j) {
	    swap(s[i], s[j]);
	    perm(s, i+1);
	    swap(s[i], s[j]);
	}
    }

}

int main() {
string s("abc");
perm(s,0);
return 0;
}
