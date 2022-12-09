#pragma once


#include <string>


class Weapon {
  public:
	unsigned maxAmmo;


	Weapon();

	// ������ ��������
	void setName(const std::string& name);

	// ��������� ��������
	std::string& getName();

	// ������ ����
	void setDamage(float damage);

	// ��������� ����
	float getDamage();

	// ���������� �����������; ���������� 0 ���� ��� ���������
	virtual bool instantReload() = 0;

	// ������������� ������ ��������
	virtual void shotEffect() = 0;

	// ������ ������� ��������
	void setCurrentAmmo(unsigned number);

	// ��������� ������� ��������
	unsigned getCurrentAmmo();


  private:
	std::string _name;
	float       _damage;
	unsigned    _currentAmmo;
};