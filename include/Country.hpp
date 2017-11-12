#ifndef COUNTRY_HPP
#define COUNTRY_HPP

#include <string>
#include <utility>

class Country 
{
private:
    Country();
public:
    Country(std::string _name, std::pair<float, float> _coords, std::string flag);
    Country(std::string _name, float latitude, float longitude, std::string flag);
    virtual ~Country();

    /**
    * 
    */
    inline std::string getName()
    {
        return this->name;
    }
    /**
    *
    */
    inline std::string getFlag()
    {
        return this->flag;
    }
    /**
    *
    */
    inline std::pair<float, float> getCoords() 
    {
        return this->coords;
    }





private:
    std::string name;
    std::pair<float, float> coords;
    std::string flag;
};

#endif