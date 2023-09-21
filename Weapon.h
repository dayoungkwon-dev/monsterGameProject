#pragma once

class Weapon {
protected:
	int offensePower{ 0 };	// 공격력
	int attackCnt{ 0 };		// 공격 가능 횟수

public:
	virtual void attack();
};