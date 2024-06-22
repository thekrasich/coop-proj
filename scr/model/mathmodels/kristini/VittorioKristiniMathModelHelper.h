#pragma once

double computePressure(
	double apoptosisMesureCoefficient,
	double adhesionMesureCoefficient,
	double concentration, 
	double chemotaxisCoefficient,
	double xCoordinate,
	unsigned short int dimensions,
	double massTransferCoefficient
) 
{
	return massTransferCoefficient + (adhesionMesureCoefficient - chemotaxisCoefficient)
		* concentration - adhesionMesureCoefficient - apoptosisMesureCoefficient
		* adhesionMesureCoefficient * ((xCoordinate * xCoordinate) / (2 * dimensions));
}
