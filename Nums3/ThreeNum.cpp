#include "ThreeNum.h"
#include<math.h>


ThreeNum::ThreeNum(double x1, double x2, double x3 )
{
  SetTreeNum( x1, x2, x3 );
}

// konstruktor kopiujacy 
ThreeNum::ThreeNum(const ThreeNum& t)
{
  m_x1 = 0;
  m_x2 = 0;
  m_x3 = 0;
  *this = t;
}
ThreeNum:: ~ThreeNum()
{

}

// operator podstawienia 
ThreeNum& ThreeNum::operator = (const ThreeNum& t)
{
  SetX1( t.m_x1 );
  SetX2( t.m_x2 );
  SetX3( t.m_x3 );
  return *this;
}


const ThreeNum operator + (const ThreeNum& t1, const ThreeNum& t2)
{
  ThreeNum res;
  res.m_x1 = (t1.m_x1 + t2.m_x1) / 2;
  res.m_x2 = (t1.m_x2 + t2.m_x2) / 2;
  res.m_x3 = (t1.m_x3 + t2.m_x3) / 2;
  return res;
}
ThreeNum& ThreeNum::operator += (const ThreeNum& t)
{
  SetX1( (GetX1() + t.GetX1()) / 2 );
  SetX2( (GetX2() + t.GetX2()) / 2 );
  SetX3( (GetX3() + t.GetX3()) / 2 );

  return *this;
}


//operator mnozenie
const ThreeNum operator * (const ThreeNum& t1, const ThreeNum& t2)
{
  ThreeNum res(t1);

  res.SetX1( sqrt(t1.GetX1() * t2.GetX1()) );
  res.SetX2( sqrt(t1.GetX2() * t2.GetX2()) );
  res.SetX3( sqrt(t1.GetX3() * t2.GetX3()) );
  return res;
}
ThreeNum& ThreeNum::operator *= (const ThreeNum& t)
{
  SetX1( sqrt(t.GetX1() * GetX1()) );
  SetX2( sqrt(t.GetX2() * GetX2()) );
  SetX3( sqrt(t.GetX3() * GetX3()) );
  return *this;
}

 const ThreeNum operator * (const ThreeNum& t, double x)
{
   ThreeNum res( t );

   res.SetX1( t.GetX1() * x );
   res.SetX2( t.GetX2() * x );
   res.SetX3( t.GetX3() * x );
   return res;
 
}
const ThreeNum operator * (double x, const ThreeNum& t)
{
  ThreeNum res( t );

  res.SetX1( t.GetX1() * x );
  res.SetX2( t.GetX2() * x );
  res.SetX3( t.GetX3() * x );
  return res;
}
ThreeNum& ThreeNum::operator *= (double x)
{
  SetX1( x * GetX1() );
  SetX2( x * GetX2() );
  SetX3( x * GetX3() );
  return *this;
}

double ThreeNum::Ave() const
{
  double res = 3 / (1 / GetX1() + 1 / GetX2() + 1 / GetX3());
  return res;
}

// input output
ostream& operator <<(ostream& out, const ThreeNum& t)
{
  out << "[ " << t.GetX1() << ", " << t.GetX2() << ", " << t.GetX3() << " ]" << endl;
  return out;
}

istream& operator >>(istream& in, ThreeNum& t)
{
  in >> t.m_x1 >> t.m_x2 >> t.m_x3;
  return in;
}


