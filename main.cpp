#include <iostream>
#include <string>
#include "main.h"

//
// Created by Winton Lim on 11/05/2022.
//

void print(const char *string){
    std::cout << string;
}
//return_type functionname()
void println(const char *string){
    std::cout << string << std::endl;
}

int addNumbers(int first_num, int second_num){
    int result = first_num + second_num;
    return result;
}

int main(){
    std::string full_name;
    int firstNum;
    int secondNum;

    //This is a comment

    /*
        This is a multilined Comment
        std::cout << is like a print() statement in java
        std::cout << sometihng << std::endl; is something like println()
        Also don't nest comments... Its gonna cause errors

        20/06/2022 I learnt that there is std::cout std::cin for input from terminal
        std::cerr prints errors to console
        std::clog prints log messages to console.

        21/06/2022 (3:45:08) I learnt that there is BRACED VARIABLE INITIALISATION?!
        int firstnum {10}; initialises the var firstnum to 10
        int firstnum (10); also does the same as
        int firstnum = 10;

        int firstnum {}; initialises the value to 0
        int firstnum; initialises the value to some garbage value.

        int firstnum{1.1}; causes a compile error.
        int firstnum(1.1); causes a runtime error where it rounds the number down to the number before the decimal. Could be used to round down.
        int firstnum = 1.1; causes a runtime error where it rounds the number down to the number before the decimal. COuld be used to round down.

        signed int value{number} signed int value{-number} both are okay to use for negative and positive expressions
        unsigned isn't good. It would only work with positive numbers.

        When using Float data type, make sure the number has a 'f' at the end so it knows its a float. Otherwise it'll default to double.
        Long double is 'L'

        boolean, char.
        char value = 65; when printed will result in the letter A. performing a static_cast<int>(value) would make it print the number 65.

        Auto lets the compiler deduce the type itself.

    */

    std::cout << "Hello Testing World!: " << std::endl;

    std::cout << "So what is your name? " << std::endl;
    //getline doesn't cause errors with the c++ program when you get inputs with spaces. I think its safer to use this.
    std::getline(std::cin,full_name);
    std::cout << "Hello " << full_name <<std::endl;

    std::cout << "Whats the first number? " << std::endl;
    std::cin >> firstNum;
    std::cout << "Whats the second number? " << std::endl;
    std::cin >> secondNum;
    std::cout << "The sum of both numbers is " << addNumbers(firstNum,secondNum) << std::endl;

    std::cerr << "Error: You done goofed" << std::endl;
    std::clog << "Log Message: You got this! Learn all you can!" << std::endl;

    println("My name is: ");
    print("Physics");
    print("Prodigy");
}
