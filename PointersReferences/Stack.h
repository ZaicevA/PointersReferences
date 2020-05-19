#pragma once

template<typename T>
class Stack
{
private:
	T* stackPtr;
	int top;
	int stackSize;
public:
	Stack(int size);
	bool Push(T element);
	//Передаю по ссылке, чтобы не бросать здесь ошибку 
	//при попытке получить элемент пустого стека
	bool Pop(T& result);
	int GetCurrentStackSize();
};

template<typename T>
Stack<T>::Stack(int size) : stackSize(size)
{
	stackSize = stackSize > 0 ? stackSize : 10;
	stackPtr = new T[stackSize];
	top = -1;
}

template<typename T>
bool Stack<T>::Push(T element)
{
	if (top == stackSize - 1)
		return false;

	top++;
	stackPtr[top] = element;
	return true;
}

//Передаю по ссылке, чтобы не бросать здесь ошибку 
//при попытке получить элемент пустого стека
template<typename T>
bool Stack<T>::Pop(T& result)
{
	if (top == -1)
		return false;

	result = stackPtr[top];
	top--;
	return true;
}

template<typename T>
int Stack<T>::GetCurrentStackSize()
{
	return top + 1;
}