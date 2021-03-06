//#ifndef Vector_H
//#define Vector_H
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
	Vector()
	{
		vectorSize = 0;
	}

	bool empty()
	{
		return vectorSize = 0;
	}

	T at(int a)
	{
		return elements[a];
	}

	void push_back(T value)
	{
		elements[vectorSize++] = value;
	}

	void pop_back()
	{
		return elements[--vectorSize];
	}

	unsigned int size()
	{
		return vectorSize;
	}

	void clear()
	{
		vectorSize = 0;
	}

	void swap(Vector v2)
	{
		T temp[100];
		int tempSize = v2.size();
		for (int i = 0; i < v2.size(); i++)
			temp[i] = v2.at(i);

		v2.clear();
		for (int i = 0; i < size(); i++)
			v2.push_back(at(i));

		clear();
		for (int i = 0; i < tempSize; i++)
			push_back(temp[i]);
	}

};
//#endif 