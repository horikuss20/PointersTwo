#include "HeapTriangle.h"
float HeapTriangle::DetermineArea(float *base, float *height)
{
	float area;
	area = ((*base * *height) / 2);
	return area;
}