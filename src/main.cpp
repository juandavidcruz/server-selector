#include <iostream>
#include "Country.hpp"
#include "HttpWrapper.h"

#include "json.hpp"

using json = nlohmann::json;

int main(int argc, char **argv) {
    Country* country = new Country("Colombia", 4.4, 72, "CO");
    std::cout << "Hello, world from " << country->getName() << std::endl;
    delete country;
    std::string page = getHttpReq("https://nordvpn.com/api/server"); //https://nordvpn.com/api/server/stats
    json j = json::parse(page.c_str());
    std::cout << j.dump(4) << std::endl;
    return 0;
}
