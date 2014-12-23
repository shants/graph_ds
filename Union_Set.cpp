
#include<iostream>
#include<vector>
using namespace std;
class UnionSet
{

public:

UnionSet(int n) : _capacity(n) {
    _pset.reserve(_capacity);
    for(int i=0; i < _capacity;++i)
	_pset.push_back(i);
}

int findSet(int i) {
    while(_pset[i] != i ) {
	_pset[i] = _pset[_pset[i]];
    }
}

void unionSet(int i, int j) {
    if(!isSameSet(i, j)) { // not in same set
	// assign less value of parent
	if(_pset[i] < _pset[j]) {
	    _pset[j] = _pset[i];
	}else{
	    _pset[i] = _pset[j];
	}
    }
}

bool isSameSet(int i, int j) {
    return (_pset[i] == _pset[j]);
}
private :
vector<int> _pset;
int _capacity;
};


int main() {
UnionSet u(10);
u.unionSet(1,2);
u.unionSet(2,3);
u.unionSet(1,4);
u.unionSet(1,7);
u.unionSet(2,8);

cout<< "\n is same set 2,4 "<< u.isSameSet(2,4);
return 0;
}
