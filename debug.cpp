#include <iostream>
using namespace std;

void push_back(int *&input_array, const unsigned int &size, const int &value)
{
	int *temp = new int [size + 1];
	for(unsigned int i = 0; i < size ; i++)
	{
		temp[i] = input_array[i];
	}
	temp[size] = value ;
	delete[] input_array;
	input_array = temp;

}


int main ()
{	
	unsigned int size = 3;
	int *mydata = new int [size];
	for (int i = 0 ; i < 3 ; i ++)
	{
		mydata[i]= i;
	}
	for (int i = 0 ; i < 3 ; i ++)
	{
		cout << mydata[i] << endl;
	}
	push_back(mydata, size, 7856 );
	for (int i = 0 ; i < 4 ; i ++)
	{
		cout << mydata[i] << endl;
	}
	return 0;
}
