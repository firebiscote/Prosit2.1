#include "coords.h"

using namespace std;

Coords::Coords() {
	c_x = 0;
	c_y = 0;
}

Coords::Coords(int x) {
	c_x = x;
	c_y = 0;
}

Coords::Coords(int x, int y) {
	c_x = x;
	c_y = y;
}

double Coords::findDistance(Coords const& b) const {
	return sqrt(pow(b.c_x - c_x, 2) + pow(b.c_y - c_y, 2));
}

ostream& operator<< (ostream& flux, Coords const& coords) {
	flux << "x : " << coords.c_x << " | y : " << coords.c_y << endl;
	return flux;
}

istream& operator>> (istream& flux, Coords& coords) {
	flux >> coords.c_x;
	flux >> coords.c_y;
	return flux;
}

