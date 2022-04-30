#include "Seller.h"


Seller::Seller(void)
{
    this->ID = 0;
    this->FirstName = "";
    this->SecondName = "";
    this->Phone = "";
    this->Email = "";
    this->Password = "";
    this->Gender = "";
    this->Address = "";
    this->Description = "";
    this->Wallet = 0;
    this->NoOfVoters = 0;
    this->Total_Rate = 0;
    this->Path_photo = "";
    this->ProfileCompleted = 0;
}
Seller::~Seller(void) {}

Seller::Seller(int Id, string FirstName, string SecondName, string Phone, string Email, string Password, string Gender, string Address,
               string Description, float Wallet, int NoOfVoters, float Total_Rate, string photo, bool ProfileCompleted)
{
    this->ID = Id;
    this->FirstName = FirstName;
    this->SecondName = SecondName;
    this->Phone = Phone;
    this->Email = Email;
    this->Password = Password;
    this->Gender = Gender;
    this->Address = Address;
    this->Description = Description;
    this->Wallet = Wallet;
    this->NoOfVoters = NoOfVoters;
    this->Total_Rate = Total_Rate;
    this->Path_photo = photo;
    this->ProfileCompleted = ProfileCompleted;
}

Seller::Seller(int Id, string FirstName, string SecondName, string Phone, string Email, string Password, string Gender)
{
    this->ID = Id;
    this->FirstName = FirstName;
    this->SecondName = SecondName;
    this->Phone = Phone;
    this->Email = Email;
    this->Password = Password;
    this->Gender = Gender;
    this->Address = "";
    this->Description = "";
    this->Wallet = 0;
    this->NoOfVoters = 0;
    this->Total_Rate = 0;
    this->Path_photo = "";
    this->ProfileCompleted = 0;
}

void Seller::CalculateRate(float UserRate)
{
    if (UserRate != -1)
    {
        Total_Rate += UserRate;
        NoOfVoters++;
    }
    FinalRate = Total_Rate / (double)NoOfVoters;
}

void Seller::IsCompletedProfile(){

    if (Path_photo=="" || Description=="" || Address=="")
        ProfileCompleted = false;
    else
        ProfileCompleted = true;
}
