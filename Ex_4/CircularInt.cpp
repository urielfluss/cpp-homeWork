
#include "CircularInt.h"
using namespace std;

//cunstructor with 3 numbers - range and current
CircularInt:: CircularInt(const int min,const  int max,const  int current){
  this->min=min;
  this->max=max;
  this->current=current;
}
//cunstructor with 2 numbers - range. the current initialing to min
CircularInt:: CircularInt(const int min,const int max){
  this->min=min;
  this->max=max;
  this->current=current;
}


//initial operator + (CircularInt , int)
CircularInt& CircularInt::operator+ (const CircularInt other){
  CircularInt temp = CircularInt(min,max);
  int z = current + other.current;
  temp.current=z%((max-min)+1);
  return temp;
}

CircularInt& CircularInt::operator- (const CircularInt other)
{
  CircularInt temp = CircularInt(min,max);
  int z = current - other.current;
  temp.current=(((max-min)+1)+z)%12;
  return temp;
}
CircularInt& CircularInt::operator+ (const int input){
  CircularInt temp = CircularInt(min,max);
  temp.current = ((this->current)+input)%((max-min)+1);
  return temp;
}
CircularInt& CircularInt::operator- (const int input){
  CircularInt temp = CircularInt(min,max);
  temp.current = (((max-min)+1)+((this->current)-input))%12;
  return temp;
}
ostream& operator<< (ostream& s,const CircularInt input){
  cout << "range: " << input.min << " to " << input.max << std::endl;
  cout << "current: " << input.current << std::endl;
  return s;
}
CircularInt& CircularInt:: operator++ (int x){
  CircularInt temp = CircularInt(min,max);
  temp.current=(temp.current+1)%12;
  return temp;
}
CircularInt& CircularInt:: operator+= (const int input){
  CircularInt temp = CircularInt(min,max);
  return temp;
}
CircularInt& CircularInt:: operator- (){
  CircularInt temp = CircularInt(min,max);
  return temp;
}
CircularInt& CircularInt:: operator*= (const int input){
  CircularInt temp = CircularInt(min,max);
  return temp;
}
CircularInt& CircularInt::operator/ (const int input){
  CircularInt temp = CircularInt(min,max);
  return temp;
}
CircularInt& CircularInt::operator/ (const CircularInt input){
  CircularInt temp = CircularInt(min,max);
  return temp;
}
