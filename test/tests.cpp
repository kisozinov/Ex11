// Copyright kisozinov 2021

#include <gtest/gtest.h>
#include <string>
#include "../include/train.h"

TEST(Train, test1) {
    Train tr;
    unsigned was = tr.length();
    tr.addCage(false);
    unsigned now = tr.length();
    unsigned expected = 1;
    unsigned result = now - was;
    EXPECT_EQ(expected, result);
}

TEST(Train, test2) {
    Train tr;
    for (size_t i = 0; i < 10; ++i) {
        tr.addCage(true);
    }
    Cage* pointer = tr.getFirst();
    for (size_t i = 0; i < 10; ++i) {
        pointer = pointer->next;
    }
    Cage* expected = tr.getFirst();
    Cage* result = pointer;
    EXPECT_EQ(expected, result);
}

TEST(Train, test3) {
    Train tr;
    unsigned expected = std::rand() % 1000;
    for (size_t i = 0; i < expected; ++i) {
        tr.addCage(true);
    }
    unsigned result = tr.length();
    EXPECT_EQ(expected, result);
}
