#include <iostream>
#include <cmath>
#include <iomanip>
#include <cmath>
#include <limits>
int main() { 
double packageWeightKg;
double shippingdistance_Miles;
double ratePer500_Miles;
int num500segments_Miles;
double totalCharge;


std::cout<< std::fixed << std::setprecision(2);
  std::cout<< "----- Fast Freight Shipping Calculator -----\n";


do{
    std::cout<< "Enter the weight of the package (kg): ";
    std::cin>> packageWeightKg;

  if (std::cin.fail() || packageWeightKg<=0 || packageWeightKg>20)  {
    std::cout<< " Invalid weight. The weight must be greater than 0. Please enter a number between 0.1 and 20\n";
    std::cin.clear();

std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
else{}
} while(packageWeightKg<=0 || packageWeightKg>20);

  do {
    std::cout<< "Enter the shipping distance (10 - 3,000 miles): ";
    std::cin>> shippingdistance_Miles;
   
    if (std::cin.fail() || shippingdistance_Miles<10 || shippingdistance_Miles>3000){
  std::cout<< " Invalid distance. The distance must be between 10 and 3,000 miles.\n";
  std::cin.clear();
  
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
    else{}

  } while (shippingdistance_Miles<10 || shippingdistance_Miles>3000);


  if (packageWeightKg<=2) 
      {ratePer500_Miles=1.10;}
  else if (packageWeightKg<=6) 
      {ratePer500_Miles=2.20;}
  else if (packageWeightKg<=10)
      {ratePer500_Miles=3.70;}
  else 
      { ratePer500_Miles=4.80;}

  num500segments_Miles = static_cast<int> (std::ceil(shippingdistance_Miles/500.0));

  totalCharge = num500segments_Miles * ratePer500_Miles;
  
  std::cout<< "\n --- Shipping Charges Report ---\n";

  std::cout<< "Weight of package: " << packageWeightKg << " kg\n";
  std::cout<< "Shipping distance: " << shippingdistance_Miles << " miles\n";
  std::cout<< "Rate per 500 miles: " << ratePer500_Miles<< "\n";
  std::cout<< "Number of 500-mile segments: " << num500segments_Miles<< "\n";
  std::cout<< "Total shipping charge: " << totalCharge<< " $ \n";
  std::cout<< "---------------------------------\n";
  return 0;
}
