#include "Country.hpp"

Country::Country(std::string _name, std::pair<float, float> _coords, std::string _flag):
name(_name), coords(_coords), flag(_flag)
{}

Country::Country(std::string _name, float latitude, float longitude, std::string _flag):
name(_name), flag(_flag)
{
    this->coords = std::pair<float, float>(latitude, longitude);
}

Country::~Country()
{}