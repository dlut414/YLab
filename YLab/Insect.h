//Insect : base class of Ant, Queen, Caterpillar...
//
#include <limits>
class Insect {
public:
	Insect(int v = 1, int lc = INT_MAX, int lef = 1, int b = 1)
		: velocity(v), lifeCycle(lc), life(lc), lifeElapseFreq(lef), blocks(b) {}
	virtual ~Insect() {}
	virtual void move() {}
	const bool alive() const {
		return life > 0 && blocks > 0;
	}
	void check() {
		if (!this->alive()) this->~Insect();
	}
private:
	int velocity;
	int lifeCycle;
	int life;
	int lifeElapseFreq;
	int blocks;
};