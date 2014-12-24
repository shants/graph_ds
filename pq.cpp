#include<queue>
#include<iostream>
#include<vector>

using namespace std;

struct person {
person(int n, int ag) : no(n), age(ag) {}
int no;
int age;
};

class cmp { 
public:
bool operator() (person& p1, person& p2) {
	return p1.age < p2.age;
    }
};

int main() {
priority_queue<person, vector<person>, cmp> pq;

person p1(1,10);
person p2(2,20);
person p3(3,5);
person p4(4,1);
pq.push(p1);
pq.push(p2);
pq.push(p3);
pq.push(p4);

p3.age = 50;
while(!pq.empty()) {
person p=  pq.top();
pq.pop();
cout<< "\n"<<p.no << " " << p.age << " ";
}
/*
in c++ stl priority queue you cannot update a key
*/
return 0;
}

