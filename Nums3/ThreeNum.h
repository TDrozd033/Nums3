#pragma once
using namespace std;
#include <iostream>
// reprezentacja trójek liczb rzeczywistych 

class ThreeNum
{
public:
  // konstruktor z parametrami domysl
  ThreeNum(double x1 = 0, double x2 = 0, double x3 = 0);

  // konstruktor kopiujacy 
  ThreeNum(const ThreeNum& t);
  virtual ~ThreeNum();

  // operator podstawienia 
  ThreeNum& operator = (const ThreeNum& t);

  // settery:
  void SetX1(double n_x1);
  void SetX2(double n_x2);
  void SetX3(double n_x3);
  void SetTreeNum(double n_x1, double n_x2, double n_x3);

  //gettery
  double GetX1() const;
  double GetX2() const;
  double GetX3() const;

  
  // operator dodawania
  friend const ThreeNum operator + (const ThreeNum& t1, const ThreeNum& t2);
  ThreeNum& operator += (const ThreeNum& t);

  //operator mnozenie
  friend const ThreeNum operator * (const ThreeNum& t1, const ThreeNum& t2);
  ThreeNum& operator *= (const ThreeNum& t);

  friend const ThreeNum operator * (const ThreeNum& t, double x);
  friend const ThreeNum operator * (double x, const ThreeNum& t);
  ThreeNum& operator *= (double x);

  double Ave() const;

  // input output
  friend ostream& operator <<(ostream& out, const ThreeNum& t);
  friend istream& operator >>(istream& in, ThreeNum& t);



private:
  double m_x1;
  double m_x2;
  double m_x3;
};



inline void ThreeNum::SetX1(double n_x1)
{
  m_x1 = n_x1;
}
inline void ThreeNum::SetX2(double n_x2)
{
  m_x2 = n_x2;
}
inline void ThreeNum::SetX3(double n_x3)
{
  m_x3 = n_x3;
}
inline void ThreeNum::SetTreeNum(double n_x1, double n_x2, double n_x3)
{
  SetX1(n_x1);
  SetX2(n_x2);
  SetX3(n_x3);
}

inline double ThreeNum::GetX1() const
{
  return m_x1;
}
inline double ThreeNum::GetX2() const
{
  return m_x2;
}
inline double ThreeNum::GetX3() const
{
  return m_x3;
}

