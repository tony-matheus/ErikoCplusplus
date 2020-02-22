//
//  main.cpp
//  String
//
//  Created by Tony Matheus on 13/02/20.
//  Copyright © 2020 Tony Matheus. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "String.h"
#include "Stack.h"
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

void TestB(){
  cout << "Starting Test B" << endl;
  String testB;
  testB = "Test B";
  
  String testBI;
  testBI = testB;
  cout << "Finish Test B" << endl << endl;
}

void TestC(){
  cout << "Starting Test C" << endl;
  String testC;
  //  testC = "Test C 1 "+"Test C 2 ";
  
  //  String testCI;
  //  testCI = testC;
  cout << "Finish Test C" << endl << endl;
}


void TestD(){
  cout << "Starting Test D" << endl;
  String testD = "Test D before ";
    testD += "After";
  cout << testD << endl;
//  
//  String testDI = "Test D 2 before";
//  testDI += testD;
  cout << testDI << endl;
  
  cout << "Finish Test D" << endl << endl;
}

void testE(){
  cout << "Starting Test E" << endl;
  String size = "tamanho igual a 18";
  cout << size.length() << endl;
  cout << "Finish Test E" << endl << endl;
}

void testF() {
  cout << "Starting Test F" << endl;
  String testF = "Testando";
  
//  int index = testF.indexOf('T'); // not implemented
  cout << "Finish Test F" << endl << endl;
  
//  cout << index << endl;
}

void testG() {
  cout << "Starting Test G" << endl;
  String uppercase = "grande";
//  uppercase.upcase(0, uppercase.length() - 1);
  cout << uppercase << endl;
  cout << "Finish Test G" << endl << endl;
}

void testH() {
  cout << "Starting Test H" << endl;
  String lowercase = "PEQUENO";
//  lowercase.downcase(0, lowercase.length() - 1);
  cout << lowercase << endl;
  cout << "Finish Test H" << endl << endl;
}

void testI() {
  // todo test i
}

void testJ() {
  String testJ = "Primeiro é P";
//  char first = testJ[0];
//  cout << first << " P " << endl;
}

void testK(){
  cout << "item K started" << endl;
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
  cout << "item K completed" << endl;

}

int main(int argc, const char * argv[]) {
//  String a = "dashduh";
//  String b;
//  cout << &a << endl;
//  cout << &b << endl;
//  b = a;
//
//  cout << &a << endl;
//  cout << &b << endl;
  testA();
  String a;
  a = "nothing";
  cout << a << "nothing" << endl;
  String b = "meu pau te arriba";
  cout << b <<endl;
  String c = b;
  cout << c <<endl;
  cout << "item A completed" << endl;

  a = "meu piru de asa";
  a += "b";

  testK();
}
