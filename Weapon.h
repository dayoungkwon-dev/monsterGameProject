#pragma once

class Weapon {
protected:
	int offensePower{ 0 };	// ���ݷ�
	int attackCnt{ 0 };		// ���� ���� Ƚ��

public:
	virtual void attack();
};