#include <iostream>
using namespace std;

struct Node {
    string ISBN;
    string judul;
    string penulis;
    Node* next ;

};
Node* head = nullptr;

Node* createnode(string ISBN, string judul, string penulis){
    Node* newnode = new Node();
    newnode->ISBN = ISBN;
    newnode->judul = judul;
    newnode->penulis = penulis;
    newnode->next = nullptr;
    return newnode;
}

void tambahbuku(string judul, string penulis, string ISBN){
    Node* newnode = new Node();
    if (head == nullptr){
        head = newnode;
    }else{
        Node* temp = head;
        while(temp->next !=nullptr ){
            temp = temp->next;
        }
        temp->next = newnode;
    }
    cout << "buku" << judul << "penulis" << penulis << "nomor" << ISBN

}
