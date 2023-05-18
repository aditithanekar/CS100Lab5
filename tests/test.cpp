//#include "googletest/googletest/include/gtest"
#include "../header/rectangle.hpp"
#include "gtest/gtest.h"


TEST(ConstructorSuite, ConstructParameters){
    EXPECT_NO_THROW(Rectangle(2,4));
}

TEST(ConstructorSuite, DefaultConstructor){
    EXPECT_NO_THROW(Rectangle());
}

TEST(ConstructorSuite, ConstructNegativeWidth){
    EXPECT_ANY_THROW(Rectangle(-2,7));
}

TEST(ConstructorSuite, ConstructNegativeHeight){
    EXPECT_ANY_THROW(Rectangle(2,-7));
}

TEST(AreaSuite, PositiveArea){
    Rectangle rect = Rectangle(2,4);
    EXPECT_EQ(rect.area(), 8);
}

TEST(AreaSuite, noArea){
    Rectangle rect = Rectangle(0,0);
    EXPECT_EQ(rect.area(), 0);
}

TEST(AreaSuite, OneZeroArea){
    Rectangle rect = Rectangle(0,1000);
    EXPECT_EQ(rect.area(), 0);
}

TEST(PerimeterSuite, PositivePerimeter){
    Rectangle rect = Rectangle(2,4);
    EXPECT_EQ(rect.perimeter(), 12);
}

TEST(PerimeterSuite, NoPerimeter){
    Rectangle rect = Rectangle(0,0);
    EXPECT_EQ(rect.perimeter(), 0);
}

TEST(PerimeterSuite, OneZeroPerimeter){
    Rectangle rect = Rectangle(0,75);
    EXPECT_EQ(rect.perimeter(), 150);
}