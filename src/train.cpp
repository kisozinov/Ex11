// Copyright kisozinov 2021

#include "train.h"

Cage::~Cage() {
    delete this;
}

void Train::addCage(bool light) {
    Cage* newCage = new Cage();
    newCage->setLight(light);
    if (!first) {
        first = newCage;
        last = newCage;
        newCage->next = newCage;
        newCage->prev = newCage;
        return;
    }
    last->next = newCage;
    first->prev = newCage;
    newCage->prev = last;
    newCage->next = first;
    last = newCage;
}

size_t Train::length() {
    first->off();
    Cage* ptr = first;
    size_t i = 0;
    while (true) {
        ptr = ptr->next;
        ++i;
        if (ptr->get() == false) {
            ptr->on();
            if (first->get() == true)
                return i;
        }
    }
}

void Train::printInfo() {
    Cage* ptr = first;
    size_t i = 0;
    while (true) {
        std::cout << "Cage #" << i << ", light: " << ptr->get() << std::endl;
        ptr = ptr->next;
        ++i;
        if (ptr == first)
            break;
    }
    std::cout << std::endl;
}
