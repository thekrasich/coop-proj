#include "ApplicationSettings.h"

ApplicationSettings::ApplicationSettings()
{
	this->_colorTheme = DEFAULT_COLOR_THEME;
	this->_cultureId = DEFAULT_CULTURE_ID;
	this->_width = DEFAULT_WINDOW_WIDTH;
	this->_heigth = DEFAULT_WINDOW_HEIGTH;
}

ApplicationSettings::ApplicationSettings(
	ColorTheme colorTheme,
	CultureId cultureId,
	unsigned short int width,
	unsigned short int heigth
)
{
	this->_colorTheme = colorTheme;
	this->_cultureId = cultureId;
	this->_width = width;
	this->_heigth = heigth;
}

ColorTheme ApplicationSettings::getColorTheme() const
{
	return this->_colorTheme;
}

CultureId ApplicationSettings::getCultureId() const
{
	return this->_cultureId;
}

unsigned short int ApplicationSettings::getWidth() const
{
	return this->_width;
}

unsigned short int ApplicationSettings::getHeigth() const
{
	return this->_heigth;
}

void ApplicationSettings::setColorTheme(ColorTheme colorTheme)
{
	this->_colorTheme = colorTheme;
}

void ApplicationSettings::setCultureId(CultureId cultureId)
{
	this->_cultureId = cultureId;
}

void ApplicationSettings::setWidth(unsigned short int width)
{
	this->_width = width;
}

void ApplicationSettings::setHeigth(unsigned short int heigth)
{
	this->_heigth = heigth;
}

ApplicationSettings::~ApplicationSettings()
{
}
