#include <iostream>

double calculate(double num1, double num2, char op){
    switch (op) {
            case '+':
                return num1 + num2;
            case '-':
                return num1 - num2;
            case '*':
                return num1 * num2;
            case '/':
                if (num2 != 0) {
                    return num1 / num2;
                } else {
                    std::cout << "Error: Division by zero!" << std::endl;
                    return 0;
                }
            default:
                std::cout << "Error: Invalid operator!" << std::endl;
                return 0;
    }
}

int main(){
    std::cout << "Hello" << std::endl;
}
