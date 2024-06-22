#pragma once
#include "../enums/Enums.h"
#include "../constants/Constants.cpp"

class ApplicationSettings
{
private:
	ColorTheme _colorTheme;
	CultureId _cultureId;
	unsigned short int _width;
	unsigned short int _heigth;

public:
	ApplicationSettings();
	ApplicationSettings(ColorTheme colorTheme,
		CultureId cultureId,
		unsigned short  int width,
		unsigned short int heigth);

	ColorTheme getColorTheme() const;
	CultureId getCultureId() const;
	unsigned short int getWidth() const;
	unsigned short int getHeigth() const;

	void setColorTheme(ColorTheme colorTheme);
	void setCultureId(CultureId cultureId);
	void setWidth(unsigned short int width);
	void setHeigth(unsigned short int heigth);

	~ApplicationSettings();
};

