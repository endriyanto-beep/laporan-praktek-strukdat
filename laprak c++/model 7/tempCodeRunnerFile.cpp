#include <iostream>
#include <string>
using namespace std;

struct Node 
{
    char data;
    Node *next;
};

bool isEmpty(Node *top)
{
    return top == nullptr;
}

void push(Node *&top, char data) 
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

char pop(Node *&top) 
{
    if (isEmpty(top)) {
        cout << "stack kosong, tidak bisa pop" << endl;
        return '\0';
    }
    char poppedData = top->data;
    Node *temp = top;
    top = top->next;
    delete temp;
    return poppedData;
}

void show(Node *top) 
{
    if (isEmpty(top)) {
        cout << "stack kosong" << endl;
        return;
    }
    cout << "top -> ";
    Node *temp = top;
    while (temp != nullptr) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() 
{
    Node *stack = nullptr;
    Node *stack2 = nullptr;
    string nim;

    cout << "Masukkan NIM : ";
    cin >> nim;

    for (char c : nim) {
        push(stack, c);
    }

    cout << "\nkondisi awal stack:" << endl;
    show(stack);

    cout << "kondisi awal : " << nim << endl;

    string balik = "";
    while (!isEmpty(stack)) {
        char c = pop(stack);
        balik += c;
        push(stack2, c);
    }

    cout << "\nkondisi stack setelah dibalik:" << endl;
    show(stack2);

    cout << "setelah dibalik : " << balik << endl;

    return 0;
}
