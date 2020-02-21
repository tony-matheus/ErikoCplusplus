//
//  Stack.h
//  String
//
//  Created by Tony Matheus on 13/02/20.
//  Copyright © 2020 Tony Matheus. All rights reserved.
//

#ifndef Stack_h
#define Stack_h


class Stack {
public:
  Stack(int);
  ~Stack(void);
  void insertElement(int);
  int  remove(void);
  int  top(void);
  bool isEmpty(void);
  bool full(void);
private:
  int  max;
  int topStack;
  int *mem;
};

Stack::Stack(int n)
{
  max =  n;
  topStack = -1;
  mem = new int[n];
}
Stack::~Stack(void)
{
  delete[] mem;
}
void Stack::insertElement(int e)
{
  if( !full() )
    mem[++topStack] = e;
  else
    std::cout << "Stack full!" << std::endl;
}
int Stack::remove(void)
{
  if( !isEmpty() )
    return mem[topStack--];
  else {
    std::cout << "Stack isEmpty!" << std::endl;
    return 0; }
}
int Stack::top(void)
{
  if( !isEmpty() )
    return mem[topStack];
  else {
    std::cout << "Stack isEmpty!" << std::endl;
    return 0; }
}
bool Stack::isEmpty(void)
{
  return topStack==-1;
}
bool Stack::full(void)
{
  return topStack==max-1;
}

#endif /* Stack_h */

