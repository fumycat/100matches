#include "../src/func.h"
#include <ctest.h>
#include <stdio.h>


CTEST(checkInput,9inputs1matches)
{
	const int result = check_input(9, 1);
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}


CTEST(PlayerTurn,3inputs90matches)
{
	int m = 3;
	const int result = make_turn(10, &m);
	const int expected = 7;
	ASSERT_EQUAL(expected, result);
}

CTEST(PlayerTurn,9inputs5matches)
{
	int m = 100;
	const int result = make_turn(10, &m);
	const int expected = -1;
	ASSERT_EQUAL(expected, result);
}
CTEST(PlayerTurn,9inputs9matches)
{
	int m = 10;
	const int result = make_turn(10, &m);
	const int expected = -1;
	ASSERT_EQUAL(expected, result);
}
