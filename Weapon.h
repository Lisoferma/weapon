// описывает общие характеристики и функционал для всего оружия
// @author Пилипейко А.А.


#pragma once


#include <string>


class Weapon {
  public:
	unsigned maxAmmo;


	Weapon();

	Weapon(const std::string& name, float damage);

	Weapon(const std::string& name, float damage,
	       unsigned _currentAmmo, unsigned maxAmmo);

	// задать название
	void setName(const std::string& name);

	// прочитать название
	std::string getName() const;

	// задать урон
	void setDamage(float damage);

	// прочитать урон
	float getDamage() const;

	// выстрел
	bool shoot();

	// мгновенная перезарядка; возвращает 0 если нет боезопаса
	// дочерний класс должен использовать свой тип патронов из Invenory.h
	virtual bool instantReload() = 0;

	// воспроизвести эффект выстрела
	virtual void shotEffect() = 0;

	// задать текущий боезопас
	void setCurrentAmmo(unsigned number);

	// прочитать текущий боезопас
	unsigned getCurrentAmmo() const;


  private:
	std::string _name;
	float       _damage;
	unsigned    _currentAmmo;
};