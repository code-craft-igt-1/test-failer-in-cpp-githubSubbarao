#include <gtest/gtest.h>
#include "weatherreport.cpp"

using WeatherSpace::Report;
using WeatherSpace::SensorStub;

TEST(WeatherReportTest, ReportWeather) {
    SensorStub sensor;

    EXPECT_EQ(Report(sensor), "Rainy day");  // Based on the stub values
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

