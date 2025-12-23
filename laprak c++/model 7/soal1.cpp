#include <iostream>
#include <string>
using namespace std;

struct Node {
    char data;
    Node *next;
};

bool isEmpty(Node *top) {
    return top == nullptr;
}

void push(Node *&top, char data) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

char pop(Node *&top) {
    if (isEmpty(top)) {
        cout << "Stack kosong, tidak bisa pop." << endl;
        return '\0';
    }
    char poppedData = top->data;
    Node *temp = top;
    top = top->next;
    delete temp;
    return poppedData;
}

void show(Node *top) {
    cout << "top ->";
    Node *temp = top;
    while (temp != nullptr) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << " NULL" << endl;
}

int main() {
    Node *stack = nullptr;
    Node *stack2 = nullptr; // untuk stack setelah dibalik
    string nim;

    cout << "Masukkan NIM : ";
    cin >> nim;

    // Push setiap karakter ke stack (kondisi awal)
    for (char c : nim) {
        push(stack, c);
    }

    cout << "\nkondisi awal stack:" << endl;
    show(stack);

    // Membalik ke stack2
    string reversed = "";
    while (!isEmpty(stack)) {
        char c = pop(stack);
        reversed += c;
        push(stack2, c); // masukkan juga ke stack kedua untuk ditampilkan
    }

    cout << "\nkondisi stack setelah dibalik:" << endl;
    show(stack2);

    cout << "\nkondisi awal  : " << nim << endl;
    cout << "setelah dibalik: " << reversed << endl;

    return 0;
}
