#pragma once
#include <iostream>
#include <string>
#include <stack>

using namespace std;

class clsMyStringUseStack
{
private :
	stack <string>_Undo;
	stack <string>_Redo;
	string _Value;

public:
	string getValue()
	{
		return _Value;
	}
	void setValue(string value)
	{
		_Undo.push(_Value);
		_Value = value;
	}

	void Undo()
	{
		if (!_Undo.empty())
		{
			_Redo.push(_Value);
			_Value = _Undo.top();
			_Undo.pop();
		}
	}

	void Redo()
	{
		if (!_Redo.empty())
		{
			_Undo.push(_Value);
			_Value = _Redo.top();
			_Redo.pop();
		}
	}

	__declspec (property(get = getValue , put = setValue)) string value;
};

