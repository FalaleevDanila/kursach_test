//
// Created by danf2 on 26.12.2019.
//

#include "../include/way.h"

TEST( WAY, way1)//+
{
    std::vector <std::pair<double>> way1;
    Way way(false, false, way1);
    ASSERT_EQ(way.copy.size(), 0);
}

TEST( WAY, way2)//+
{

    std::vector <std::pair<double>> way2;

    Way way(false, false, way1);
    ASSERT_EQ(way.copy.size(), 0);
}

TEST( WAY, way3)//+
{
    ASSERT_EQ(true, true);
}

TEST( WAY, way3)//+
{
ASSERT_EQ(true, true);
}