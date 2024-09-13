#include <iostream>
#include <string>

struct Address {
    std::string city;        
    std::string street;    
    int housenumber;         
    int apartmentnumber;    
    std::string postalcode;  
};


void printAddress(const Address& address) {
    std::cout << "Город: " << address.city << std::endl;

    std::cout << "Улица: " << address.street << std::endl;
    std::cout << "Номер дома: " << address.housenumber << std::endl;
    std::cout << "Номер квартиры: " << address.apartmentnumber << std::endl;
    std::cout << "Индекс: " << address.postalcode << std::endl;


    std::cout << std::endl; 
}

int main() {
    setlocale(LC_ALL, "Russian");
    Address address1 = { "Москва", "Арбат", 12, 8, "123456" };
    Address address2 = { "Ижевск", "Пушкина", 59, 143, "953769" };
    printAddress(address1);
    printAddress(address2);
    return 0;
}