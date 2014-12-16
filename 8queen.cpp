#include<iostream>
#include<vector>
#include<cstdlib>
#include<cmath>


using namespace std;
int arr[8] = { -1 };
void printBoard()
{
    cout << "\n ===========================";
    for(int i=0; i<8;++i) {
	cout<< "\n Position is " <<i << " " <<arr[i];
    }
    cout << "\n ===========================";
}

bool place(int row, int col) {
    for(int k=0; k < row; ++k)
    {
	if ((k==row) || (col == arr[k]) || (abs(arr[k] - col) == abs(row-k)))
	    return false;
    }

return true;
}

void queen(int row)
{
    if(row == 8) {
	printBoard();
    }
    else{
	for(int col=0; col<8;++col) {	
	    if(place(row, col)) {
		arr[row] = col;
		queen(row + 1);
	    }
	}
    	
    }
}

int main()
{
queen(0);
return 0;
}
