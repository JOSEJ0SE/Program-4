#include <iostream>
#include <limits>
int main() { 
  int month;
  int year;
  int days_in_month;
  bool isleapyear;
 
  
  std::cout<<"--- Days In a Month Calculator ---\n";
  do{
    std::cout<<" Enter a month (1-12): ";
    std::cin>>month;

  if (std::cin.fail() || month < 1 || month > 12)
  {
  std::cout<< "invalid input. Please enter a number between 1 and 12.\n";
    std::cin.clear();
    
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');}
 
else {}
   
  }while (month < 1 || month > 12);


std::cout<< "Enter a year: ";
std::cin>>year;
  while (std::cin.fail() || year < 0) {
    std::cout << "Invalid input. Please enter a positive number for the year.\n";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
std::cin>>year;
  }

isleapyear = false;
  if (year % 100==0){
    if (year % 400==0){
      isleapyear = true;
    }
  }
    else{ 
    if (year % 4==0){
        isleapyear = true;
      }
    }
switch (month)
  {
  
  case 1://january
  case 3://march
  case 5://may
  case 7://july
  case 8://august
  case 10://october
  case 12://december
      days_in_month = 31;
      break;
  case 4://april
  case 6://june
  case 9://september
  case 11://november
      days_in_month = 30;
      break;
  case 2://february
      if (isleapyear)
      {
        days_in_month = 29;
      }
      else
      {
        days_in_month = 28;
      }
      break;
  }
    
      std::cout<<"\n there are "<<days_in_month<<" days\n";
      std::cout<< "------------------------------------\n";
    
      return 0;
    }