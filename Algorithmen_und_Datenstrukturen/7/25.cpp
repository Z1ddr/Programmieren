#include <iostream>

typedef int item_type; // Platzhalter für den Datentyp

class Tabelle {
private:
    struct node {
        item_type data;
        node* next;
        node* prev;
    };
    node* head;     // Anfang der Liste
    node* tail;     // Ende der Liste
    node* iterator; // Aktueller Record

public:
    // Kreiert leere Tabelle
    Tabelle() : head(nullptr), tail(nullptr), iterator(nullptr) {}

    // Gibt Speicherbereich frei
    ~Tabelle() {
        while (head) {
            node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Erster Record wird zum aktuellen Record
    bool first() {
        if (!head) return false;
        iterator = head;
        return true;
    }

    // Letzter Record wird zum aktuellen Record
    bool last() {
        if (!tail) return false;
        iterator = tail;
        return true;
    }

    // Nächster Record wird aktuell
    bool next() {
        if (!iterator || !iterator->next) return false;
        iterator = iterator->next;
        return true;
    }

    // Vorheriger Record wird aktuell
    bool previous() {
        if (!iterator || !iterator->prev) return false;
        iterator = iterator->prev;
        return true;
    }

    // Fügt neuen Record vor dem aktuellen Record ein
    bool insert(item_type r) {
        node* newNode = new node{r, nullptr, nullptr};
        if (!head) { // Leere Tabelle
            head = tail = iterator = newNode;
            return true;
        }
        if (!iterator) return false;

        newNode->next = iterator;
        newNode->prev = iterator->prev;
        if (iterator->prev) iterator->prev->next = newNode;
        else head = newNode; // Falls am Anfang eingefügt wird
        iterator->prev = newNode;
        return true;
    }

    // Fügt neuen Record am Ende ein
    bool append(item_type r) {
        node* newNode = new node{r, nullptr, tail};
        if (tail) tail->next = newNode;
        else head = newNode;
        tail = newNode;
        if (!iterator) iterator = newNode;
        return true;
    }

    // Löscht aktuellen Record
    bool delete_node() {
        if (!iterator) return false;
        node* toDelete = iterator;

        if (toDelete->prev) toDelete->prev->next = toDelete->next;
        else head = toDelete->next;

        if (toDelete->next) toDelete->next->prev = toDelete->prev;
        else tail = toDelete->prev;

        iterator = (toDelete->next) ? toDelete->next : toDelete->prev;
        delete toDelete;
        return true;
    }

    // Liefert aktuellen Record
    bool get_node(item_type &r) {
        if (!iterator) return false;
        r = iterator->data;
        return true;
    }

    // Ersetzt aktuellen Record
    bool set_node(item_type &r) {
        if (!iterator) return false;
        iterator->data = r;
        return true;
    }
};