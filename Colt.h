// описывает функционал пистолета Colt
// @author Пилипейко А.А.


#pragma once


#include "Pistol.h"


class Colt : public Pistol {
  public:
	Colt();

	// воспроизвести эффект выстрела
	void shotEffect() override;
};

