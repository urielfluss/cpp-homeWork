#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;
class CircularInt{
  private:
    int min;
    int max;
    int current;

  public:
    CircularInt(const int min,const  int max,const  int current);
    CircularInt(const int min,const int max);
    //~CircularInt();
    CircularInt& operator+ (const CircularInt input);
    CircularInt& operator+ (const int input);
    CircularInt& operator- (const CircularInt input);
    CircularInt& operator- (const int input);
    CircularInt& operator- ();
    CircularInt& operator/ (const int input);
    CircularInt& operator/ (const CircularInt input);
    friend ostream& operator<< (ostream& s,const CircularInt input);
    CircularInt& operator+= (const int input);
    CircularInt& operator*= (const int input);
    CircularInt& operator++ (int x);



    void print(){
      std:: cout << "range: " << this->min << " to " << this->max << std::endl;
      std:: cout << "current: " << this-> current << std::endl;

    }

  };
