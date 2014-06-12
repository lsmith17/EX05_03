#ifndef Vector_H
#define Vector_H
#include <iostream>
#include <vector>
using namespace std;

template<typename T>
class Vector
{
private:
	T elements[100];
	int vectorSize;
public:
	Vector();
	void push_back(T element);
	void pop_back();
	unsigned int size();
	bool empty();
	T at(int a);
	void clear();
	void swap(Vector v2);
};
#endif 