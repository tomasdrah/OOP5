#include <iostream>
#include <string>
#include <list>
#include "Bank.h"

using namespace std;
int main()
{
	Bank* banka = new Bank(250, 250);

	for (size_t i = 0; i < 30; i++)
	{
		string karel = "Karel"; char buffer[8];
		sprintf_s(buffer, "%d", i); auto name = karel.append(buffer);

		banka->CreateClient(i, name);
	}
	for (size_t i = 0; i < 30;)
	{
		banka->CreateAccount(i, banka->GetClient(i));
		i++;
		banka->CreateAccount(i, banka->GetClient(i), banka->GetClient(i));
		i++;
	}
	for (size_t i = 0; i < 30;)
	{
		//print clients and account owners		
		auto test1 = (PartnerAccount*)(banka->GetAccount(i));
		auto test2 = banka->GetAccount(i);
		printf("Client:%s\n Owner:%s\n", banka->GetClient(i)->GetName().c_str(), banka->GetAccount(i)->GetOwner()->GetName().c_str());
		i++;
		printf("\n");
		auto test3 = (PartnerAccount*)(banka->GetAccount(i));
		auto test4 = banka->GetAccount(i);
		printf("Client:%s\nOwner:%s\nPartner:%s\n", banka->GetClient(i)->GetName().c_str(), ((PartnerAccount*)(banka->GetAccount(i)))->GetOwner->GetName().c_str(), ((PartnerAccount*)(banka->GetAccount(i)))->GetPartner()->GetName().c_str());
		i++;
		printf("\n");
		printf("\n");
	}


	int id_karla = 30;
	banka->CreateClient(id_karla, "Karel");
	banka->CreateAccount(id_karla, banka->GetClient(30), 0.1);
	banka->GetAccount(id_karla)->Deposit(2000);
	banka->AddInterest();
	printf("Karel vlozil 2000 a s urokem 10%%  ma ted %.3f", banka->GetAccount(id_karla)->GetBalance());


	return 0;
}
