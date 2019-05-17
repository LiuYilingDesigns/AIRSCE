#pragma once
#include "pch.h"
#include <tuple>
#include <fstream>

/*immersion in various forms, text/audio/art (current: only text//future: audio & art), to target individual user experience*/

class businessplan {


};

class treasuremap {


};

class cardcollection {


};

class theclassiccheesehoarder {
public:
	string notpreservedtofu;

	theclassiccheesehoarder() {
		notpreservedtofu = "cheddar";
	}
	void ontable() {

		cout << "Jolly g'day, quintessentially british, dear sir or madam." << endl;
	}
private:
	int cheeseage;
};

class typicalcrazycatowner {


};

class restofeclecticism {


};



///polymorphs
class gouda : public theclassiccheesehoarder {
public:
	void ontable() {

		cout << "A cheese walks into a cellar and is asked for affinage. The cheese goes 'you're cracking me up, I'm vintage." << endl;
	}
};

class mozzerella : public theclassiccheesehoarder {
public:
	void ontable() {
		cout << "" << endl;
	}
};

class gruyere : public theclassiccheesehoarder {
public:
	void ontable() {
		cout << "" << endl;
	}
};

class manchego : public theclassiccheesehoarder {
public:
	void ontable() {
		cout << "" << endl;
	}
};

class muenster : public theclassiccheesehoarder {
public:
	void ontable() {
		cout << "" << endl;
	}
};

class brie : public theclassiccheesehoarder {
public:
	void ontable() {
		cout << "" << endl;
	}
};

class sellessurcher : public theclassiccheesehoarder {
public:
	void ontable() {
		cout << "" << endl;
	}
};