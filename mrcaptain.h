#pragma once
#include "pch.h"

#include <type_traits>
#include <strstream>

struct story {
	int nowmoment;
};

/* user protection enhancements with system optimisations

struct connect() {
	void sync() {
	}

	void flush(){
	}

	void tie(){

	}

	void getloc(){

	}

	void pword(){

	}
}
*/

/*travelling through a story game wouldn't be the same without 
forms of transport or fast travel*/
struct legs {
	const story place;
	float map;
	bool add_pointer;

private:
	bool is_same;
	bool is_swappable_with;
	bool is_move_assignable;

	legs() {
		place = 0;
		map = 0.0f;
		bool add_pointer = true;

		bool is_same = false;
		bool is_swappable_with = false;
		bool is_move_assignable = false;
	}
};

///to be figured out how to swap with this companion
struct companion {
	float map;
	bool is_swappable_with;
};

/* pointer of *place to be created*/