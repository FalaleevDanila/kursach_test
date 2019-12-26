//
// Created by danf2 on 26.12.2019.
//
#include "../include/fire.h"

TEST( HIT, hit1)//+
{
    Npc one();
    one.hit(10);
    ASSERT_EQ(one.getHelth(), 90);
    ASSERT_EQ(one.getMaxHelth, 100);
    ASSERT_EQ(one.survive(), true);

    one.hit(89);
    ASSERT_EQ(one.getHelth(), 1);
    ASSERT_EQ(one.getMaxHelth, 100);
    ASSERT_EQ(one.survive(), true);

    one.hit(2);
    ASSERT_EQ(one.getHelth(), -1);
    ASSERT_EQ(one.getMaxHelth, 100);
    ASSERT_EQ(one.survive(), false);
}

TEST( HIT, hit1)//+
{
    Npc one();
    one.hit(10);
    ASSERT_EQ(one.getHelth(), 90);
    ASSERT_EQ(one.getMaxHelth, 100);
    ASSERT_EQ(one.survive(), true);

    one.hit(89);
    ASSERT_EQ(one.getHelth(), 1);
    ASSERT_EQ(one.getMaxHelth, 100);
    ASSERT_EQ(one.survive(), true);

    one.hit(1);
    ASSERT_EQ(one.getHelth(), 0);
    ASSERT_EQ(one.getMaxHelth, 100);
    ASSERT_EQ(one.survive(), false);
}