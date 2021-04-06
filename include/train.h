// Copyright kisozinov 2021

#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

#include <iostream>
#include <cstdlib>
#include <ctime>

class Cage {
    bool light;
 public:
    Cage* next;
    Cage* prev;
    Cage() : light(false), next(nullptr), prev(nullptr) {}
    ~Cage();
    void on() { light = true; }
    void off() { light = false; }
    bool get() const { return light; }
    void setLight(bool l) { light = l; }
};

class Train {
 private:
    Cage* first;
    Cage* last;
 public:
    Train() : first(nullptr), last(nullptr) {}
    void addCage(bool light);
    void printInfo();
    size_t length();
    Cage* getFirst() const { return first; }
    Cage* getLast() const { return last; }
};

#endif  // INCLUDE_TRAIN_H_
