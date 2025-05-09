#include <iostream>
#include <string.h>
using namespace std;

class Node{
    public : 
        int noMhs;
        Node *next;   


};
class SingleLinkedList{
    Node *START;
public : 
    SingleLinkedList(){
        START = NULL;
    }
    void addNode(){
        int nim;
        cout << "\nMasukkan Nomor Mahasiswa : ";
        cin >> nim;

    }
};