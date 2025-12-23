#include <iostream>
using namespace std;

struct node {
    int data;
    node* prev;
    node* next;
};

node* head = nullptr;
node* tail = nullptr;

void inserdepan(int data){
    node* newnode = new node();
    newnode->data = data ;
    newnode->prev = nullptr;
    newnode->next = head;

    if (head != nullptr)
        head->prev = newnode;
    else
        tail = newnode;

    head = newnode;
    cout << "data " << data << "berhasil ditambahkan di depan.\n";
 
}

void inserbelakang(int data){
    node* newnode = new node ();
    newnode->data = data;
    newnode->next = nullptr;
    newnode->prev = tail;

    if (tail != nullptr)
        tail->next = newnode;
    else
        head = newnode;

    tail = newnode;
    cout << "data " << data << "berhasil ditambahkan di  belakang.\n";
}

void insertsetelah(int target, int data) {
    node* current = head;
    while ( current != nullptr && current->data != target)
        current = current ->next;

    if  (current== nullptr){
        cout << "data " << target << "tidak ditemukan.\n";
    }

    node* newnode = new node();
    newnode->data = data;
    newnode->next = current->next;
    newnode->prev = current;

    if (current->next != nullptr)
        current->next->prev = newnode;
    else
        tail = newnode;

    current->next = newnode;
    cout << "data " << data << "berhasil disisipkan setelah disisipkan setelah "<< target << ".\n";
}

void hapusdepan (){
    if (head == nullptr){
        cout << "list kosong.\n";
        return;
    }

    node* temp = head;
    head = head->next;

    if (head != nullptr)
        head->prev =nullptr;
    else
        tail = nullptr;

    cout << "data " << temp->data << "dihapus dari depan,\n";
    delete temp;
}

void hapusbelakang(){
    if (tail == nullptr){
        cout << "list kosong.\n";
        return;
    }

    node* temp = tail;
    tail = tail->prev;

    if (tail != nullptr)
        tail->next = nullptr
}