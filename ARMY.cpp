#include <iostream>

using namespace std;

class Human {   
    
  private:
	double x1, m1, li; 
	
	public:
    Human(double x1, double m1, double li)
  {
  	this->x1 = x1;
    if ((m1 > 50) && (m1 <= 150))
	this->m1 = m1;
    else
      this->m1 = 50;
    
    if ((li > 0) &&  (li <= 5))
	this->li = li;
    else
      this->li = 5;
  }
   
  void GetH(double& x1, double& m1, double& li)
  {
    x1 = this->x1;
    m1 = this->m1;
    li = this->li;
  }

  void SetH(double x1, double m1, double li)
  {
    this->x1 = x1;
    
    if ((m1 > 50) && (m1 <= 150))
	this->m1 = m1;
	else
    this->m1 = 50;
    
    if ((li > 0) &&  (li <= 5))
	this->li = li;
	else
    this->li = 5;
  }

  double Run()
  {
    return x1 += 1;
  }
  
   double coord() const
  {
  	return x1;
  }
  double mass() const
  {
    return m1;
  }
  double life() const
  {
    return li;
  }
};


class Horse {   
    
	private:
	double x3, m3, en; 
	
	public:
    Horse(double x3, double m3, double en)
  {
  	this->x3 = x3;
    if ((m3 > 100) && (m3 <= 500))
	this->m3 = m3;
    else
      this->m3 = 400;
    
    if ((en > 0) &&  (en <= 5))
	this->en = en;
    else
      this->en = 5;
  }
  
  void GetHor(double& x3, double& m3, double& en)
  {
    x3 = this->x3;
    m3 = this->m3;
    en = this->en;
  }

  void SetHor(double x3, double m3, double en)
  {
    this->x3 = x3;
    
	if ((m3 > 100) && (m3 <= 500))
	this->m3 = m3;
	else
    this->m3 = 400;
    
    if ((en > 0) &&  (en <= 5))
	this->en = en;
	else
    this->en = 5;
  }

  double Fastrun()
  {
    return x3 += 5;
  }
  double coord() const
  {
  	return x3;
  }
  double mass() const
  {
    return m3;
  }
  double energy() const
  {
    return en;
  }
};


class Spear {   
    
	protected:
	double len; 
	
	public:
    Spear(double len)
  {    
    if ((len > 1) &&  (len <= 2.5))
	this->len = len;
    else
    this->len = 1.75;
  }
  
  void GetSp(double& len)
  {
    
    len = this->len;
  }

  void SetSp(double len)
  {
    if ((len > 1) &&  (len <= 2.5))
	this->len = len;
	else
    this->len = 1.75;
  }
  
};

class Soldier : public Human, public Spear
{

public:
    Soldier(double x1, double m1, double li, double len) : Human(x1, m1, li), Spear(len)
{
  }
  double coord() const
  {
  	return Human::coord();
  }
  double mass() const
  {
    return Human::mass();
  }
  double life() const
  {
    return Human::life();
  }
};

class Rider : public Human, public Horse
{

public:
  Rider(double x1, double m1, double li, double x3, double m3, double en) :
    Human(x1, m1, li),
    Horse(x3, m3, en)
  {
  }
  double force() const
  {
    return (Human::life() + Horse::energy()) * 0.5;
  }
  double mass() const
  {
    return Human::mass() + Horse::mass();
  }
  double coord() const 
  {
    return (Human::coord() + Horse::coord())*0.5;
  }
  
  double Ride()
  { 
  	if ((Human::mass() >= 50) && (Human::mass() <= 100))
  	return ((Human::coord() + Horse::coord())*0.5) += 4;
  	
  	if ((Human::mass() > 100) && (Human::mass() <= 100))
  	return ((Human::coord() + Horse::coord())*0.5) += 3;
  }
  
  };

class Knight : public Human, public Spear, public Horse 
{

public:
  Knight(double x1, double m1, double li,  double x3, double m3, double en, double len) :
    Human(x1, m1, li),
    Horse(x3, m3, en),
	Spear(len)
  {
  }
   double force() const
  {
    return (Human::life() + Horse::energy()) * 0.5;
  }
  double mass() const
  {
    return Human::mass() + Horse::mass();
  }
  double coord() const
  {
    return (Human::coord() + Horse::coord())* 0.5;
  }
  
  double RideKnight()
  {
  	if (mass >= 150) && (mass<= 300)
  	returnt coord += 4;
  	if mass > 300
  	returnt coord += 4;
  	
  }
};
  
int main()
{
 
  Human h1(-4, 55, 4);

  double x1, m1, li;
  h1.GetH(x1, m1, li);

  cout << "x = " << x1 << ", mass = " << m1 << ", life = " << li << endl;
  
  double coord = h1.Run();
  cout << "coord = " << coord << endl;
  
  Human h2(0, 15, 24);
  h2.GetH(x1, m1, li);

  cout << "x = " << x1 << ", mass = " << m1 << ", life = " << li << endl;
  cout << "coord = " << 2*h2.Run() << endl;  

  
  Horse hrs1(-5, 450, 4);

  double x3, m3, en;
  hrs1.GetHor(x3, m3, en);

  cout << "x = " << x3 << ", mass = " << m3 << ", endurance = " << en << endl;
  
  double horscoord = hrs1.Fastrun();
  cout << "horscoord = " << horscoord << endl;
  
  Horse hrs2(0, 75, 25);
  hrs2.GetHor(x3, m3, en);

  cout << "x = " << x3 << ", mass = " << m3 << ", endurance  = " << en << endl;
  cout << "horscoord = " << 3*hrs2.Fastrun() << endl;
  
  Spear S1( 1.5);

  double len;
  S1.GetSp(len);

  cout << "length = " << len << endl;
  
  Spear S2(30);
  S2.GetSp(len);

  cout << "length = " << len << endl;  
  
  Soldier Sol1 (1, 70, 4, 1.2);
  Rider Rid1 (1, 55, 4, 4, 500, 3);
  Knight Artur (5, 80, 5, 5, 500, 5, 1.75);
 
  return 0;
  
}
