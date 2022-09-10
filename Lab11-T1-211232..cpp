#include <iostream>

using namespace std;

int main() 
{
	int arr[3][3]={{4,6,7},{1,9,5},{8,7,2}}; //initializing 2D array
	for (int i=0;i<3;i++) //loop for rows
	for (int j=0;j<3;j++)  //loop for columns
	{
		cout<<"Arr["<<i<<"]["<<j<<"] = "<<arr[i][j]<<endl;
	}

	return 0;
}
