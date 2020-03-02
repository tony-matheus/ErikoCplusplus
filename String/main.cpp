//
//  main.cpp
//  String
//
//  Created by Tony Matheus and Felipe Strozberg on 13/02/20.
//  Copyright © 2020 Tony Matheus / Felipe Strozberg. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "String.h"

using namespace std;
//* Is used to represent a pointer

void testA() {
  cout << "Starting Test A" << endl;
  String itemAI;
  cout << &itemAI << endl;

  String itemAII = 'b';
  cout << itemAII << endl;

  String itemAIIb = "b";
  cout << itemAIIb << endl;

  String itemAIII = "Some Kind of test";
  cout << itemAIII << endl;

  cout << "Finish Test A" << endl << endl;
}

void testB(){
  cout << "Starting Test B" << endl;
  String testB;
  testB = "Test B";

//  cout << testB << endl;

  String testBI = "Test BI";
  testBI = testB;
  cout << testBI << " Test()" << endl;

  cout << "Finish Test B" << endl << endl;
}

void testC(){
  cout << "Starting Test C" << endl;
    String testC;
    testC = "Felipe ";
  
    //String testCI;
    //testCI = "Strozberg";
  
    String completeString;
    //completeString = testC+testCI;
    completeString = testC+"Strozberg";

    cout << completeString << endl;
  cout << "Finish Test C" << endl << endl;
}

void testD(){
  cout << "Starting Test D" << endl;
  String testD = "Tony";
//    testD += "";
  cout << testD << endl;
//
  String testDI = "Felipe";
  testDI += testD;
  cout << testDI << "rsrs" << endl;

  cout << "Finish Test D" << endl << endl;
}

void testE(){
  cout << "Starting Test E" << endl;
  String size = "tamanho igual a 18";
  cout << size << endl;
  cout << size.length() << endl;
  cout << "Finish Test E" << endl << endl;
}

void testF() {
  cout << "Starting Test F" << endl;
  String testF = "Short";

  int index;
  index = testF.indexOf('S');
  cout << index << endl;

  index = testF.indexOf('h');
  cout << index << endl;

  index = testF.indexOf('o');
  cout << index << endl;

  index = testF.indexOf('r');
  cout << index << endl;

  index = testF.indexOf('t');
  cout << index << endl;

  index = testF.indexOf('Z');
  cout << index << endl;
  cout << "Finish Test F" << endl << endl;
}

void testG() {
  cout << "Starting Test G" << endl;
  String uppercase = "grande";
  cout << uppercase << endl;
  uppercase.upcase(0, uppercase.length());
  cout << uppercase << endl;
  cout << "Finish Test G" << endl << endl;
}

void testH() {
  cout << "Starting Test H" << endl;
  String lowercase = "PEQUENO";
  cout << lowercase << endl;
  lowercase.downcase(0, lowercase.length());
  cout << lowercase << endl;
  cout << "Finish Test H" << endl << endl;
}

void testI() {
  cout << "Starting Test I" << endl;
  String togglecase = "InVeRtIdO";
  cout << togglecase << endl;
  togglecase.togglecase(0, togglecase.length());
  cout << togglecase << endl;
  cout << "Finish Test I" << endl << endl;
}

void testJ() {
    cout << "Starting test J" << endl;
  String testJ = "Primeiro é P";
  char first = testJ[0];
  cout << first << " P " << endl;
  cout << "Finish Test J" << endl << endl;
}

void testK(){
  cout << "Starting test K" << endl;
  String test, test2,test3;
  test = "test";
  test2 = "test2";
  test3 = "test";
  bool ab = test != test2;
  cout << ab << endl;
  if( test == test2 ){
    cout << "not working 1";
  }else if(test != test2){
    if(test == test3){
      cout << "working";
    }else{
      cout << "parcially working";
    }
  }else{
    cout << "not working 2";
  }
  cout << endl;
  char char1 = 'b', char2 = 'a';
  String string1 = "b", string2 = "a";
  if(char1 > char2 && string1 > string2){
    cout << "working" << endl;
  }else{
    cout << "not working" << endl;
  }


  char char3 = 'a',char4 = 'b';
  String string3 = "a", string4 = "b";
  if(char3 < char4 && string3 < string4){
    cout << "working" << endl;
  }else{
    cout << "not working" << endl;
  }

  char char5 = 'a', char6 = 'a';
  String string5 = "a", string6 = "a";
  if(char5 >= char6 && string5 >= string6){
    cout << "working" << endl;
  }else{
    cout << "not working" << endl;
  }

  char char7 = 'b', char8 = 'b';
  String string7 = "b", string8 = "b";
  if(char7 <= char8 && string7 <= string8 && string7 <= "d" && char7 <= 'a'){
    cout << "working" << endl;
  }else{
    cout << "not working" << endl;
  }

  cout << "Finish Test K" << endl << endl;
}

int main(int argc, const char * argv[]) {
  testA();
  testB();
  testC();
  testD();
  testE();
  testF();
  testG();
  testH();
  testI();
  testJ();
  testK();


}
