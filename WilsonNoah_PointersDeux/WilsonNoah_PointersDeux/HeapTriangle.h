#pragma once
class HeapTriangle
{
public:
	float* _base = new float;
	float* _height = new float;
	float DetermineArea(float *base, float *height);

	~HeapTriangle()
	{
		delete _base;
		delete _height;
	}

	HeapTriangle(float base, float height)
	{
		_base = new float(base);
		_height = new float(height);
	}

	HeapTriangle(const HeapTriangle& other)
	{
		this->_base = new float(*other._base);
		this->_height = new float(*other._height);
	}

	HeapTriangle& operator=(const HeapTriangle& other)
	{
		if (this == &other) { return *this; }
			this->_base = new float(*other._base);
			this->_height = new float(*other._height);
		return *this;
	}
};

