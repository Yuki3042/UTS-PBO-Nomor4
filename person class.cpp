#include <iostream>
#include <string>
using namespace std;

class PersonData
{
	private:
	string name, address;
	int telephoneNumber;

public:
	void setName(string name){
  		this->name = name;
	}
	
	string getName(){
  		return name;
	}
	
	void setAddress(string address){
  		this->address = address;
	}
	
	string getAddress(){
  		return address;
	}
	
	void setTelePhoneNumber(int telephoneNumber){
		this->telephoneNumber = telephoneNumber;
	}
	
	int getTelePhoneNumber(){
		return telephoneNumber;
	}

};

class CustomerData : public PersonData
{
private:
int customerNumber;
bool mailingList;

public:
	void setCustomerNumber(int customerNumber){
		this->customerNumber = customerNumber;
	}
	int getCustomerNumber(){
		return customerNumber;
	}
	void setMailingList(bool mailingList){
		this->mailingList = mailingList;
	}
	int getMailingList(){
		return mailingList;
	}
};

int main() {

CustomerData cust;

cust.setCustomerNumber(2121);
cust.setMailingList(true);
cust.setName("Budi");
cust.setAddress("B20,Jonggol");
cust.setTelePhoneNumber(2255886);

cout<<"Customer Number : "<< cust.getCustomerNumber()<<endl;
cout<<"\nName : "<< cust.getName()<<endl;
cout<<"\nAddress : "<<cust.getAddress()<<endl; 
cout<<"\nPhone : "<<cust.getTelePhoneNumber()<<endl;
cout<<"\nMailing List: "<<cust.getMailingList()<<endl;
return 0;
}
