#include <iostream>

using namespace std;

class Human {   
    
	private:
	double x1, m1, li; // ���������� ���������� (�����) ����������, ����� � �����
	
	public:
    // ����������� ������
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
  
// ������ ������� - �������, �������
  void GetH(double& x1, double& m1, double& li)
  {
    x1 = this->x1;
    m1 = this->m1;
    li = this->li;
  }

  void SetH(double x1, double m1, double li)
  {
    this->x1 = x1;
    
	// ������������ ����� � ����� ���� �����
    if ((m1 > 50) && (m1 <= 150))
	this->m1 = m1;
	else
    this->m1 = 50;
    
    if ((li > 0) &&  (li <= 5))
	this->li = li;
	else
    this->li = 5;
  }

  //  ������� run() - ������������ ��������
  double Run()
  {
    return x1 += 1;
  }
};


class Horse {   
    
	private:
	double x3, m3, en; // ���������� ���������� (�����) ����������, ����� � ������������
	
	public:
    // ����������� ������
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
  
// ������ ������� - �������, �������
  void GetHor(double& x3, double& m3, double& en)
  {
    x3 = this->x3;
    m3 = this->m3;
    en = this->en;
  }

  void SetHor(double x3, double m3, double en)
  {
    this->x3 = x3;
    
	// ������������ ����� � ������������ ���� �����
    if ((m3 > 100) && (m3 <= 500))
	this->m3 = m3;
	else
    this->m3 = 400;
    
    if ((en > 0) &&  (en <= 5))
	this->en = en;
	else
    this->en = 5;
  }

  //  ������� Fastrun() - ������������ ������
  double Fastrun()
  {
    return x3 += 5;
  }
};


class Spear {   
    
	private:
	double len; // ����� � ����� ����� 
	
	public:
    // ����������� ������
    Spear(double len)
  {    
    if ((len > 1) &&  (len <= 2.5))
	this->len = len;
    else
      this->len = 1.75;
  }
  
// ������ ������� - �������, �������
  void GetSp(double& len)
  {
    
    len = this->len;
  }

  void SetSp(double len)
  {
    // ������������ ����� � ����� ���� �����
      
    if ((len > 1) &&  (len <= 2.5))
	this->len = len;
	else
    this->len = 1.75;
  }
  
};

class Soldier
{
private:
  x1, m1, li, len; 

public:
  // ����������� 
  Soldier(double x1, double m1, double li, double len)::Human()::Spear()
  
  // ����� ������ shout
  { 
  cout<<"For queen and coutry!"<<endl;
  }
  };
  
int main()
{
  // ������ ��������� ������ Human
  Human h1(-4, 55, 4);

  // ���� �������� ����� ���������� h1
  double x1, m1, li;
  h1.GetH(x1, m1, li);

  // ����� �������� ����� �� �����
  cout << "x = " << x1 << ", mass = " << m1 << ", life = " << li << endl;
  
  double coord = h1.Run();
  cout << "coord = " << coord << endl;
  
  // ������ ��������� ������ Human
  Human h2(0, 15, 24);
  h2.GetH(x1, m1, li);

  // ����� �������� ����� �� �����
  cout << "x = " << x1 << ", mass = " << m1 << ", life = " << li << endl;
  cout << "coord = " << 2*h2.Run() << endl;  

  // ������ ��������� ������ Horse
  Horse hrs1(-5, 450, 4);

  // ���� �������� ����� ���������� hrs1
  double x3, m3, en;
  hrs1.GetHor(x3, m3, en);

  // ����� �������� ����� �� �����
  cout << "x = " << x3 << ", mass = " << m3 << ", endurance = " << en << endl;
  
  double horscoord = hrs1.Fastrun();
  cout << "horscoord = " << horscoord << endl;
  
  // ������ ��������� ������ Horse 
  Horse hrs2(0, 75, 25);
  hrs2.GetHor(x3, m3, en);

  // ����� �������� ����� �� �����
  cout << "x = " << x3 << ", mass = " << m3 << ", endurance  = " << en << endl;
  cout << "horscoord = " << 3*hrs2.Fastrun() << endl;
  
  // ������ ��������� ������ Spear (�����)
  Spear S1( 1.5);

  // ���� �������� ����� ���������� S1
  double len;
  S1.GetSp(len);

  // ����� �������� ����� �� �����
  cout << "length = " << len << endl;
  
   // ������ ��������� ������ Spear (�����)
  Spear S2(30);
  S2.GetSp(len);

  // ����� �������� ����� �� �����
  cout << "length = " << len << endl;
 
  return 0;
}

  
  

