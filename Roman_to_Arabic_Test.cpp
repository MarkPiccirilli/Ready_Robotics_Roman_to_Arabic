/*********************
 * This file contains automated tesing for the Roman_to_Arabic.cpp program
 * *******************/

#include "Roman_to_Arabic.hpp"
#include <gtest/gtest.h>

TEST(RomanNumeralTest, Romans) {
	EXPECT_EQ (7, Roman_to_Arabic("VII"));
	EXPECT_EQ (1003, Roman_to_Arabic("MIII"));
	EXPECT_EQ (1900, Roman_to_Arabic("MCM"));
	EXPECT_EQ (98, Roman_to_Arabic("XCVIII"));
	EXPECT_EQ (800, Roman_to_Arabic("DCCC"));
}

TEST(RomanNumeralTest, InvalidRomans) {
	ASSERT_EQ (-1, Roman_to_Arabic("IIV"));
	ASSERT_EQ (-1, Roman_to_Arabic("VX"));
	ASSERT_EQ (-1, Roman_to_Arabic("IM"));
	ASSERT_EQ (-1, Roman_to_Arabic("LD"));
}
	

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

}
