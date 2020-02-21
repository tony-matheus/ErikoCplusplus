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
    ~String(void);
    String(char);
    String(const char*);
    String(const String &);
    void operator =(const String&);
  private:
    char *value;
    int size;
};

String::String(){
  value = nullptr;
  size = 0;
}

String::~String()
{
  delete[] value;
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

void String::operator =(const String&word)
{
  value = word.value;
  size = word.size;
}

bool String::operator ==(const String & word, const String & anotherWord){
  
}




#endif /* String_h */
