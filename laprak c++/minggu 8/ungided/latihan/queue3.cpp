#include <iostream>
#include "queue3.h"
using namespace std;

void CreateQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
    Q.count = 0;
}

bool isEmptyQueue(Queue Q) {
    return (Q.count == 0);
}

bool isFullQueue(Queue Q) {
    return (Q.count == MaxEl);
}

void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        cout << "Queue penuh" << endl;
        return;
    }

    if (isEmptyQueue(Q)) {
        Q.head = 0;
        Q.tail = 0;
        Q.info[Q.tail] = x;
        Q.count = 1;
    } else {
        Q.tail = (Q.tail + 1) % MaxEl;
        Q.info[Q.tail] = x;
        Q.count++;
    }
}

infotype dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong" << endl;
        return -1;
    }

    infotype val = Q.info[Q.head];

    Q.head = (Q.head + 1) % MaxEl;
    Q.count--;

    if (Q.count == 0) {
        Q.head = -1;
        Q.tail = -1;
    }

    return val;
}

void printInfo(Queue Q) {
    if (isEmptyQueue(Q)) {
        cout << "-1 - -1\t| empty queue" << endl;
        return;
    }

    cout << Q.head << " - " << Q.tail << "\t| ";

    int idx = Q.head;
    for (int i = 0; i < Q.count; i++) {
        cout << Q.info[idx] << " ";
        idx = (idx + 1) % MaxEl;
    }
    cout << endl;
}
