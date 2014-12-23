#include<iostream>
#include<vector>

using namespace std;

int rotated_bs(int* arr, int low, int high, int no) {

if( (low == high) && arr[low] == no)
    return low;

if(low >= high) {
    return -1;
}

int mid = (low+high)/2;
if(arr[mid] == no) {
    return mid;
}else{
    if((arr[mid]<=arr[high])  && ((no >= arr[mid]) && (no <= arr[high])))
	return rotated_bs(arr, mid+1, high, no);
    
    else if ((arr[low]<=arr[mid])  && ((no >= arr[low]) && (no <= arr[mid])))
	return rotated_bs(arr, low, mid-1, no);
    else if(arr[low] > arr[mid])
	return rotated_bs(arr, low, mid, no);
    else
	return rotated_bs(arr, mid, high, no); 
}
}

int main() {
int arr[] = { 3,4,5,6,7,8,1,2 };
int sz = sizeof(arr)/sizeof(int);
int no;
cout<< "\n sizeof arr = "<<sz;
cout<< "\n give the number";
cin>>no;
cout << "\n ans is "<<rotated_bs(arr, 0, sz-1, no);

return 0;

}
