#pragma once

class Stack
{
private:
	class Element
	{};
public:
	void Push( int val );
	int Pop();
	int Size() const;
	bool Empty() const;
private:
	Element* pTop = nullptr;
};