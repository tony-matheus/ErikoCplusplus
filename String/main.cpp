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

//& Is used to get the address


int main(int argc, const char * argv[]) {
  Stack p(32);
  unsigned  number;
  cout << "Número positivo? ";
  cin >> number;
  do {
    p.insertElement(number%2);
    number /= 2;
  } while( number!=0 );
  cout << "Binário: ";
   while( !p.isEmpty() )
    cout << p.remove();
  cout << endl;
  
  return 0;
}
