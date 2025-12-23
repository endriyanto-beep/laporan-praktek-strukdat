#include<iostream>
using namespace std;

struct  Node
{
    int data;
    Node *kiri, *kanan;
};

//fungsi buat node baru
Node *buatNode(int nilai)
{
    Node *baru = new Node();
    baru->data = nilai;
    baru->kiri = baru->kanan = NULL;
    return baru;
}

//1. INSERT (menyisipkan data)
Node *insert(Node *root, int nilai)
{
    if (root == NULL)
        return buatNode(nilai);

    if (nilai < root->data)
        root->kiri = insert(root->kiri, nilai); // masukan kiri jika lebih kecil
    else if (nilai > root->data)
        root->kanan = insert(root->kanan, nilai); //masukan kanan jika lebih besar
    
    return root;
}

//2. SEARCH (mencari)
Node *search(Node *root, int nilai)
{
    if (root == NULL || root->data == nilai)
        return root; //ketemu atau tidak ada

    if (nilai < root ->data)
        return search(root->kiri, nilai); // cari ke kiri
    
    return search(root->kanan, nilai); //cari kanan
}

//helper: cari nilai terkecil(unutuk proses hapus )
Node *nilaiTerkecil(Node *node)
{
    Node *current = node;
    while (current && current->kiri != NULL)
        current = current->kiri;
    return current;
}

//3. DELETE(menghapus Data - diperlukan untuk Update)
Node *hapus(Node *root, int nilai)
{
    if (root == NULL)
        return root;

    if (nilai < root->data)
        root->kiri = hapus(root->kiri, nilai);
    else if ( nilai > root->data)
        root->kanan = hapus(root->kanan, nilai);
    else
    {
        // jika data ketemu
        if(root->kiri == NULL)
        {
            Node *temp = root->kanan;
            delete root;
            return temp;
        }
        else if(root->kanan == NULL)
        {
            Node *temp = root->kiri;
            delete root;
            return temp;
        }
        // jika punya 2 anak ;ammbil terkecil dari kanan
        Node *temp = nilaiTerkecil(root->kanan);
        root->data = temp->data;
        root->kanan = hapus(root->kanan, temp->data);
    }
    return root;
}

//4. UPDATE (ubah data)
Node *update(Node *root, int lama, int baru)
{
    if ( search(root, lama) != NULL)
    {
        root = hapus(root, lama); // hapus yang lama
        root = insert(root, baru); // masukkan yang baru
        cout << "data " << lama << " diupdate menjadi " << baru << endl;
    }
    else
    {
        cout << "data " << lama << " tidak ditemukan! " << endl;
    }
    return root;

}
// 5. TRAVERSAL (Menampilkan Data)
void preOrder(Node *root)
{// akar -> kiri -> kanan
    if (root != NULL)
    {
        cout << root->data << " ";
        preOrder(root->kiri);
        preOrder(root->kanan);
    }

}

void inOrder(Node *root)
{// kiri-> akar -> kanan
    if (root != NULL)
    {
        inOrder(root->kiri);
        cout << root->data << " ";
        inOrder(root->kanan);
    }

}

void postOrder(Node *root)
{// kiri -> kanan -> akar
    if (root != NULL)
    {
        postOrder(root->kiri);
        postOrder(root->kanan);
        cout << root->data << " ";
    }

}

int main ()
{
    Node *root = NULL;

    cout << "=== 1. INSERT DATA ===" << endl;
    root = insert(root, 10);
    insert(root, 5);
    insert(root, 20);
    insert(root, 3);
    insert(root, 7);
    insert(root, 15);
    insert(root, 25);
    cout << "Data berhasil dimasukan,\n" << endl;

    cout << "=== 2. TAMPILKAN TREE (TRAVERSAL) ===" << endl;
    cout << "preOreder   : ";
    preOrder(root);
    cout << endl;
    cout << "inOreder    : ";
    inOrder(root);
    cout << endl;
    cout << "postOreder  : ";
    postOrder(root);
    cout << "\n" << endl;

    cout << "=== 3. TEST SEARCH ===" << endl;
    int cari1 = 7, cari2 = 99;
    cout << "cari " << cari1 << ": " << (search(root, cari1) ? "ketemu" : "Tidak ada") << endl;
    cout << "cari " << cari2 << ": " << (search(root, cari2) ? "ketemu" : "Tidak ada") << endl;
    cout << endl;

    cout << "=== 4. TEST UPDATE ===" << endl;
    // mengubah angka 5 menjadi 8
    root = update(root, 5, 8);
    cout << "Hasil InOrder setelah Update: ";
    cout << endl;
    cout << endl;

    cout << "PreOrder  : ";
    preOrder(root);
    cout << endl;
    cout << "InOrder   : ";
    inOrder(root);
    cout << endl;
    cout << "PostOrder : ";
    postOrder(root);
    cout << "\n" << endl;

    cout << "=== 5. TEST DELETE ===" << endl;
    // Menghapus angka 20 (Node yang punya anak)
    cout << "Menghapus angka 20..." << endl;
    root = hapus(root, 20);

    cout << "PreOrder  : ";
    preOrder(root);
    cout << endl;
    cout << "InOrder   : ";
    inOrder(root);
    cout << endl;
    cout << "PostOrder : ";
    postOrder(root);
    cout << "\n" << endl;

    return 0;
}
         