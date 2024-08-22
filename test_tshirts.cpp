#include <gtest/gtest.h>
#include "tshirts.cpp"

TEST(TShirtTest, ClassifyTShirt) {
    EXPECT_EQ(classify_tshirt(37), "Small");
    EXPECT_EQ(classify_tshirt(39), "Medium");
    EXPECT_EQ(classify_tshirt(43), "Large");
    // EXPECT_EQ(classify_tshirt(47), "Extra Large");
    // Test case for the missing input value
    EXPECT_EQ(classify_tshirt(42), "Large");
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
