#include<iostream>
#include<vector>

using namespace std;
void printHeap(vector<int>& v) {
cout << "\n PRINT HEAP \n";
for(int i=0; i <(int)v.size(); ++i) {
cout<<" " << v[i];
}
cout<<"\n";

}

void swapV(int& a, int& b) {
int temp = a;
a=b;
b=temp;
}

void heapify(vector<int>&v, int n, int indx) {
    int indMax = indx;
    int l = 2*indx+1;
    int r = 2*(indx+1); 

    if((l <= n) && (v[l] > v[indx])) 
	    indMax = l;
	else 
	    indMax = indx;
	
	if((r<=n) && (v[indMax] < v[r]))
	    indMax = r;

	if(indMax != indx) {
	    swapV(v[indMax], v[indx]);
	    heapify(v, n, indMax);
	}
    
}

void buildHeap(vector<int>& v) {
int sz = v.size();
int left , right;
int n = (int)v.size()-1;
for(int i= (n/2)+1; i>=0; --i) {
    heapify(v, n, i);
}
}

void heapSort(vector<int>& v) {
int heapSize = v.size()-1;
while(heapSize >= 0) {
    swapV(v[0], v[heapSize]);
    heapSize--;
    heapify(v,heapSize, 0);
}
}


int main() {
int n;
vector<int> v;
/*int no;
cout<<"\n give no of elements";
cin>>n;
for(int i=0; i < n;++i) {
cin>> no;
v.push_back(no);
}
*/
v.push_back(6);
v.push_back(4);
v.push_back(2);
v.push_back(7);
v.push_back(1);
v.push_back(3);

printHeap(v);
buildHeap(v);
printHeap(v);
heapSort(v);
printHeap(v);

return 0;
}
