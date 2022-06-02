#include <iostream>
#include "exercise.h"
using namespace std;

int main ()
{	
	int array1 [3] = {1,2,3};
	double array2 [3] = {2,3,4};
	int *pointer_to_array = array1;
	double *pointer_to_double = array2;
	double array_z = computation::mean_array_value(pointer_to_array,3);
	double array_x = computation::mean_array_value(pointer_to_double,3);
	cout << array_z << endl;
	cout << array_x << endl;
	
	computation::Dataset data { array_z , array_x };
	cout << data.array_x << array_z << endl;


	
	return 0;
}