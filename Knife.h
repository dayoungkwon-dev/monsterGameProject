#pragma once
#include "Weapon.h"

class Knife : public Weapon {
public:
	int offensePower;
	int attackCnt;

public:
	Knife();
	int getPower();
	int getAttackCnt();
	void attack();
};