#pragma once
#include <iostream>
#include <string>
using namespace std;

template <class T>
class  clsDbLinkedList 
{
private:

	struct Node
	{
		T Data;
		Node* Next;
		Node* Prev;

		Node(const T &value)
		{
			Data = value;
			Next = nullptr;
			Prev = nullptr;
		}
	};

	Node* Head;
	Node* Tail;
	short Size;

public:


	clsDbLinkedList()
	{
		 Head = nullptr;
		 Tail = nullptr;
		 Size = 0;
	}

	~clsDbLinkedList()
	{
		while (Head != nullptr)
		{
			Node* temp = Head;
			Head = Head->Next;
			delete temp;
		}
	}

	bool IsEmpty()
	{
		return Head == nullptr;
	}

	void InsertAtBeginning(const T& value)
	{
		Node* newNode = new Node(value);
		
		if (IsEmpty())
		{
			Head = newNode;
			Tail = Head;
			++Size;
			return;
		}

		newNode->Next = Head;
		Head->Prev = newNode;
		Head = newNode;
		++Size;
	}

	void InsertAtEnding(const T& value)
	{
		Node* newNode = new Node(value);

		if (IsEmpty())
		{
			Head = newNode;
			Tail = Head;
			++Size;
			return;
		}

		Node* current = Tail;
		current->Next = newNode;
		newNode->Prev = current;
		Tail = newNode;
		++Size;
	}

	void InsertAtAfter(Node* &FindNode, const T& newNodeValue)
	{
		if (IsEmpty())
		{
			throw runtime_error("Error: List is empty.");
		}


		if (FindNode == nullptr)
		{
			throw runtime_error("Error: Node with value not found.");
		}
		
		Node* newNode = new Node(newNodeValue);
		if (FindNode->Next == nullptr)
		{
			FindNode->Next = newNode;
			newNode->Prev = FindNode;
			Tail = newNode;
			++Size;
			return;
		}

		newNode->Next = FindNode->Next;
		newNode->Prev = FindNode;

		FindNode->Next->Prev = newNode;
		FindNode->Next = newNode;
		++Size;
		return;
	}

	bool InsertAtAfter(short &indexNode, const T& newNodeValue)
	{
		Node* currentNode = getNode(indexNode);
		if (currentNode != nullptr)
		{
			InsertAtAfter(currentNode, newNodeValue);
			return true;
		}
		return false;
	}

	bool IsHeadEqualTail()
	{
		return (Head == Tail);
	}

	void TraverseBeginning()
	{
		if (IsEmpty()){ return; }

		if (IsHeadEqualTail())
		{
			cout << Head->Data << "\n\n";
			return;
		}

		Node* current = Head;
		while (current != nullptr)
		{
			cout << current->Data << (current->Next == nullptr ? "" : " , ");
			current = current->Next;
		}

		cout << "\n\n";
	}

	void TraverseEnding()
	{
		if (IsEmpty())
		{
			cout << "\n\nEmpty Linked List\n\n";
			return;
		}

		if (IsHeadEqualTail())
		{
			cout << Tail->Data << "\n\n";
			return;
		}

		Node* current = Tail;
		while (current != nullptr)
		{
			cout << current->Data << (current->Prev == nullptr ? "" : " , ");
			current = current->Prev;
		}

		cout << "\n\n";
	}

	Node* FindNode(const T &value)
	{
		if (IsEmpty()) { return nullptr; }

		if (IsHeadEqualTail() && Head->Data == value ) { return Head; }

		Node* current = Head;
		while (current != nullptr)
		{
			if (current->Data == value)
			{
				return current;
			}
			current = current->Next;
		}

		return nullptr;
	}

	bool DeleteAtBeginning()
	{
		if (IsEmpty()) { return false; }

		Node* temp = Head;

		if (Head == Tail)
		{
			Head = nullptr;
			Tail = nullptr;
		}
		else
		{
			Head = temp->Next;
			if (Head) 
			{
				Head->Prev = nullptr;
			}
		}

		delete temp;
		Size--;
		return true;
	}

	bool DeleteAtEnding()
	{
		if (IsEmpty()) { return false; }

		Node* temp = Tail;

		if (Tail == Head)
		{
			Head = nullptr;
			Tail = nullptr;
		}
		else
		{
			Tail = temp->Prev;
			if (Tail) 
			{
				Tail->Next = nullptr;
			}
		}

		delete temp;
		Size--;
		return true;
	}

	bool DeleteNode(const T& value)
	{
		if (IsEmpty()) { return false; }

		Node* Find = FindNode(value);

		if (Find == nullptr) { return false; }

		if (Find == Head)
		{
			return DeleteAtBeginning();
		}
		else if(Find == Tail)
		{
			return DeleteAtEnding();
		}

		Find->Prev->Next = Find->Next;
		Find->Next->Prev = Find->Prev;
		delete Find;
		Size--;
		return true;
	}

	void clear()
	{
		while (!IsEmpty())
		{
			DeleteAtBeginning();
		}
	}

	void Reverse()
	{
		if (IsEmpty() || IsHeadEqualTail()) { return; }

		Node* current = Head;
		Node* temp = nullptr;
		while (current != nullptr)
		{
			temp = current->Prev;
			current->Prev = current->Next;
			current->Next = temp;
			current = current->Prev;
		}

		temp = Head;
		Head = Tail;
		Tail = temp;
	}

	Node* getNode(const short &index)
	{
		if (IsEmpty() || index < 0 || index >= Size ) { return nullptr; }

		short counter = 0;
		Node* current;

		if (index < Size / 2)
		{
			current = Head;

			for (short i = 0; i < index; i++)
			{
				current = current->Next;
			}
		}
		else
		{
			current = Tail;
			for (short i = Size - 1; i > index; i--)
			{
				current = current->Prev;
			}
		}
		return current;
	}

	T getItem(const short &index)
	{
		Node* node = getNode(index);

		if (node != nullptr)
			return node->Data;

		return NULL;
	}

	bool setItemNode(const short &index , const T &data)
	{
		Node* node = getNode(index);

		if (node != nullptr)
		{
			 node->Data = data;
			 return true;
		}
		return false;
	}

	Node* getTail()
	{
		return Tail;
	}

	Node* getHead()
	{
		return Head;
	}

	short getSize()
	{
		return Size;
	}

	__declspec (property(get = getHead)) Node* head;
	__declspec (property(get = getTail)) Node* tail;
	__declspec (property(get = getSize)) short size;


};

