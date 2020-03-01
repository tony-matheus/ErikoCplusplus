//
//  String.h
//  String
//
//  Created by Tony Matheus on 13/02/20.
//  Copyright © 2020 Tony Matheus. All rights reserved.
//

#ifndef String_h
#define String_h
#include <typeinfo>

class String {
public:
  String();
  String(char);
  String(const char*);
  String(const String&);
  ~String(void);
  
  
  int length() const;
  int indexOf(char) const;
  void upcase(int, int);
  void downcase(int, int);
  void togglecase(int, int);
  
  void operator =(const char*);
  void operator =(const String&);
  
  void operator += (const char*);
  void operator += (const String&);
  // a = "suadha" + "saudasudh"l
  // a = b + "saduhas"
  friend String operator +(const char*, const String&);
  
  char& operator[] (unsigned int);
  
  friend bool operator ==(const String &, const String &);
  friend bool operator !=(const String &, const String &);
  
  // String a ;
  friend bool operator >(const String &, const String &); // a > b
  friend bool operator >(const String &, const char*); // a > "sadasd"
  friend bool operator >(const char *, const String &); // "sadasd" > a
  
  
  friend bool operator <(const String &, const String &);
  friend bool operator >=(const String &, const String &);
  friend bool operator <=(const String &, const String &);
  
  friend std::ostream & operator<<(std::ostream &, const String &);
  friend std::istream & operator>>(std::istream &, const String &);
private:
  char *value;
  int size;
};

//String& String::operator+=(const String& str)
//{
//  if (this != &str)
//  {
//    this->size = str.size;
//    this->value = new char[this->size];
//
//    strcpy_s(this->value, this->size, str.value);
//  }
//
//  return *this;
//}

//& Is used to get the address
String::String(){
  value = nullptr;
  size = 0;
}

String::String(const char word){
  value = new char[1];
  value[0] = word;
  size = 1;
}

String::String(const String&word){
  size = word.size;
  value = new char[size];
  for(int i = 0; i < size; i++){
    value[i] = word.value[i];
  }
}

String::~String(void)
{
  std::cout << this->value << std::endl;
  delete[] this->value;
  this->value = nullptr;
}

String::String(const char *word){
  const char * t = word;
  
  int i = 0;
  while(*word++){
    i++;
  }
  
  value = new char[i];
  int j;
  
  for(j = 0; *t; t++, j++)
  {
    value[j] = *t;
  }
  size = j;
}

// String a = "dsahdu";
// String b = "udhsaduh"
// a = b
void String::operator =(const String & word){
  
  const char * newWord = word.value;
  this->value = new char[word.size];
  int j;
  for(j = 0; *newWord; newWord++, j++)
  {
    this->value[j] = *newWord;
  }
  this->size = j;
}

//
void String::operator =(const char* word)
{
  const char * newWord = word;
  int i = 0;
  while(*word++){
    i++;
  }
  
  value = new char[i];
  int j;
  
  for(j = 0; *newWord; newWord++, j++)
  {
    value[j] = *newWord;
  }
  size = j;
}


//char* String::operator +(const char* word){
//  
//} a = "felipe"
// a += " strozberg"
void String::operator +=(const char* word){
  const char * newWord = word;
  const char * oldWord = this->value;
  
  int i = 0;
  while(*word++){
    i++;
  }
  
  value = new char[size + i];
  int j;
  for(j = 0; *oldWord; oldWord++, j++)
  {
    value[j] = *oldWord;
  }
  for(j = j; *newWord; newWord++, j++)
  {
    value[j] = *newWord;
  }

  std::cout << value << std::endl;
  size = j;
}
//void operator += (const String&);
// a += b
void String::operator +=(const String &word){
  const char * newWord = word.value; // char *
  const char * oldWord = this->value; // char *
  
  value = new char[size + word.size];
  
  int j;
  for(j = 0; *oldWord; oldWord++, j++)
  {
    value[j] = *oldWord;
  }
  
  for(int i = 0 ; j < size + word.size; i++, j++)
  {
    value[j] = newWord[i];
  }
  size = j;
}

// String a = "tony";
// a[0] = 't'
char & String::operator[] (unsigned int x)
{
  return value[x];
}

