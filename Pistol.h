#pragma once


#include "Weapon.h"


class Pistol : public Weapon {
  public:
	Pistol();

	Pistol(const std::string& name, float damage);

	// �������
	bool shoot() override;

	// ������������� ������ ��������
	void shotEffect() override;

	// ���������� �����������
	bool instantReload() override;
};

