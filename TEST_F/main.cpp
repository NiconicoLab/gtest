#include <gtest/gtest.h>

class TestFix : public ::testing::Test
{
protected:
	std::vector<int> data;
	
	virtual void SetUp() {
		printf("TestFix::SetUp\n");
		data.push_back(0);
		data.push_back(1);
		data.push_back(2);
	}
	virtual void TearDown() {
		printf("TestFix::TearDown\n");
	}
};

TEST_F(TestFix, Test1)
{
	data.push_back(3);  // TestFix のメンバーにアクセス可能
	ASSERT_EQ(3, data.size());
}

TEST_F(TestFix, Test2)
{
	ASSERT_EQ(3, data.size());
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
