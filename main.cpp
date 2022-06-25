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

        22/06/2022
        You can increment a value by using ++ and decrement with -- prefix and suffix of these positions matter.
        -------------------------------
        Compounding math functions
        += -= *= /= %=
        ------------------------------------------------------------------------------------------------------------------
        23/06/2022
        Relational operators
        num < num2
        num <= num2 (< =)
        num > num2
        num >= num2 (> =)
        num == num2 (= =)
        num != num2 (! =)
        -------------------------------
        Logical Operators:
        And ---> Only returns true if all conditions are met.
        Or ---> Only returns true if at least 1 of the conditions are met.
        Not ---> Returns the opposite value of variable.
        -------------------------------
        Output formatting:
        #include <ios> && <iomanip>
        \n :  new line
        std::flush
        std::setw() makes columns of a certain width
        std::right is right justified
        std::internal is internal justified which looks at the values and becomes left justified if its negative or right if positive.
        std::setfill(-) fills up any whitespace with '-'
        std::boolalpha forces any boolean output to the terminal to show up as either true or false instead of 0 1 std::noboolalpha does the opp
        std::showpos shows the positive character infront of positive values. std::noshowpos does the opposite.
        std::dec, std::oct, std::hex are all different numbering systems to use.
        std::uppercase changes all lower case to upper case
        std::setprecision(num)
        https://en.cppreference.com/w/cpp/io/manip
        -------------------------------
        limits
        #include <limits>
        std::numeric_limits<numericaldatatype>::min() or std::numeric_limits<numericaldatatype>::max()
        -------------------------------
        maths in c++ https://en.cppreference.com/w/cpp/header/cmath
        #include <cmath>
        std::floor() std::ceil() std::abs() std::cos() std::exp() std::log() std::pow() std::sqrt() std::round std::sin() std::tan()
        When doing math operations on weird char or ints with smaller bytes, you'll need to know that math operations will make it 4 bytes first before performing the math.
        -------------------------------
        Conditional programing:
        if(){

        }
        else if(){

        }
        else{

        }

        switch(must be an int or enum){
            case result:{}
            break;
            case result:{}
            break;
            default:{}
        }

        ternary operators:
        max = (a>b)?a:b;
        7:54:04
        ------------------------------------------------------------------------------------------------------------------
        25/06/2022 9:49:43
        For loop / Ranged based for loop
        for(size_t i = 0; i<10; i++ or i--){
            something to be done.
        }

        While loop
        while(condition){
            something to be done.
            i++;
        }

        Do While loop
        do{
            something to be done.
        }while(condition);
        -------------------------------
        Arrays:
        type name[number of elements]; // initialises array OR type name[]{values,values....} putting a constant variable infront of type makes it immutable.
        name[index] = value // setting values.

        for (int element : intarray){
            do something with element.
        }

        std::size(array) //returns the size of the array.

        for auto var : array {
            do something with var
        }

        type array [size] {elements less then size}// will result the non filled indexes with null types.
        type array [] {elements with no null pointer} would result in a run time error.


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
