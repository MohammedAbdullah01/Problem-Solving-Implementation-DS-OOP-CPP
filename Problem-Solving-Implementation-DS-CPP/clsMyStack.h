#pragma once
#include <iostream>
#include <string>
#include "clsMyQueue.h"
#include "clsDbLinkedList.h"
using namespace std;

template <class T>
class clsMyStack : public clsMyQueue <T>
{
public:

	void push(const T& value)
	{
		clsMyQueue<T>::_MyList.InsertAtBeginning(value);
	}

	T getTop()
	{
		return clsMyQueue<T>::_MyList.head->Data;
	}

	T getBottom()
	{
		return clsMyQueue<T>::_MyList.tail->Data;
	}

	__declspec (property(get = getTop)) T top;
	__declspec (property(get = getBottom)) T bottom;
};

