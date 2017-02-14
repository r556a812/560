/**
*	@file : main.cpp
*	@author :  Richard Aviles
*	@date : 2016.08.26
*	Purpose:
*/

#include <iostream>
#include "Node.h"

int main () //add in a function for invalid input on the choice commands
{
    int choice = 0;

    do
    {
        std::cout << "Please choose one of the following commands:\n\n"
                     "1- insert\n\n"
                     "2- print\n\n"
                     "3- exit\n\n";
        std::cin >> choice;

    }while (choice != 3);
}

