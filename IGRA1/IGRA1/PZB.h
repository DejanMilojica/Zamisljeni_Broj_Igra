#pragma once
#include<iostream>
#include<algorithm>
class PZB
{
protected:
	static int Bodovi;
	 int ZBroj;
public:
	PZB() {
		int k = std::rand();
		int i = 0;
		while (!i)
			if (k < 100 && k > 0)
				ZBroj = k, i = 1;
	}
	int Ispis() { return ZBroj; }
	int BOdovi(int B) { return Bodovi = B; }
};

