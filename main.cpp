# include <iostream>

int main() 
{
    double tempf;
    std::cin >> tempf ;
    double tempc = (tempf - 32) / 1.8;
    std::cout << "The temp is " << tempc << " degrees Celcius";
}