// Copyright Sozinov Kirill

#ifndef INCLUDE_TRAIN_H
#define INCLUDE_TRAIN_H

class Cage
{
    bool light; // Свет (вкл/выкл)
public:
    Cage* next; // следующий вагон
    Cage* prev; // предыдущий вагон
    Cage() : light(false), next(nullptr), prev(nullptr) {}
    void on() { light = true; }
    void off() { light = false; }
    bool get() const { return light; }
};

class Train
{
    Cage* first; // указатель на первый вагон
    Cage* last;  // указатель на последний вагон
};

#endif // INCLUDE_TRAIN_H