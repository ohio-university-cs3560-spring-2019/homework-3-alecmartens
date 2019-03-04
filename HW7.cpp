//Alec Martens
//3/4/2019
//Homework 7

//#include "pch.h"
#include "HW7.h"
#include <iostream>
#include <cstdarg>
#include <complex>
#include <cmath>
#include <vector>

double stddev(int n, ...) {//include first parameter as # of elements
	//declarations
	std::vector<int> nums;
	double std_dev = 0; int mean = 0;
	va_list args;//declares variadic list
	va_start(args, n);//starts variadic funtion

	for (int i = 0; i < n; i++)//adds all the numbers to a vector
	{
		int num = va_arg(args, int);//gets number to use
		nums.push_back(num);
		mean += nums[i];//adds the sum of the numbers
	}
	va_end(args);
	mean = mean / n;//calculates the mean
	std::cout << "Mean: " << mean << std::endl;
	for (int i = 0; i < n; i++)
	{
		std_dev = std_dev + (nums[i] - mean)*(nums[i] - mean);//does the inside of the equation
	}
	std_dev /= n;//divides the equation by n of elements
	std_dev = sqrt(std_dev);//takes the sqrt of the equation

	std::cout << "Standard Deviation: ";
	return std_dev;
}