#pragma once
#include "Child.h"

class FGrandChild : public FChild
{
public:
	FGrandChild();
	virtual ~FGrandChild();

	void WhoamI() override;

	void Playground();
};

