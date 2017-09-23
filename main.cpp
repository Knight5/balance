//
//  main.cpp
//  event1
//
//  Created by Scott Kelly on 9/1/15.
//  Copyright (c) 2015 Scott Kelly. All rights reserved.
//

//include direct editing : friday sep22, 2017
#include <list>
// lists of edits

#include <iostream>
using namespace std;


#define YUP 25
//int argc, const char * argv[]
//std::cout << "Another World\n";

int main() {
    char cha;
    int num1;
    int num2;
    cout << "Begin";
    cin >> cha;
    cout << cha << "\n";
    cout << "What number1?";
    cin >> num1;
    cout << "What number2?";
    cin >> num2;
    cout << num1 +num2 << "\n";
    cout << num1 %num2 << "\n";
    
    // cin.get();  //program wait; // q to exit
    
    cout << "fin";
    
    //second(){}// mod is the remainder
    return 1;
}
