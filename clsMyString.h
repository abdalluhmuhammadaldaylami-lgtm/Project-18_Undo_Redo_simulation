#pragma once
#include<iostream>
#include<stack>
using namespace std;

class clsMyString
{
private:
	string _Value;
	stack<string>Ustack;
	stack<string>Rstack;
	void Update() {
		Ustack.push(_Value);
	}
public:
	void Setvalue(string val)
	{
		Ustack.push(_Value);
		_Value = val;
	}
	string Getvalue()
	{
		return _Value;
	}
	_declspec(property(get = Getvalue, put = Setvalue))string value;
	void Undo()
	{
		if (!Ustack.empty()) {
			Rstack.push(_Value);
			_Value = Ustack.top();
			Ustack.pop();
			
		}
	}

	void Redo()
	{
		if (!Rstack.empty())
		{
			Ustack.push(_Value);
			_Value = Rstack.top();
			Rstack.pop();
		}
	}
};

