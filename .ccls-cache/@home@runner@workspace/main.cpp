#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
int main() { 

  const double Pi= 3.14159;
  int choice;
  double radius,lenght,width,base,height,area;

  std::cout << "-----Geometry Calculator---------\n";
  do{ 
    std::cout<<"\nGeometry Calculator\n";
    std::cout<<"1. Calculate the Area of a Circle\n";
    std::cout<<"2. Calculate the Area of a Rectangle\n";
    std::cout<<"3. Calculate the Area of a Triangle\n";
    std::cout<<"4. Quit\n";

    std::cout<<"Enter your choice (1-4): ";
    
    std::cin>>choice;
    if (std::cin.fail() || choice < 1 || choice > 4){
      std::cout << " Invalid choice. please enter a number between 1 and 4.\n";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }else{

      switch (choice){
        case 1: // calculating the area of a circle

        do{
          std::cout<<"Enter the radius of the circle: ";
          std::cin>>radius;
          if (std::cin.fail() || radius < 0){
            std::cout << "Invalid input. Please enter a positive number!!\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }while (radius <0);

        area = Pi*radius*radius;
        std::cout<< " The area of the circle is: "<< area << "\n";
        break;
    case 2: //calculate area of the rectangle
      do{
        std::cout<<"Enter the length of the rectangle: ";
        std::cin>>lenght;
        if (std::cin.fail() || lenght < 0){
          std::cout<< "Invalid input. Please enter a positive number!!\n";
          std::cin.clear();
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        }while (lenght < 0);

        do {
          std::cout<<"Enter the width of the rectangle: ";
          std::cin>>width;
          if (std::cin.fail() || width < 0) {
            std::cout<< "Invalid input. Width cannot be negative. Please enter a positive number!!\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
          }while (width < 0);
          area = lenght*width;
        std::cout<< " The area of the rectangel is: "<< area << "\n";
        break;

        case 3: //calculate area of the triangle

        do{
          std::cout<< "Enter the base of the triangle:  ";
          std::cin>>base;
          if (std::cin.fail() || base < 0){
            std::cout<< "Invalid input. base cannot be a negative number. Please enter a positive number!!\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
          }while (base < 0);
          do{
            std::cout<< "Enter the height of the triangle:  ";
            std::cin>>height;
            if (std::cin.fail() || height < 0){
              std::cout<< "Invalid input. height cannot be a negative number. Please enter a positive number!!\n";
              std::cin.clear();
              std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
              }
            }while (height < 0);
            
        area= base*height* 0.5;
        std::cout<< " The area of the triangle is: "<< area << "\n";
        break;

      case 4: // quit option
        std::cout<< "Exiting the Geometry Calculator. Goodbye!\n";
        break;

      }
    }
  } while(choice != 4);
  return 0;
}