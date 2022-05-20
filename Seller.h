//IT21375514
#include "RegisteredUser"
class Seller :public RegisteredUser
{
	private:
		int noOfAd;
		
	public;
	    Seller();
	    Seller(const char pusername[],const char ppassword[],
		int inUserId,const char inUserName[],const char inUserContact[],
		const char inUserEmail[],int pnoOfAd);
	    void displayPrice();
	    void displaySellerDetails();
	    void calculatePrice(int PnoOfAd,float price);
		void systemLogin();
	    void systemLogout();
	    ~Seller();	
};
