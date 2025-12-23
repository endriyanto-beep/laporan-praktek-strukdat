#include <iostream>
#include "graph.h"

using namespace std;

void CreateGraph(Graph &G) {
    G.first = Nil;
}

void InsertNode(Graph &G, infoGraph X) {
    adrNode P = new ElmNode;
    P->info = X;
    P->visited = 0;
    P->firstEdge = Nil;
    P->Next = G.first;
    G.first = P;
}

void ConnectNode(adrNode &N1, adrNode &N2) {
    if (N1 != Nil && N2 != Nil) {
        adrEdge E1 = new ElmEdge;
        E1->Node = N2;
        E1->Next = N1->firstEdge;
        N1->firstEdge = E1;

        adrEdge E2 = new ElmEdge;
        E2->Node = N1;
        E2->Next = N2->firstEdge;
        N2->firstEdge = E2;
    }
}

void PrintInfoGraph(Graph G) {
    adrNode P = G.first;
    while (P != Nil) {
        cout << P->info << " -> ";
        adrEdge E = P->firstEdge;
        if (E == Nil) {
            cout << "(tidak ada koneksi)";
        }
        while (E != Nil) {
            cout << E->Node->info;
            if (E->Next != Nil) cout << ", ";
            E = E->Next;
        }
        cout << endl;
        P = P->Next;
    }
}

adrNode FindNode(Graph G, infoGraph X) {
    adrNode P = G.first;
    while (P != Nil) {
        if (P->info == X) return P;
        P = P->Next;
    }
    return Nil;
}

void ResetVisited(Graph &G) {
    adrNode P = G.first;
    while (P != Nil) {
        P->visited = 0;
        P = P->Next;
    }
}

void PrintDFS(Graph &G, adrNode N) {
    if (N == Nil) return;
    N->visited = 1;
    cout << N->info << " ";
    adrEdge E = N->firstEdge;
    while (E != Nil) {
        if (E->Node->visited == 0) {
            PrintDFS(G, E->Node);
        }
        E = E->Next;
    }
}

void PrintBFS(Graph &G, adrNode N) {
    if (N == Nil) return;
    queue<adrNode> Q;
    Q.push(N);
    while (!Q.empty()) {
        adrNode curr = Q.front();
        Q.pop();
        if (curr->visited == 0) {
            curr->visited = 1;
            cout << curr->info << " ";
            adrEdge E = curr->firstEdge;
            while (E != Nil) {
                if (E->Node->visited == 0) {
                    Q.push(E->Node);
                }
                E = E->Next;
            }
        }
    }
}
