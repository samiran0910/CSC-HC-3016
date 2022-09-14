#include <iostream>
using namespace std;
class Stack
{
private:
  int top;
  int arr[5];

public:
  Stack()
  {
    top = -1;
    for (int i = 0; i < 5; i++)
    {
      arr[i] = 0;
    }
  }
  bool isEmpty()
  {
    if (top == -1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  bool isFull()
  {
    if (top == 4)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  void push(int val)
  {
    if (isFull())
    {
      cout << "Stack OverFlow!!!" << endl;
    }
    else
    {
      top++;
      arr[top] = val;
      cout << "Done!!" << endl;
    }
  }
  int pop()
  {
    if (isEmpty())
    {
      cout << "Stack UnderFlow!!!" << endl;
      return 0;
    }
    else
    {
      int temp = arr[top];
      arr[top] = 0;
      cout << "Done" << endl;
      return temp;
    }
  }
  void peek(int indx)
  {
    if (indx > 4 && indx < 0)
    {
      cout << "Invalid Index" << endl;
    }
    else
    {
      cout << "The val: " << arr[indx] << " is at index: " << indx << endl;
    }
  }
  void display()
  {
    for (int i = 4; i >= 0; i--)
    {
      cout << arr[i] << endl;
    }
  }
};
int main()
{
  Stack s;
  int ch;
  do
  {
    cout << "1. Display() Stack" << endl;
    cout << "2. Push() Stack" << endl;
    cout << "3. Pop() Stack" << endl;
    cout << "4. Peek() Stack" << endl;
    cout << "5. Check fullStatus() Stack" << endl;
    cout << "6. Check emptyStatus() Stack" << endl;
    cout << "7. Clear Screen" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter your choice: " << flush;

    cin >> ch;
    switch (ch)
    {
    case 1:
      s.display();
      break;
    case 2:
      cout << "Enter the value: " << flush;
      int val;
      cin >> val;
      s.push(val);

      s.display();
      break;

    case 3:
      s.pop();

      break;
    case 4:
      cout << "Enter the index: " << flush;
      int indx;
      cin >> indx;
      s.peek(indx);
      break;
    case 5:
      if (s.isFull())
      {
        cout << "It is full!!!" << endl;
      }
      else
      {
        cout << "Not full" << endl;
        s.display();
      }
      break;
    case 6:
      if (s.isEmpty())
      {
        cout << "It is empty!!!" << endl;
      }
      else
      {
        cout << "Not empty!!!" << endl;
        s.display();
      }
      break;
    case 7:
      system("cls");
      break;
    }

  } while (ch != 0);

  return 0;
}