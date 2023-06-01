using namespace std;
#include <iostream>



int main() {

	int myArray[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			cout << endl << myArray[i] << " is at index " << i << endl;
		}
		cout << myArray[i] << ", ";
	}


	return 0;

}