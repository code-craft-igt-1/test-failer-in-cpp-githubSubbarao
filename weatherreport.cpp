#include <string>
#include <iostream>

namespace WeatherSpace {
class IWeatherSensor {
 public:
    virtual double TemperatureInC() const = 0;
    virtual int Precipitation() const = 0;
    virtual int Humidity() const = 0;
    virtual int WindSpeedKMPH() const = 0;
};

class SensorStub : public IWeatherSensor {
 public:
    int Humidity() const override {
        return 72;
    }

    int Precipitation() const override {
        return 70;
    }

    double TemperatureInC() const override {
        return 26;
    }

    int WindSpeedKMPH() const override {
        return 52;
    }
};

std::string Report(const IWeatherSensor& sensor) {
    int humidity = sensor.Humidity();
    int precipitation = sensor.Precipitation();
    double temperature = sensor.TemperatureInC();
    int windSpeed = sensor.WindSpeedKMPH();

    std::string report = "Sunny day";

    if (temperature > 25) {
        if (precipitation >= 20 && precipitation < 60) {
            report = "Partly cloudy";
        } else if (precipitation >= 60) {
            report = "Rainy day";
        }
    } else if (temperature <= 25) {
        if (humidity > 70) {
            report = "Humid day";
        } else if (windSpeed > 50) {
            report = "Windy day";
        }
    }

    return report;
}
}  // namespace WeatherSpace