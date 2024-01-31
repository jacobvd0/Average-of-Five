#include <iostream>

int main()
{
    float num1, num2, num3, num4, num5;
    float avg;
    
    avg = num1 = num2 = num3 = num4 = num5 = 0.0f;
    

    std::cout << "Average of Five)" << std::endl;
    
    std::cout << "Input number 1: ";
    std::cin >> num1;
    std::cout << "\n";
    
    std::cout << "Input number 2: ";
    std::cin >> num2;
    std::cout << "\n";
    
    std::cout << "Input number 3: ";
    std::cin >> num3;
    std::cout << "\n";
    
    std::cout << "Input number 4: ";
    std::cin >> num4;
    std::cout << "\n";
    
    std::cout << "Input number 5: ";
    std::cin >> num5;
    std::cout << "\n";
    
    avg = (num1+num2+num3+num4+num5) / 5;
    
    
    
    
    std::cout << "Average of " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << ", " << num5 << std::endl;
    std::cout << "Average: " << avg << std::endl;
}
