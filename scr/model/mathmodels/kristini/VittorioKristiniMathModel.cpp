#include "VittorioKristiniMathModel.h"

VittorioKristiniMathModel::VittorioKristiniMathModel()
{
	this->_adhesionMesureCoefficient = 0;
	this->_apoptosisMesureCoefficient = 0;
	this->_chemotaxisCoefficient = 0;
	this->_diffusionCoefficientInCancerTissue = 0;
	this->_diffusionCoefficientInLiveTissue = 0;
	this->_massTransferCoefficient = 0;
}

VittorioKristiniMathModel::VittorioKristiniMathModel(
	double diffusionCoefficientInLiveTissue,
	double diffusionCoefficientInCancerTissue,
	double adhesionMesureCoefficient,
	double apoptosisMesureCoefficient,
	double massTransferCoefficient,
	double chemotaxisCoefficient
)
{
	this->_adhesionMesureCoefficient = adhesionMesureCoefficient;
	this->_apoptosisMesureCoefficient = apoptosisMesureCoefficient;
	this->_chemotaxisCoefficient = chemotaxisCoefficient;
	this->_diffusionCoefficientInCancerTissue = diffusionCoefficientInCancerTissue;
	this->_diffusionCoefficientInLiveTissue = diffusionCoefficientInLiveTissue;
	this->_massTransferCoefficient = massTransferCoefficient;
}

double VittorioKristiniMathModel::getDiffusionCoefficientInLiveTissue() const
{
	return this->_diffusionCoefficientInLiveTissue;
}

double VittorioKristiniMathModel::getDiffusionCoefficientInCancerTissue() const
{
	return this->_diffusionCoefficientInCancerTissue;
}

double VittorioKristiniMathModel::getAdhesionMesureCoefficient() const
{
	return this->_adhesionMesureCoefficient;
}

double VittorioKristiniMathModel::getApoptosisMesureCoefficient() const
{
	return this->_apoptosisMesureCoefficient;
}

double VittorioKristiniMathModel::getMassTransferCoefficient() const
{
	return this->_massTransferCoefficient;
}

double VittorioKristiniMathModel::getChemotaxisCoefficient() const
{
	return this->_chemotaxisCoefficient;
}

void VittorioKristiniMathModel::setDiffusionCoefficientInLiveTissue(double diffusionCoefficientInLiveTissue)
{
	this->_diffusionCoefficientInLiveTissue = diffusionCoefficientInLiveTissue;
}

void VittorioKristiniMathModel::setDiffusionCoefficientInCancerTissue(double diffusionCoefficientInCancerTissue)
{
	this->_diffusionCoefficientInCancerTissue = diffusionCoefficientInCancerTissue;
}

void VittorioKristiniMathModel::setAdhesionMesureCoefficient(double adhesionMesureCoefficient)
{
	this->_adhesionMesureCoefficient = adhesionMesureCoefficient;
}

void VittorioKristiniMathModel::setApoptosisMesureCoefficient(double apoptosisMesureCoefficient)
{
	this->_apoptosisMesureCoefficient = apoptosisMesureCoefficient;
}

void VittorioKristiniMathModel::setMassTransferCoefficient(double massTransferCoefficient)
{
	this->_massTransferCoefficient = massTransferCoefficient;
}

void VittorioKristiniMathModel::setChemotaxisCoefficient(double chemotaxisCoefficient)
{
	this->_chemotaxisCoefficient = chemotaxisCoefficient;
}


VittorioKristiniMathModel::~VittorioKristiniMathModel()
{
}
