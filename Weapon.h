// ��������� ����� �������������� � ���������� ��� ����� ������
// @author ��������� �.�.


#pragma once


#include <string>


class Weapon {
  public:
	unsigned maxAmmo;


	Weapon();

	Weapon(const std::string& name, float damage);

	Weapon(const std::string& name, float damage,
	       unsigned _currentAmmo, unsigned maxAmmo);

	// ������ ��������
	void setName(const std::string& name);

	// ��������� ��������
	std::string getName() const;

	// ������ ����
	void setDamage(float damage);

	// ��������� ����
	float getDamage() const;

	// �������
	bool shoot();

	// ���������� �����������; ���������� 0 ���� ��� ���������
	// �������� ����� ������ ������������ ���� ��� �������� �� Invenory.h
	virtual bool instantReload() = 0;

	// ������������� ������ ��������
	virtual void shotEffect() = 0;

	// ������ ������� ��������
	void setCurrentAmmo(unsigned number);

	// ��������� ������� ��������
	unsigned getCurrentAmmo() const;


  private:
	std::string _name;
	float       _damage;
	unsigned    _currentAmmo;
};