#pragma once
#include <string>
#include <vector>

using namespace std;

class Character {
public:
	static int hp;
	static int level;
	static vector<string> weapons;
public:
	Character() {}
	static void setHp(int chgHp);
	static int getHp();
	static void setLevel(int chgLevel);
	static int getLevel();
	void pickWeapon(string newWeapon);
	void attack();
	void getDamage(int power);
};