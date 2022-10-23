#include <iostream>
using namespace std;

class Node
{
private:
    int data;
    Node *next;
    friend class CircularList;
};

class CircularList
{
private:
    Node *cursor;

public:
    CircularList()
    {
        cursor = NULL;
    }
    void addFront(int x)
    {
        Node *n = new Node;
        n->data = x;
        if (cursor == NULL)
        {
            n->next = n;
            cursor = n;
            return;
        }
        n->next = cursor->next;
        cursor->next = n;
    }
    void addLast(int x)
    {
        Node *n = new Node;
        n->data = x;
        if (cursor == NULL)
        {
            n->next = n;
            cursor = n;
            return;
        }
        n->next = cursor->next;
        cursor->next = n;
        cursor = n;
    }
    void add(int x, int y)
    {
        if (cursor == NULL)
        {
            return;
        }
        Node *temp = cursor->next;
        do
        {
            if (temp->data == y)
            {
                Node *n = new Node;
                n->data = x;
                n->next = temp->next;
                temp->next = n;

                if (temp == cursor)
                {
                    cursor = n;
                }
                return;
            }
            temp = temp->next;
        } while (temp != cursor->next);
        cout << y << " is not present in the list\n";
    }
    void removeFront()
    {
        Node *temp = cursor->next;
        if (temp == cursor)
        {
            cursor = NULL;
            return;
        }
        cursor->next = temp->next;
        delete temp;
    }
    void removeLast()
    {
        Node *temp = cursor->next;
        if (temp == cursor)
        {
            cursor = NULL;
            delete temp;
            return;
        }
        while (temp->next != cursor)
        {
            temp = temp->next;
        }
        temp->next = cursor->next;
        cursor = temp;
    }
    void remove(int x)
    {
        if (cursor == NULL)
        {
            cout << "List is empty\n";
        }
        Node *temp = cursor->next;
        do
        {
            if (temp->next->data == x)
            {

                if (temp->next == cursor)
                {
                    temp->next = temp->next->next;
                    cursor = temp->next->next;
                    return;
                }
                temp->next = temp->next->next;
                return;
            }
            temp = temp->next;
        } while (temp != cursor->next);
        cout << x << " is not present in the list\n";
    }
    Node *search(int x)
    {
        if (cursor == NULL)
        {
            cout << "Element not Found. LIST is EMPTY\n";
        }
        Node *temp = cursor->next;
        do
        {
            if (temp->data == x)
            {
                return temp;
            }
            temp = temp->next;
        } while (temp != cursor->next);
        return NULL;
    }
    void concatenate(CircularList n1)
    {
        Node *first1 = cursor->next;
        Node *last1 = cursor;
        last1->next = n1.cursor->next;
        cursor = n1.cursor;
        cursor->next = first1;
    }
    void display()
    {
        if (cursor == NULL)
        {
            cout << "List is Empty\n";
            return;
        }
        Node *temp = cursor->next;
        while (temp != cursor)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << temp->data << endl;
        cout << endl;
    }
};
int main()
{
    CircularList l;
    l.addFront(23);
    l.addFront(34);
    l.addLast(12);
    l.add(3, 34);
    l.remove(23);
    cout << "Circular Linked List 1: ";
    l.display();
    int num;
    cout << "Enter element to be searched : ";
    cin >> num;
    Node *s = l.search(num);
    if (s == NULL)
    {
        cout << "Element not Found\n"
             << endl;
    }
    else
    {
        cout << "Element Found\n"
             << endl;
    }
    CircularList l1;
    l1.addFront(200);
    l1.addFront(300);
    l1.addLast(189);
    l1.add(30, 300);
    l1.addLast(65);
    cout << "Circular Linked List 2: ";
    l1.display();
    cout << "Lists after concatenating : " << endl;
    l.concatenate(l1);
    l1.display();
    return 0;
}