// length
int String::length() const{
  if(value != nullptr){
    return size;
  }else{
    return 0;
  }
}
//
int String::indexOf(char letter) const{
  for(int i = 0; i < size; i++){
    if(value[i] == letter) { return i; }
  }
  return -1;
}


void String::upcase(int start, int finish){
  for( int i = start; i < finish; i++){
    value[i] = value[i] - 32;
  }
}

void String::downcase(int start, int finish){
  for( int i = start; i < finish; i++){
    value[i] = value[i] + 32;
  }
}
// toNY
// TOny
void String::togglecase(int start, int finish){
  for( int i = start; i < finish; i++){
    if(value[i] >= 'a' && value[i] <= 'z'){
      value[i] = value[i] - 32;
    }else if(value[i] >= 'A' && value[i] <= 'Z'){
      value[i] = value[i] + 32;
    }
  }
}

// Operadores Lógicos
bool operator ==(const String & word, const String & anotherWord){
  if(word.length() == anotherWord.length()){
    for(int i = 0; i < word.length(); i++){
      if(word.value[i] != anotherWord.value[i]) {
        return false;
      }
    }
  }
  else
  {
    return false;
  }
  return true;
}

bool operator !=(const String & word, const String & anotherWord){
  if(word.length() != anotherWord.length()){
    return true;
  } else {
    int validate = 0;
    for(int i = 0; i < word.length(); i++){
      if(word.value[i] == anotherWord.value[i]) {
        validate++;
      }
    }
    if(validate > 0){
      return true;
    }
  }
  return false;
}

//bool operator >(const String & word, const String & anotherWord){
//  int wordValue = 0;
//  int anotherWordValue = 0;
//  for(int i = 0; i < word.size; i++){
//    wordValue += word.value[i];
//  }
//
//  for(int i = 0; i < anotherWord.size; i++){
//    anotherWordValue += anotherWord.value[i];
//  }
//  return (wordValue > anotherWordValue);
//}

bool operator >(const String & word, const String & anotherWord){
  return (word.size > anotherWord.size)
}

bool operator >(const String & word, const char* anotherWord){
  const char * newWord = anotherWord;
  int length = 0;
  while(*newWord++){
    length++;
  }
  
  return (word.size > length);
}

bool operator <(const String & word, const String & anotherWord){
  int wordValue = 0;
  int anotherWordValue = 0;
  
  for(int i = 0; i < word.size; i++){
    wordValue += word.value[i];
  }
  
  for(int i = 0; i < anotherWord.size; i++){
    anotherWordValue += anotherWord.value[i];
  }
  
//  std::cout << wordValue << std::endl;
//  std::cout << anotherWordValue << std::endl;
//  std::cout << (wordValue < anotherWordValue)<< "<" << std::endl;
  return (wordValue < anotherWordValue);
}

bool operator <=(const String & word, const String & anotherWord){
  int wordValue = 0;
  int anotherWordValue = 0;
  
  for(int i = 0; i < word.size; i++){
    wordValue += word.value[i];
  }
  
  for(int i = 0; i < anotherWord.size; i++){
    anotherWordValue += anotherWord.value[i];
  }
  
  return (wordValue <= anotherWordValue);
}

bool operator >=(const String & word, const String & anotherWord){
  int wordValue = 0;
  int anotherWordValue = 0;
  
  for(int i = 0; i < word.size; i++){
    wordValue += word.value[i];
  }
  
  for(int i = 0; i < anotherWord.size; i++){
    anotherWordValue += anotherWord.value[i];
  }
  
//  std::cout << wordValue << std::endl;
//  std::cout << anotherWordValue << std::endl;
//  std::cout << (wordValue >= anotherWordValue)<< ">=" << std::endl;
  return (wordValue >= anotherWordValue);
}

std::ostream & operator<<(std::ostream &os, const String &s)
{
  for(int i = 0; i < s.size; i++)
  {
    os << s.value[i];
  }
  return os;
}

//std::istream operator>> std::istream & operator>>(std::istream &in, const String &s)
//{
//  for(int i = 0; i < s.size; i++)
//  {
//    in >> s.value[i];
//  }
//  return in;
//}



#endif /* String_h */

