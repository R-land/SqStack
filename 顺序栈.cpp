#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib,"ws2_32.lib")
#define MaxSize 50

typedef struct tagSqStack
{
	int data[MaxSize];
	int top;
}SqStack;

void InitStack(SqStack &s)
{
	s.top = -1;
}

bool GetTop(SqStack &s, int &x)
{
	if (s.top == -1)
	{
		return false;
	}
	x = s.data[s.top];
	return true;
}

bool Push(SqStack &s, int x)
{
	if (s.top >= MaxSize - 1)
	{
		return false;
	}
	s.top++;
	s.data[s.top] = x;
	return true;
}

int main(void)
{
	int x;
	SqStack A;
	InitStack(A);
	Push(A, 9);
	Push(A, 8);
	Push(A, 7);
	Push(A, 6);
	Push(A, 5);
	Push(A, 4);
	GetTop(A, x);
	printf("Õ»¶¥ÔªËØ == %d\n", x);
	system("pause");
	return 0;
}