#include <iostream>
using namespace std;
#include <vector>
#include <cmath>

void vector_to_console(std::vector<double> &vec)
{
    for ( int i = 0; i<= 5 ; i++)
    {
        cout << vec[i] << endl;
    }
}
void vector_exponential(std::vector<double> &vec) 
{
    for(int i = 0; i <= vec.size(); i++)
    {
        vec[i] = std::exp(vec[i]);
    }
    
} 
void vector_logarithm(std::vector<double> &vec)
{
    for(int i = 0; i <= vec.size(); i++)
    {
        vec[i] = std::log(vec[i]);
    }
   
}


int main ()
{
    std::vector<double> my_vector;
    for(int i =0 ; i <= 5 ; i++)
    {
        my_vector.push_back(i);
    }
    vector_to_console(my_vector);
    vector_exponential(my_vector);
    vector_to_console(my_vector);
    vector_logarithm(my_vector);
    vector_to_console(my_vector);
   

    return 0;
}
