#include <iostream>
using namespace std;

class Stack {
private:
	int top = -1;
	int n = 5;
	int Stack[5];
public:
	
	bool isFull() {
		if (top >= n-1)
		{
			return true;
		}
		return false;
	}

	bool isEmpty() {
		if (top <= -1)
		{
			return true;
		}
		return false;
	}

	void push(int val) {
		if (isFull())
		{
			cout << "This stack is overflown!\n";
		}
		else
		{
			top++;
			Stack[top] = val;
		}
		
	}

	void pop() {
		if (isEmpty())
		{
			cout << "This stack is underflown!\n";
		}
		else
		{
			cout << "The element that was popped was " << Stack[top] << endl;
			top--;
		}
	
	}

	void peek() {
		if (isEmpty())
		{
			cout << "This stack is underflown!\n";
		}
		else
		{
			cout << "The Peek element is " << Stack[top] << endl;
		}
		
	}

	void display() {
		if (isEmpty())
		{
			cout << "This stack is underflown!\n";
		}
		else
		{
			for (int i = top; i >= 0; i--)
			{
				cout << Stack[i] << " ";
			}
			cout << endl;
		}	
	}

	void max() {
		if (isEmpty())
		{
			cout << "This stack is underflown!\n";
		}
		else
		{
			int max = Stack[top];
			for (int i = top; i >= 0; i--)
			{
				if (max < Stack[i])
				{
					max = Stack[i];
				}
			}
			cout << "The max element in the stack is: " << max << endl;
		}
	}
};

int main() {
	int val, ch;
	Stack S;

	do
	{
		cout << "1) Push\n";
		cout << "2) Pop\n";
		cout << "3) Peek\n";
		cout << "4) Display\n";
		cout << "5) Max\n";
		cout << "6) Exit\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "What you want pushed?\n";
			cin >> val;
			S.push(val);
			break;
		case 2: S.pop();
			break;
		case 3: S.peek();
			break;
		case 4: S.display();
			break;
		case 5: S.max();
			break;
		default:
			cout << "Invalid!";
		}
	} while (ch!=6);
}