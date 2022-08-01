#include <gtest/gtest.h>

TEST(Test1, test1)
{
	ASSERT_EQ(1, 1);
}

TEST(Test1, test2)
{
	ASSERT_EQ(1, 0);
}


int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
