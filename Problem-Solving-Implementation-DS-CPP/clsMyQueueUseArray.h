#pragma once
#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

template <class T>
class clsMyQueueUseArray
{
protected:
	clsDynamicArray <T> _Mylist;

public:
	bool IsEmpty()
	{
		return _Mylist.IsEmpty();
	}

	void push(const T& value) 
	{
		_Mylist.InsertAtEnd(value);
	}

		void pop()
		{
			_Mylist.DeleteFirstItem();
		}

		void Traverse()
		{
			_Mylist.Display();
		}

		T GetItem(const short& index)
		{
			return _Mylist.GetItem(index);
		}

		void Reverse()
		{
			_Mylist.Reverse();
		}

		bool UpdateItem(const short& index, const T& value)
		{
			return _Mylist.SetItem(index, value);
		}

		bool InsertAfter(short index, const T& value)
		{
			return _Mylist.InsertAfter(index, value);
		}

		void InsertAtFront(const T& value)
		{
			_Mylist.InsertAtBeginning(value);
		}

		void InsertAtBack(const T& value)
		{
			_Mylist.InsertAtEnd(value);
		}

		void Clear()
		{
			_Mylist.Clear();
		}


		T getFront()
		{
			return _Mylist.OriginalArray[0];
		}

		T getBack()
		{
			return _Mylist.OriginalArray[size - 1];

		}

		short getSize()
		{
			return _Mylist.size;
		}

		__declspec (property(get = getFront)) T front;
	__declspec (property(get = getBack)) T back;
	__declspec (property(get = getSize)) short size;

};

