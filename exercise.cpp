namespace computation
{
    double mean_array_value(int *array, const unsigned int &length)
{
	double storage;
	for (int i = 0 ; i < length ; i++)
	{
		storage += array [i];
	}
	return storage / length;
}
double mean_array_value(double *array, const unsigned int &length)
{
	double storage;
	for (int i = 0 ; i < length ; i++)
	{
		storage += array [i];
	}
	return storage / length;
}


}