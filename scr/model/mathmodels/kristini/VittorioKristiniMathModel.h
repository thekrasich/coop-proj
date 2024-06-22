#pragma once
class VittorioKristiniMathModel
{
private: 
	double _diffusionCoefficientInLiveTissue;
	double _diffusionCoefficientInCancerTissue;
	double _adhesionMesureCoefficient;
	double _apoptosisMesureCoefficient;
	double _massTransferCoefficient; // TODO. Figure out is k; local total curvature??
	double _chemotaxisCoefficient;
public: 
	VittorioKristiniMathModel();
	VittorioKristiniMathModel(double diffusionCoefficientInLiveTissue,
		double diffusionCoefficientInCancerTissue,
		double adhesionMesureCoefficient,
		double apoptosisMesureCoefficient,
		double massTransferCoefficient,
		double chemotaxisCoefficient);

	double getDiffusionCoefficientInLiveTissue() const;
	double getDiffusionCoefficientInCancerTissue() const;
	double getAdhesionMesureCoefficient() const;
	double getApoptosisMesureCoefficient() const;
	double getMassTransferCoefficient() const;
	double getChemotaxisCoefficient() const;

	void setDiffusionCoefficientInLiveTissue(double diffusionCoefficientInLiveTissue);
	void setDiffusionCoefficientInCancerTissue(double diffusionCoefficientInCancerTissue);
	void setAdhesionMesureCoefficient(double adhesionMesureCoefficient);
	void setApoptosisMesureCoefficient(double apoptosisMesureCoefficient);
	void setMassTransferCoefficient(double massTransferCoefficient);
	void setChemotaxisCoefficient(double chemotaxisCoefficient);

	~VittorioKristiniMathModel();
};

