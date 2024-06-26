#include <iostream>
class calculator
{
public:
    
    void Add(auto a, auto b)
    {
        int sum = a + b;
        std::cout << "Your Sum is : " << sum << std::endl;
    }
    void Sub(auto a, auto b)
    {
        if (a > b)
        {
            int diff =  a - b;
            std::cout << "Your Difference is : " <<diff << std::endl;
        }
        else
        {
         int  diff = b - a;
            std::cout << "Your Difference is : " << diff << std::endl;
        }
    }
    void Mut(auto a, auto b)
    {
        int mut = a * b;
        std::cout << "Your Product is : " << mut << std::endl;
    }
    void Div(auto a, auto b)
    {
        int div = a / b;
        std::cout << "Your Div is : " <<  div << std::endl;
    }
      };


int main()
{
    calculator cal;
        int num1, num2, operat;
    std::cout << "*******Welcome to Great Calculator for Two Numbers *********\n";
    std::cout << "Enter Number For The Following Operations\n";
    std::cout << "0 - Addition\n";
    std::cout << "1 - Subtraction \n";
    std::cout << "2 - Mutiplication\n";
    std::cout << "3 - Division\n";
    std::cout << "(4 & above ) - To Exit\n";
    std::cout << "Enter Two Numbers" << std::endl;
    std::cout << "Enter Number [1] : ";
    std::cin >> num1;
    std::cout << "\nEnter Number [2] : ";
    std::cin >> num1;
    std::cout << "\nEnter Operation : ";
    std::cin >> operat;
    if (operat < 4 && operat >= 0)
    {
  switch(operat){
    case 0:{ 
      cal.Add(num1, num2);
    }
    break;
    case 1:
    {
        cal.Sub(num1, num2);
    }
    break;
    case 2:
    {
        cal.Mut(num1, num2);
    }    
    break;
    case 3:
    {
        cal.Div(num1, num2);
    }
    break;
    default:
    std::cout << "Invalid operation!";
        break;
    }
}

}