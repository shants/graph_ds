#include<iostream>
#include<string>
#include<vector>
#include <map>


using namespace std;
void swap(char& a, char& b) {
char t = a;
a=b;
b=t;
}

void perm(string s, int i, map<string, int>& m) {
    if(i == s.length()) {
	//cout<<"\n "<<s;
	//insert into map
	m[s]++;
    }
    else {
	for(int j=i;j<s.length();++j) {
	    swap(s[i], s[j]);
	    perm(s, i+1, m);
	    swap(s[i], s[j]);
	}
    }

}

int main() {
map<string, int> m;
string s("aabb");
perm(s,0, m);
map<string, int>::iterator it = m.begin();
while(it != m.end()) {
    cout<<"\n** "<<(*it).first;
    ++it;
}
cout<<"\n";
return 0;
}
