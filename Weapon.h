#pragma once


#include <string>


class Weapon {
  public:

	Weapon();

	// ������ ��������
	void setName(const std::string& name);

	// ��������� ��������
	std::string& getName();

	// ������ ����
	void setDamage(float damage);

	// ��������� ����
	float getDamage();

	// ������������� ������ ��������
	virtual void shotEffect() = 0;


  protected:
	std::string _name;
	float _damage;
};