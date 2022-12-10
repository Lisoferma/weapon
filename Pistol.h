#pragma once


#include "Weapon.h"


class Pistol : public Weapon {
  public:
	Pistol();

	Pistol(const std::string& name, float damage);

	// выстрел
	bool shoot() override;

	// воспроизвести эффект выстрела
	void shotEffect() override;

	// мгновенная перезарядка
	bool instantReload() override;
};

