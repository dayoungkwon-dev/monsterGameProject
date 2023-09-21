#pragma once
#include "Weapon.h"

class Gun : public Weapon {
public:
	int offensePower;
	int attackCnt;

public:
	Gun();
	int getPower();
	int getAttackCnt();
	void attack();
};