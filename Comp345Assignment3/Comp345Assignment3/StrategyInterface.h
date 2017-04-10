#pragma once


/*
This is the main interface that will aloow the formation of concrete strategies to allow this pattern.
The patter primarily allows the definition of a family of algorithms and encapsulations each of them
to allow them to become interchangeable. 
*/

class StrategyInterface
{
public:
	virtual void execute() const = 0;
};