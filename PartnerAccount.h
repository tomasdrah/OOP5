#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Client.h"
using namespace std;

class PartnerAccount :public Account
{
private:
    Client* partner;
public:
    PartnerAccount(int n, Client* c, Client* p);
    PartnerAccount(int n, Client* c, Client* p, double ir);
    Client* GetPartner();

};

