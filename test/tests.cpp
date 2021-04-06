// Copyright kisozinov 2021

#include <gtest/gtest.h>
#include <string>
#include "../include/train.h"

TEST(train, test1) {
    Train train;
    for (int i = 0; i < 100; ++i) {
        train.addCage();
    }
    EXPECT_EQ(100, train.length());
}

TEST(train, test2) {
    Train train;
    for (int i = 0; i < 1; ++i) {
        train.addCage();
    }
    EXPECT_EQ(1, train.length());
}

TEST(train, test3) {
    Cage* cage = new Cage();
    cage->on();
    EXPECT_EQ(true, carriage.get());
}
