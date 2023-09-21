#pragma once
#include <string>

using namespace std;

class Monster {
public:
	static int mstHp;
	static string mstName;

public:
	Monster();
	void setMstHp(int chaLevel);
	int getMstHp();
	void setMstName(int chaLevel);
	string getMstName();
	void getAttack(int power);
};
