/**
*
*/
#ifndef NORDVPNCONNECTOR_HPP
#define NORDVPNCONNECTOR_HPP

#include <string>
#include <vector>

#define NVPN_API "https://nordvpn.com/api/server"

class NordVPNConnector 
{
public:
    /**
    * Constructor
    */
    NordVPNConnector();
    /**
    * Destructor
    */
    virtual ~NordVPNConnector();

    void getServerList();

private:
    std::vector<Server> servers;
};

#endif