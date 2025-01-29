#pragma once
#include <iostream>
#include "clsMyQueueUseArray.h"

using namespace std;

template <class T>

class clsMyStackUseArray : public clsMyQueueUseArray <T>
{
public:
	void push(const T& value)
	{
		clsMyQueueUseArray<T>::_Mylist.InsertAtBeginning(value);
	}

	T getTop()
	{
		return clsMyQueueUseArray<T>::front;
	}


	T getBottom()

	{
		return clsMyQueueUseArray<T>::back;
	}
	__declspec (property(get = getTop)) T top;
	__declspec (property(get = getBottom)) T bottom;

};

