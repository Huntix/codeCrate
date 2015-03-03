#include "stdafx.h"
using namespace std;
#include <iostream>
#include <stdlib.h>
#include <string>
#include <conio.h>

class Hero{
public:
	int hp;
	int damage;
	int damageTake();
	int damageGive();
	char name[20];
	int gold;
};

void main(){
	int choise;
	Hero Naming,DamageTake,DamageGive,Gold,Hp,GetDamage;
	Naming.gold = 20;
	cout << "Hello stranger.I am allowed to call you stranger ? Oh you know what ? Type your name !!!" << endl;
	cout << "Name your hero: ";
	cin.getline(Naming.name, 10);
	cout << endl;
	cout << "Hellooooooooooo " << Naming.name << endl<<"Let your quest begin now! You are a noble hero that is ready to save this world from the bad guyz!"<<endl;
	cout << "Okay, now you've got to buy some gear! Choose from any of these ! " << endl;
	cout << "1- Ordinary Sword : +30 dmg +10hp -- Costs 20 gold" << endl;
	cout << "2- My Grandma's Axe : +20 dmg +20hp -- Costs 20 gold" << endl;
	cout << "1  or 2 ? Type it !" << endl; cin >> choise;
	if (choise == 1) {
		GetDamage.damage = 30;
		Hp.hp = 10;
		
	
	}
	else{
		GetDamage.damage = 20;
		Hp.hp = 20;
		
	}
	cout << "You now have: +" << Hp.hp<<" - hp and +"<<GetDamage.damage<<" - damage " ;

	_getch();
}
