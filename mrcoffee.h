#pragma once
#include"mrcat.h"
#include <cctype>
/* the watchful cat listens, yes, it has drinks with mr coffee. 
Does it drink coffee - no one knows*/

///input validation, found on cplusplus.com to "Convert lowercase letter to uppercase".
char keys = toupper(keys);

while (keys != 'y' && keys != 'n') {

	cout << "Would you like to type y, typey, typey typey away ~ " << endl;

	cin >> keys;
}
if (keys == 'y' || keys == 'Y') {

	cout << "" << endl;
}

else if (keys == 'n' || keys == 'N') {

	cout << "" << endl;
}

/*
cin.get()
cin.ignore()

cin.clear()
*/