#include <iostream>
#include "main.h"

//
// Created by Winton Lim on 11/05/2022.
//

void print(const char *string){
    std::cout << string;
}
void println(const char *string){
    std::cout << string << std::endl;
}

int main(){

    //This is a comment

    /*
        This is a multilined Comment
        std::cout << is like a print() statement in java
        std::cout << sometihng << std::endl; is something like println()
        Also don't nest comments... Its gonna cause errors
    */

    std::cout << "Hello World!: " << std::endl;

    println("My name is: ");
    print("Physics");
    print("Prodigy");
}