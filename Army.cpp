#include <iostream>

using namespace std;

class Human {   
    
	private:
	double x1, m1, li; // объявление параметров (полей) координаты, массы и жизни
	
	public:
    // Конструктор класса
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
  
// Методы доступа - геттеры, сеттеры
  void GetH(double& x1, double& m1, double& li)
  {
    x1 = this->x1;
    m1 = this->m1;
    li = this->li;
  }

  void SetH(double x1, double m1, double li)
  {
    this->x1 = x1;
    
	// корректируем массу и жизнь если нужно
    if ((m1 > 50) && (m1 <= 150))
	this->m1 = m1;
	else
    this->m1 = 50;
    
    if ((li > 0) &&  (li <= 5))
	this->li = li;
	else
    this->li = 5;
  }

  //  Функция run() - передвижение человека
  double Run()
  {
    return x1 += 1;
  }
};


class Horse {   
    
	private:
	double x3, m3, en; // объявление параметров (полей) координаты, массы и выносливости
	
	public:
    // Конструктор класса
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
  
// Методы доступа - геттеры, сеттеры
  void GetHor(double& x3, double& m3, double& en)
  {
    x3 = this->x3;
    m3 = this->m3;
    en = this->en;
  }

  void SetHor(double x3, double m3, double en)
  {
    this->x3 = x3;
    
	// корректируем массу и выносливость если нужно
    if ((m3 > 100) && (m3 <= 500))
	this->m3 = m3;
	else
    this->m3 = 400;
    
    if ((en > 0) &&  (en <= 5))
	this->en = en;
	else
    this->en = 5;
  }

  //  Функция Fastrun() - передвижение лошади
  double Fastrun()
  {
    return x3 += 5;
  }
};


class Spear {   
    
	private:
	double len; // масса и длина копья 
	
	public:
    // Конструктор класса
    Spear(double len)
  {    
    if ((len > 1) &&  (len <= 2.5))
	this->len = len;
    else
      this->len = 1.75;
  }
  
// Методы доступа - геттеры, сеттеры
  void GetSp(double& len)
  {
    
    len = this->len;
  }

  void SetSp(double len)
  {
    // корректируем массу и длину если нужно
      
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
  // Конструктор 
  Soldier(double x1, double m1, double li, double len)::Human()::Spear()
  
  // Метод класса shout
  { 
  cout<<"For queen and coutry!"<<endl;
  }
  };
  
int main()
{
  // Создаём экземпляр класса Human
  Human h1(-4, 55, 4);

  // Берём значения полей экземпляра h1
  double x1, m1, li;
  h1.GetH(x1, m1, li);

  // Вывод значения полей на экран
  cout << "x = " << x1 << ", mass = " << m1 << ", life = " << li << endl;
  
  double coord = h1.Run();
  cout << "coord = " << coord << endl;
  
  // Создаём экземпляр класса Human
  Human h2(0, 15, 24);
  h2.GetH(x1, m1, li);

  // Вывод значения полей на экран
  cout << "x = " << x1 << ", mass = " << m1 << ", life = " << li << endl;
  cout << "coord = " << 2*h2.Run() << endl;  

  // Создаём экземпляр класса Horse
  Horse hrs1(-5, 450, 4);

  // Берём значения полей экземпляра hrs1
  double x3, m3, en;
  hrs1.GetHor(x3, m3, en);

  // Вывод значения полей на экран
  cout << "x = " << x3 << ", mass = " << m3 << ", endurance = " << en << endl;
  
  double horscoord = hrs1.Fastrun();
  cout << "horscoord = " << horscoord << endl;
  
  // Создаём экземпляр класса Horse 
  Horse hrs2(0, 75, 25);
  hrs2.GetHor(x3, m3, en);

  // Вывод значения полей на экран
  cout << "x = " << x3 << ", mass = " << m3 << ", endurance  = " << en << endl;
  cout << "horscoord = " << 3*hrs2.Fastrun() << endl;
  
  // Создаём экземпляр класса Spear (копьё)
  Spear S1( 1.5);

  // Берём значения полей экземпляра S1
  double len;
  S1.GetSp(len);

  // Вывод значения полей на экран
  cout << "length = " << len << endl;
  
   // Создаём экземпляр класса Spear (копьё)
  Spear S2(30);
  S2.GetSp(len);

  // Вывод значения полей на экран
  cout << "length = " << len << endl;
 
  return 0;
}

  
  

