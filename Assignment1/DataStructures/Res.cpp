#include <time.h>
#include "Restaurant.hpp"

int main () {
	srand((int) time(NULL));
	Restaurant res;
	res.userMenu();
	return 0;
}