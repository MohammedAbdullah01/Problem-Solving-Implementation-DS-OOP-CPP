#pragma once
#include <iostream>
#include "clsDbLinkedList.h"
using namespace std;

template <class T>
class clsMyQueue
{
protected:
	clsDbLinkedList <T> _MyList;

public:
	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}

	void push(const T &value)
	{
		_MyList.InsertAtEnding(value);
	}

	void pop()
	{
		_MyList.DeleteAtBeginning();
	}

	bool IsFrontEqualBack()
	{
		return _MyList.IsHeadEqualTail();
	}

	void Traverse()
	{
		_MyList.TraverseBeginning();
	}

	T GetItem(const short& index)
	{
		return _MyList.getItem(index);
	}

	void Reverse()
	{
		_MyList.Reverse();
	}

	bool UpdateItem(const short& index, const T& data)
	{
		return _MyList.setItemNode(index, data);
	}
		
	bool InsertAfter(short indexNode, const T& newNodeValue)
	{
		return _MyList.InsertAtAfter(indexNode, newNodeValue);
	}

	void InsertAtFront(const T& value)
	{
		_MyList.InsertAtBeginning(value);
	}

	void InsertAtBack(const T& value)
	{
		_MyList.InsertAtEnding(value);
	}

	void Clear()
	{
		_MyList.clear();
	}
		
	T getFront()
	{
		if (IsEmpty())
			throw std::runtime_error("Queue is empty.");

		return _MyList.head->Data;
	}

	T getBack()
	{
		return _MyList.tail->Data;
	}

	short getSize()
	{
		return _MyList.size;
	}

	__declspec (property(get = getFront)) T front;
	__declspec (property(get = getBack)) T back;
	__declspec (property(get = getSize)) short size;

};

