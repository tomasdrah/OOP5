#include <iostream>
#include <string>
#include <list>
#include "Client.h"
#include "Account.h"
#include "PartnerAccount.h"
using namespace std;

inline PartnerAccount::PartnerAccount(int n, Client* c, Client* p) :Account(n, c)
{
    this->partner = p;
}

inline PartnerAccount::PartnerAccount(int n, Client* c, Client* p, double ir) : Account(n, c, ir)
{
    this->partner = p;
}

inline Client* PartnerAccount::GetPartner()
{
    return this->partner;
}