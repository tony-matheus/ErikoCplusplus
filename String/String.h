//
//  String.h
//  String
//
//  Created by Tony Matheus and Felipe Strozberg on 13/02/20.
//  Copyright © 2020 Tony Matheus / Felipe Strozberg. All rights reserved.
//

#ifndef String_h
#define String_h
#include <typeinfo>

using namespace std;
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
  char* operator +(const char*);
  char* operator +(const String&);

  char& operator[] (unsigned int);
  
  friend bool operator ==(const String &, const String &);
  friend bool operator ==(const String &, const char*);
  friend bool operator ==(const char *, const String &);
  
  friend bool operator !=(const String &, const String &);
  friend bool operator !=(const String &, const char*);
  friend bool operator !=(const char *, const String &);

  // String a ;
  friend bool operator >(const String &, const String &); // a > b
  friend bool operator >(const String &, const char*); // a > "sadasd"
  friend bool operator >(const char *, const String &); // "sadasd" > a

  friend bool operator <(const String &, const String &); // a < b
  friend bool operator <(const String &, const char*); // a > "sadasd"
  friend bool operator <(const char *, const String &); // "sadasd" > a

  friend bool operator >=(const String &, const String &); // a > b
  friend bool operator >=(const String &, const char*); // a > "sadasd"
  friend bool operator >=(const char *, const String &); // "sadasd" > a

  friend bool operator <=(const String &, const String &); // a > b
  friend bool operator <=(const String &, const char*); // a > "sadasd"
  friend bool operator <=(const char *, const String &); // "sadasd" > a

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
  delete[] value;
}

String::String(const char *word){
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

// a = "asjdqwi"
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

// a + "asdqwedu"
char* String::operator +(const char* word){
  const char * newWord = word;
  const char * oldWord = this->value;
  
  int i = 0;
  while(*word++){
    i++;
  }
  
  char * returningWord;
  returningWord = new char[size + i];
  
  int j;
  for(j = 0; *oldWord; oldWord++, j++)
  {
    returningWord[j] = *oldWord;
  }
  for(j = j; *newWord; newWord++, j++)
  {
    returningWord[j] = *newWord;
  }
  
  return returningWord;
}

// a + b
char* String::operator +(const String& word){
  const char *newWord = word.value; // char *
  const char *oldWord = this->value; // char *

  char * returningWord = new char[size + word.size + 1];

  
  int j;
  for(j = 0; *oldWord; oldWord++, j++)
  {
    returningWord[j] = *oldWord;
  }

  for(j = j ; *newWord; newWord++, j++)
  {
    returningWord[j] = *newWord;
  }
  return returningWord;
}

//a = "felipe"
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

  //std::cout << value << std::endl;
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

int String::indexOf(char letter) const{
  for(int i = 0; i < size; i++){
    if(value[i] == letter) { return i; }
  }
  return -1;
}

// felipe
// FELIPE
void String::upcase(int start, int finish){
  for( int i = start; i < finish; i++){
    value[i] = value[i] - 32;
  }
}
// FeLIPe
// felipe
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



// ----------------------  OPERADORES LÓGICOS  ----------------------

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

bool operator ==(const String & word, const char* anotherWord ){
  const char * compareWord = anotherWord;
  int length = 0;
  
  while(*compareWord++){
    length++;
  }
  if(word.length() == length){
    for(int i = 0; *anotherWord; anotherWord++, i++){
      if(word.value[i] != *anotherWord) {
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

bool operator ==(const char* anotherWord, const String & word ){
  const char * compareWord = anotherWord;
  int length = 0;
  
  while(*compareWord++){
    length++;
  }
  if(word.length() == length){
    for(int i = 0; *anotherWord; anotherWord++, i++){
      if(word.value[i] != *anotherWord) {
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
    for(int i = 0; i < word.length(); i++){
      if(word.value[i] != anotherWord.value[i]) {
        return true;
      }
    }
  }
  return false;
}

bool operator !=(const String & word, const char* anotherWord ){
  const char * compareWord = anotherWord;
  int length = 0;
  
  while(*compareWord++){
    length++;
  }
  if(word.length() != length){
    cout << word.value << endl;
    cout << word.size << endl;
    cout << word.length() << endl;
    cout << anotherWord << endl;
    return true;
  } else{
    for(int i = 0;  *anotherWord; anotherWord++, i++){
      if(word.value[i] != *anotherWord) {
        cout << word.value[i];
        cout << anotherWord;
        return true;
      }
    }
  }
  return false;
}

bool operator !=(const char* anotherWord, const String & word ){
  const char * compareWord = anotherWord;
  int length = 0;
  
  while(*compareWord++){
    length++;
  }
  if(word.length() != length){
    return true;
  } else{
    for(int i = 0;  *anotherWord; anotherWord++, i++){
      if(word.value[i] != *anotherWord) {
        return true;
      }
    }
  }
  return false;
}

//--------------------------------------------------------------
// MAIOR
// a > b
bool operator >(const String & word, const String & anotherWord){
   return (word.size > anotherWord.size);
}

// a > "asdq"
bool operator >(const String & word, const char* anotherWord){
  const char * newWord = anotherWord;
  int length = 0;
  while(*newWord++){
    length++;
  }

  return (word.size > length);
}

// "asdd" > a
bool operator >(const char* anotherWord, const String & word){
  const char * newWord = anotherWord;
  int length = 0;
  while(*newWord++){
    length++;
  }

  return (length > word.size);
}

//--------------------------------------------------------------
// MENOR
bool operator <(const String & word, const String & anotherWord){
  return (word.size < anotherWord.size);
}

// a < "asdq"
bool operator <(const String & word, const char* anotherWord){
  const char * newWord = anotherWord;
  int length = 0;
  while(*newWord++){
    length++;
  }

  return (word.size < length);
}

// "asdd" < a
bool operator <(const char* anotherWord, const String & word){
  const char * newWord = anotherWord;
  int length = 0;
  while(*newWord++){
    length++;
  }

  return (length < word.size);
}

//--------------------------------------------------------------
// MENOR IGUAL
bool operator <=(const String & word, const String & anotherWord){
  return (word.size <= anotherWord.size);
}

bool operator <=(const char* anotherWord, const String & word){
  const char * newWord = anotherWord;
  int length = 0;
  while(*newWord++){
    length++;
  }

  return (length <= word.size);
}
// "asdd" <= a
bool operator <=(const String & word, const char* anotherWord){
  const char * newWord = anotherWord;
  int length = 0;
  while(*newWord++){
    length++;
  }

  return (word.size <= length);
}

//--------------------------------------------------------------
// MAIOR IGUAL
bool operator >=(const String & word, const String & anotherWord){
  return (word.size >= anotherWord.size);
}

bool operator >=(const char* anotherWord, const String & word){
  const char * newWord = anotherWord;
  int length = 0;
  while(*newWord++){
    length++;
  }

  return (length >= word.size);
}

bool operator >=(const String & word, const char* anotherWord){
  const char * newWord = anotherWord;
  int length = 0;
  while(*newWord++){
    length++;
  }

  return (word.size >= length);
}

//--------------------------------------------------------------

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

std::istream& operator >> (std::istream& in, const String& s)
{

  // for(int i = 0; i < s.size; i++)
  //  {
  //    in >> s.value[i];
  //  }
  //  return in;

  in >> s.value;

  return in;
}



#endif /* String_h */

