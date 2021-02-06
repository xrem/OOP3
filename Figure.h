#pragma once

class Figure
{
public:
	virtual double GetP() = 0;
	virtual double GetS() = 0;
	virtual ~Figure() = default;
};

