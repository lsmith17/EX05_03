#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
	Vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);

	Vector<int> v2;
	v2.push_back(3);
	v2.push_back(4);
	v2.push_back(5);
	v2.push_back(6);

	v1.swap(v2);

	for (int i = 0; i < v1.size(); i++)
		cout << v1.at(i) << " ";
	
	return 0;
}