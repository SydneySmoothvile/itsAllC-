
#include<iostream>
using namespace std;
const int arraysize = 5;

int queue[5];
int front = -1;
int rear = -1;
bool isEmpty();
void enqueue(int value);
void dequeue();
void output();

int main()
{
	int choice, value;
	char numb;

	do
	{
	start:
		cout << "Please select an option \n 1. Add a value \n 2. Delete a value \n ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Enter the value you would like to add to the queue :";
			cin >> value;
			enqueue(value);
			output();
			break;
		case 2:
			dequeue();
			output();
			break;
		default:
			cout << "You did not select any option :" << endl;
			goto start;
		}

		cout << endl;
		cout << "Do you want to insert / delete another value ? Enter (y / n) ";
		cin >> numb;
		if (numb == 'n' or numb == 'N')
		{
			break;
		}
	} while (true);
	return 0;
}
bool isEmpty()
{

	if (front == -1 && rear == -1)

		return true;
	else
		return false;
}
void enqueue(int value)
{
	if (rear == (arraysize - 1)) {
		cout << "The queue is full\n";
	}
	else if (isEmpty())
	{
		rear = front = 0;
		queue[rear] = value;
	}
	else
	{
		rear = rear + 1;
		queue[rear] = value;
	}



}
void dequeue()
{
	if (isEmpty())
	{
		cout << "There is no element in the queue";
	}
	else if (rear == front)
	{
		rear = front = -1;
	}
	else
	{
		front = front + 1;
	}

}
void output()
{
	for (int i = front; i <= rear; i++)
	{
		cout << queue[i];
	}

}
