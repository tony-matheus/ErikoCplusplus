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

int testA() {
  cout << "Starting Test A" << endl;
  String itemAI;
  cout << &itemAI << endl;
  String itemAII = 'b';
  cout << itemAII << endl;

  if( itemAII != "b"){
    cout << "Not Working" << endl;
    return 0;
  }
  
  String itemAIIb = "b";
  cout << itemAIIb << endl;

  
  if( itemAIIb != "b"){
    cout << "Not Working" << endl;
    return 0;
  }
  String itemAIII = "Some Kind of test";
  cout << itemAIII << endl;

  
  if( itemAIII != "Some Kind of test"){
    cout << "Not Working" << endl;
    return 0;
  }
  cout << "Finish Test A" << endl << endl;
  return 1;
}

int testB(){
  cout << "Starting Test B" << endl;
  String testB;
  String test1 = "Test B", test2 = "Test BI";
  testB = "Test B";
  
  String testBI = "Test BI";
  if(testB < testBI){
    cout << testBI <<"sei la" << endl;
  }
  testBI = testB;
  
  if(testB == testBI){
    cout <<" Works!!" << endl;
    return 0;
  }

  cout << testBI << " Test()" << endl;

  cout << "Finish Test B" << endl << endl;
  return 1;
}

int testC(){
  cout << "Starting Test C" << endl;
    String testC;
    testC = "Felipe ";
    
    //String testCI;
    //testCI = "Strozberg";
  
    String completeString;
    //completeString = testC+testCI;
    completeString = testC + "Strozberg";
    if( completeString != "Felipe Strozberg"){
      cout << "Not Working" << endl;
      return 0;
    }
    cout << completeString << endl;
  cout << "Finish Test C" << endl << endl;
  return 1;
}

int testD(){
  cout << "Starting Test D" << endl;
  String testD = "Tony";
//    testD += "";
  cout << testD << endl;
//
  String testDI = "Felipe ";
  testDI += testD;
  
  if( testDI != "Felipe Tony"){
    cout << "Not Working" << endl;
    return 0;
  }
  cout << testDI << " rsrs" << endl;

  cout << "Finish Test D" << endl << endl;
  return 1;
}

int testE(){
  cout << "Starting Test E" << endl;
  String size = "tamanho igual a 18";
  cout << size << endl;
  cout << size.length() << endl;
  if(size.length() != 18){
    
    cout << "Not Working" << endl;
    return 0;
  }
  cout << "Finish Test E" << endl << endl;
  return 1;
}

int testF() {
  cout << "Starting Test F" << endl;
  String testF = "Short";

  int index;
  index = testF.indexOf('S');
  cout << index << endl;
  if(index != 0) { cout << "Not Working" << endl; return 0; }
  index = testF.indexOf('h');
  cout << index << endl;
  if(index != 1) { cout << "Not Working" << endl; return 0; }

  index = testF.indexOf('o');
  cout << index << endl;
  if(index != 2) { cout << "Not Working" << endl; return 0; }

  index = testF.indexOf('r');
  cout << index << endl;
  if(index != 3) { cout << "Not Working" << endl; return 0; }

  index = testF.indexOf('t');
  cout << index << endl;
  if(index != 4) { cout << "Not Working" << endl; return 0; }

  index = testF.indexOf('Z');
  cout << index << endl;
  if(index != 5) { cout << "Not Working" << endl; return 0; }
  cout << "Finish Test F" << endl << endl;
  
  return 1;
}

int testG() {
  cout << "Starting Test G" << endl;
  String uppercase = "grande";
  cout << uppercase << endl;
  uppercase.upcase(0, uppercase.length());
  cout << uppercase << endl;
  if(uppercase != "GRANDE") { cout << "Not Working" << endl; return 0; }
  cout << "Finish Test G" << endl << endl;
  return 1;
}

int testH() {
  cout << "Starting Test H" << endl;
  String lowercase = "PEQUENO";
  cout << lowercase << endl;
  lowercase.downcase(0, lowercase.length());
  cout << lowercase << endl;
  if(lowercase != "pequeno") { cout << "Not Working" << endl; return 0; }
  cout << "Finish Test H" << endl << endl;
  return 1;
}

int testI() {
  cout << "Starting Test I" << endl;
  String togglecase = "InVeRtIdO";
  cout << togglecase << endl;
  togglecase.togglecase(0, togglecase.length());
  cout << togglecase << endl;
  if(togglecase != "iNvErTiDo") { cout << "Not Working" << endl; return 0; }
  cout << "Finish Test I" << endl << endl;
  return 1;
}

int testJ() {
    cout << "Starting test J" << endl;
  String testJ = "Primeiro é P";
  char first = testJ[0];
  cout << first << " P " << endl;
  if(first != 'P') { cout << "Not Working" << endl; return 0; }
  cout << "Finish Test J" << endl << endl;
  return 1;
}

