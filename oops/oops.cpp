#include<iostream>
using namespace std;


class Hero{

private:
int level;

public:
int health;

//default constructor
Hero(int health, int level){
this->health = health;
this->level = level;
cout<< " health: " << this->health <<endl;
cout<< " level: " << this->level <<endl;

}
// always pass by call by refernce otherwise it will create copy 
Hero (Hero &temp){
    
    this->health = temp.health;
    this->level = temp.level;

    cout<< "copy construcotr " <<endl;
}

void setHealth(int x){
    this->health=x;
}

void setLevel(int y){
   
    this->level=y;
}

int getLevel(){
    return level;
}
int getHealth(){
    return health;
}
};

int main(){
// //static allocation
//  Hero h1(100);
//  cout<< "Adress of h1  " << &h1 <<endl;
// cout<< h1.getHealth() <<endl;

// Hero h2(200);
// cout<< "Adress of h2 " << &h2 <<endl;
// cout<< h2.getHealth() <<endl;

// //dynamic allocation
// Hero *h2 = new Hero;
// (*h2).setLevel(54);
// cout<< (*h2).getLevel() <<endl;//1st method
// cout<< h2->getLevel() <<endl; // 2nd method

//copy constructor
Hero s(70, 4);
Hero p(s);//copy object s into p
cout<< p.getHealth() <<endl;
cout<< p.getLevel() <<endl;
 


 
}