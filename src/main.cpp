#include <iostream>
#include "Country.hpp"
#include "HttpWrapper.h"

int main(int argc, char **argv) {
    Country* country = new Country("Colombia", 4.4, 72, "CO");
    std::cout << "Hello, world from " << country->getName() << std::endl;
    delete country;
    getHttpReq("http://www.google.com");
    return 0;
}
