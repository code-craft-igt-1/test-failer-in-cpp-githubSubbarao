#include <gtest/gtest.h>
#include "misaligned.cpp"  // Include the implementation file

// Function to capture the output of print_color_map
std::vector<std::string> capture_print_color_map_output() {
    std::vector<std::string> output;
    std::stringstream buffer;
    std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());

    print_color_map();

    std::cout.rdbuf(old);
    std::string line;
    while (std::getline(buffer, line)) {
        output.push_back(line);
    }

    return output;
}

TEST(ColorMapTest, PrintColorMap) {
    std::vector<std::string> expected_output = {
        "0 | White",
        "1 | Red",
        "2 | Black",
        "3 | Yellow",
        "4 | Violet"
    };
    EXPECT_EQ(capture_print_color_map_output(), expected_output);  // This should fail
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}