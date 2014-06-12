//#include <iostream>
//#include "Vector.h"
//#include <vector>
//using namespace std;
//
//template<typename T>
//Vector<T>::Vector()
//{
//	vectorSize = 0;
//}
//
//template<typename T>
//bool Vector<T>::empty()
//{
//	return vectorSize = 0;
//}
//
//template<typename T>
//T Vector<T>::at(int a)
//{
//	return elements[a];
//}
//
//template<typename T>
//void Vector<T>::push_back(T value)
//{
//	elements[vectorSize++] = value;
//}
//
//template<typename T>
//void Vector<T>::pop_back()
//{
//	return elements[--vectorSize];
//}
//
//template<typename T>
//unsigned int Vector<T>::size()
//{
//	return vectorSize;
//}
//
//template<typename T>
//void Vector<T>::clear()
//{
//	vectorSize = 0;
//}
//
//template<typename T>
//void Vector<T>::swap(Vector v2)
//{
//	T temp[100];
//	int tempSize = v2.size();
//	for (int i = 0; i < v2.size(); i++)
//		temp[i] = v2.at(i);
//
//	v2.clear();
//	for (int i = 0; i < size(); i++)
//		v2.push_back(at(i));
//
//	clear();
//	for (int i = 0; i < tempSize; i++)
//		push_back(temp[i]);
//}
