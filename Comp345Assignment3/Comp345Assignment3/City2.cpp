#include "City2.h"
#include <iostream>


City2::City2(std::string name, std::string colour, int cubes)
	: _name{ name }
	, _colour{ colour }
	, _currentCubes{ cubes }


{} // Empty

City2::~City2() {}


int City2::getNbOfDiseases() {
	return _currentCubes;
}

bool City2::isThereStation() {
	return _hasResearchStation;
}


std::string City2::name() const
{
	return _name;
}

std::string& City2::name()
{
	return _name;
}


std::string City2::colour()const {
	return _colour;
}

std::string& City2::colour() {
	return _colour;
}

void City2::addCubes(int add) {
	_currentCubes = _currentCubes + add;
}

void City2::addStation() {
	_hasResearchStation = true;
}

void City2::removeCubes(int nbToDelete) {
	if (_currentCubes > 0) {
		_currentCubes = _currentCubes - nbToDelete;
	}
	else {
		std::cout << "There are no diseases in this current city.\n";
	}
}

void City2::printCity() {
	std::cout << "City name: " << _name << "\n Number of disease cubes: " << _currentCubes << "\n Has a research station: " << _hasResearchStation << std::endl;
}