// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created at March 2022
// This program shows how local and global variables work

#include <iostream>

// global variable
int variableX = 25;

void localVariable() {
    // This shows what happens with local variables

    int variableX = 10;
    int variableY = 30;
    int variableZ = variable_X + variable_Y;
    std::cout << "Local variable_X, variable_Y, variable_Z: " << variableX
    << "+" << variableY << "=" << variableZ << std::endl;
}


void globalVariable() {
    // This shows what happens with global variables

    variableX = variableX + 1;
    int variableY = 30;
    int variableZ = variable_X + variable_Y;
    std::cout << "Global variable_X, variable_Y, variable_Z: " << variableX
    << "+" << variableY << "=" << variableZ << std::endl;
}


int main() {
    // This function shows how local and global variables work

    localVariable(
    globalVariable())
}
