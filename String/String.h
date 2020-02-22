//
//  String.h
//  String
//
//  Created by Tony Matheus on 13/02/20.
//  Copyright © 2020 Tony Matheus. All rights reserved.
//

#ifndef String_h
#define String_h

class String {
public:
  String();
  String(char);
  String(const char*);
  String(const String&);
  ~String(void);
  
  void operator =(const char*);
  void operator =(const String&);
  void operator +(const String&); //not implemented
  void operator += (const char*); // not implemented
  void operator += (const String&); // not implemented
  int length() const;
  
  friend bool operator ==(const String &, const String &);
  friend bool operator !=(const String &, const String &);
  friend std::ostream & operator<<(std::ostream &, const String &);
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

String::~String(void)
{
  delete[] value;
  value = nullptr;
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
// a = b
void String::operator =(const String & word){
  const char * newWord = word.value;
  this->value = new char[word.size];
  int j;
  delete[] word.value;
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

void String::operator+=(const char* word){
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
  std::cout << value << std::endl;
  for(j = j; *newWord; newWord++, j++)
  {
    value[j] = *newWord;
  }
  
  size = j;
}
//void operator += (const String&);
//void String::operator +=(const String &word){
//  value = word.value;
//  size = word.size;
//}

//length
int String::length() const{
  if(value != nullptr){
    return size;
  }else{
    return 0;
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

std::ostream & operator<<(std::ostream &os, const String &s)
{
  for(int i = 0; i < s.size; i++)
  {
    os << s.value[i];
  }
  return os;
}



#endif /* String_h */

