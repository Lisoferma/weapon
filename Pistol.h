// ��������� ����� ���������� ��� ����������, 
// � ��������� ����������� � ��� ������������ �������� -- pistolAmmo 
// @author ��������� �.�.


#pragma once


#include "Weapon.h"


class Pistol : public Weapon {
  public:
	//Pistol();

	// ���������� �����������; ������ pistolAmmo �� Inventory.h
	// ���������� 0 ���� ��� ���������
	bool instantReload() override final;
};