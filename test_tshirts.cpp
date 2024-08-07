#include <gtest/gtest.h>
#include "tshirts.cpp"

TEST(TShirtTest, ClassifyTShirt) {
    EXPECT_EQ(classify_tshirt(37), "Small");
    EXPECT_EQ(classify_tshirt(39), "Medium");
    EXPECT_EQ(classify_tshirt(43), "Large");
    EXPECT_EQ(classify_tshirt(47), "Extra Large");
    // Add a test for the missing input value
    EXPECT_EQ(classify_tshirt(42), "Large");  // This should fail
}