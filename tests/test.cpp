#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(ConstructorTest, DefaultConstructorWidth){
	Rectangle* test = new Rectangle(0, 0);
	EXPECT_EQ(test->get-width(), 0);
}

TEST(ConstructorTest, DefaultConstructorHeight){
	Rectangle* test = new Rectangle(0, 0);
	EXPECT_EQ(test->get-height(), 0);
}
				
TEST(ConstructorTest, ParameterConstructorWidth){
	Rectangle* test = new Rectangle(2, 3);
	EXPECT_EQ(test->get-width(), 2);
}

TEST(ConstructorTest, ParameterConstructorHeight){
	Rectangle* test = new Rectangle(2, 3);
	EXPECT_EQ(test->get-height(), 3);
}

TEST(AreaTest, TwoPositiveNum){
	Rectangle* test = new Rectangle(2, 3);
	EXPECT_EQ(test->area(), 6);
}

TEST(AreaTest, TwoNegativeNum){
    Rectangle* test = new Rectangle(-1, -1);
    EXPECT_EQ(test->area(), 0);
}

TEST(AreaTest, OneNegativeNum){
	Rectangle* test = new Rectangle(5, -1);
	EXPECT_EQ(test->area(), 0);
}

TEST(AreaTest, Zeros){
	Rectangle* test = new Rectangle(0, 0);
	EXPECT_EQ(test->area(), 0);
}

TEST(PerimeterTest, TwoPositiveNum){
	Rectangle* test = new Rectangle(2, 3);
	EXPECT_EQ(test->perimeter(), 10);
}

TEST(PerimeterTest, TwoNegativeNum){
	Rectangle* test = new Rectangle(-1, -1);
	EXPECT_EQ(test->perimeter(), 0);
}

TEST(PerimeterTest, OneNegativeNum){
	Rectangle* test = new Rectangle(2, -3);
	EXPECT_EQ(test->perimeter(), 0);
}

TEST(PerimeterTest, Zeros){
	Rectangle* test = new Rectangle(0, 0);
	EXPECT_EQ(test->perimeter(), 0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

