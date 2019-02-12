//Alec Martens
#include <iostream>
#include <vector>
#include <cmath>


 //! A function to find standard deviation
    /*! 
	\param a is a pointer to an array of ints
	\param n is the int number of ints
	\return standard deviation
     */
int deviation( int* a, int n )
{
	int sum = 0;
	std::vector<int> v;
	for (int i = 0; i < n; i++) {
	    v.push_back(a[i]);
	}
	for(size_t i = 0; i < v.size(); i++)
	{
		sum += v[i];
	} 
	double mean = sum / v.size();
	double stddev = 0;
	for(size_t i = 0; i <= v.size() - 1; i++)
	{
		double stddev = stddev + (v[i] - mean)*(v[i] - mean); 
	}
	stddev /= v.size();
	if( stddev == 0)
		std::cout << "Sigma is zero." << std::endl;
	return sqrt(stddev);
	
}
