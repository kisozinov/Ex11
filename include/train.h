// Copyright Sozinov Kirill

#ifndef INCLUDE_TRAIN_H
#define INCLUDE_TRAIN_H

class Cage
{
    bool light; // ���� (���/����)
public:
    Cage* next; // ��������� �����
    Cage* prev; // ���������� �����
    Cage() : light(false), next(nullptr), prev(nullptr) {}
    void on() { light = true; }
    void off() { light = false; }
    bool get() const { return light; }
};

class Train
{
    Cage* first; // ��������� �� ������ �����
    Cage* last;  // ��������� �� ��������� �����
};

#endif // INCLUDE_TRAIN_H