//IT 21375514
#include "Seller.h"

Seller::Seller(){
	noOfAd=0;
}

Seller::Seller(const char pusername[],const char ppassword[],
int inUserId,const char inUserName[],const char inUserContact[],
const char inUserEmail[],int pnoOfAd):
RegisteredUser(pusername,ppassword,inUserId,inUserName,inUserContact,inUserEmail)
{
	noOfAd=pnoOfAd;
}
void Seller:login()
{
	
}
void Seller:displaySellerDetails()
{
	
}
void Seller:displayPrice()
{
	
}
void Seller:calculatePrice(int PnoOfAd,float price)
{
	
}
void Seller:systemLogout()
{
	
}
seller::~Seller(){
	//Destructor
}
