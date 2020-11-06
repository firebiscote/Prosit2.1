#pragma once

#ifndef DEF_COORDS
#define DEF_COORDS

#include <iostream>
#include <math.h>

class Coords {
public:
	Coords();
	Coords(int x);
	Coords(int x, int y);
	double findDistance(Coords const& b) const;

private:
	int c_x;
	int c_y;

	friend std::ostream& operator<< (std::ostream& flux, Coords const& coords);
	friend std::istream& operator>> (std::istream& flux, Coords& coords);
};

#endif // !DEF_COORDS