//int testK(){
//  cout << "Starting test K" << endl;
//  String test, test2,test3;
//  test = "test";
//  test2 = "test2";
//  test3 = "test";
//  bool ab = test != test2;
//  cout << ab << endl;
//  if( test == test2 ){
//    cout << "not working 1";
//  }else if(test != test2){
//    if(test == test3){
//      cout << "working";
//    }else{
//      cout << "parcially working";
//    }
//  }else{
//    cout << "not working 2";
//  }
//  cout << endl;
//  char char1 = 'b', char2 = 'a';
//  String string1 = "b", string2 = "a";
//  if(char1 > char2 && string1 > string2){
//    cout << "working" << endl;
//  }else{
//    cout << "not working" << endl;
//  }
//
//
//  char char3 = 'a',char4 = 'b';
//  String string3 = "a", string4 = "b";
//  if(char3 < char4 && string3 < string4){
//    cout << "working" << endl;
//  }else{
//    cout << "not working" << endl;
//  }
//
//  char char5 = 'a', char6 = 'a';
//  String string5 = "a", string6 = "a";
//  if(char5 >= char6 && string5 >= string6){
//    cout << "working" << endl;
//  }else{
//    cout << "not working" << endl;
//  }
//
//  char char7 = 'b', char8 = 'b';
//  String string7 = "b", string8 = "b";
//  if(char7 <= char8 && string7 <= string8 && string7 <= "d" && char7 <= 'a'){
//    cout << "working" << endl;
//  }else{
//    cout << "not working" << endl;
//  }
//
//  cout << "Finish Test K" << endl << endl;
//}
// >
int testK1(){
  cout << "Start Teste K1" << endl;
  String a = "a", b = "b";
  cout << a << endl;
  cout << b << endl;
  if( a > b ){
    cout << "NOT WORKING First" << endl;
    return 0;
  }
  a = "aa";
  if( a > "bbb"){
    cout << "NOT WORKING Second" << endl;
    return 0;
  }
  if( "1" > a ){
    cout << "NOT WORKING Thrid" << endl;
    return 0;
  }
  
  cout << "> Test aproved" << endl;
  return 1;
}
// <
int testK2(){
  cout << "Start Teste K2" << endl;
  String a = "a", b = "b";
  cout << a << endl;
  cout << b << endl;
  if( a < b ){
    cout << "NOT WORKING First" << endl;
    return 0;
  }
  a = "aa";
  if( a < "b"){
    cout << "NOT WORKING Second" << endl;
    return 0;
  }
  if( "bb" < a ){
    cout << "NOT WORKING Thrid" << endl;
    return 0;
  }
  
  cout << "< Test aproved" << endl;
  
  return 1;
}
//>=
int testK3(){
  cout << "Start Teste K3" << endl;
  String a = "cc", b = "b";
  cout << a << endl;
  cout << b << endl;
  if( b >= a ){
    cout << "NOT WORKING First" << endl;
    return 0;
  }else if(a >= b){
    cout << ">= Test aproved first" << endl;
  }
  
  if( a >= "bbb"){
    cout << "NOT WORKING Second" << endl;
    return 0;
  }else if(a < "bbb"){
    cout << ">= Test aproved second" << endl;
  }
  
  if( "b" >= a ){
    cout << "NOT WORKING Thrid" << endl;
    return 0;
  }else if( a >= "b"){
    cout << ">= Test aproved third" << endl;
  }
  
  cout << ">= Test aproved" << endl;
  return 1;
}

int testK4(){
  cout << "Start Teste K4" << endl;
  String a = "a", b = "bb";
  cout << a << endl;
  cout << b << endl;
  if( b <= a ){
    cout << "NOT WORKING First" << endl;
    return 0;
  }else if(a <= b){
    cout << "<= Test aproved first" << endl;
  }

  if( b <= "b"){
    cout << "NOT WORKING Second" << endl;
    return 0;
  }else if(b < "bbb"){
    cout << "<= Test aproved second" << endl;
  }

  if( "bbb" <= b ){
    cout << "NOT WORKING Thrid" << endl;
    return 0;
  }else if( b <= "bbb"){
    cout << "<= Test aproved third" << endl;
  }

  cout << "<= Test aproved" << endl;
  return 1;
}


int testK5(){
  cout << "Start Teste K5" << endl;
  String a = "d", b = "b";
  cout << a << endl;
  cout << b << endl;
  if( b != a ){
    cout << "NOT WORKING First" << endl;
    return 0;
  }
  
  if(a == b){
    cout << "!= && == Test aproved" << endl;
  }
  
  return 1;
}

int main(int argc, const char * argv[]) {
//  if(testA() == 0){ cout << "NOT WORKING First" << endl; return 0; }
//  if(testB() == 0){ cout << "NOT WORKING First" << endl; return 0; }
//  if(testC() == 0){ cout << "NOT WORKING First" << endl; return 0; }
//  if(testD() == 0){ cout << "NOT WORKING First" << endl; return 0; }
//  if(testE() == 0){ cout << "NOT WORKING First" << endl; return 0; }
//  if(testF() == 0){ cout << "NOT WORKING First" << endl; return 0; }
//  if(testG() == 0){ cout << "NOT WORKING First" << endl; return 0; }
//  if(testH() == 0){ cout << "NOT WORKING First" << endl; return 0; }
//  if(testI() == 0){ cout << "NOT WORKING First" << endl; return 0; }
//  if(testJ() == 0){ cout << "NOT WORKING First" << endl; return 0; }
//  if(testK1() == 0){ cout << "NOT WORKING First" << endl; return 0; }
//  if(testK2() == 0){ cout << "NOT WORKING First" << endl; return 0; }
//  if(testK3() == 0){ cout << "NOT WORKING First" << endl; return 0; }
//  if(testK4() == 0){ cout << "NOT WORKING First" << endl; return 0; }
//  if(testK5() == 0){ cout << "NOT WORKING First" << endl; return 0; }
  
  String a = "oid";
  String b = "oid";
  if( a != b ){
    cout << "deu bom" << endl;
    return 1;
  }
  cout << "deu bom2" << endl;
  return 1;
}
