#pragma once


#include "Weapon.h"


class Pistol : public Weapon {

	Pistol();

	Pistol(const std::string& name, float damage);

	// ������������� ������ ��������
	void shotEffect() override;
};

