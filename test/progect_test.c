#include "func.h"
#include <ctest.h>
#include <stdio.h>


CTEST(checkInput,9inputs1matches)
{
	const int result = check_input(9, 1);
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(makeTurn,1inputs3matches)
{
	int m = 3;
	const int result = make_turn(10, &m);
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(makeTurn,10inputs100matches)
{
	int m = 100;
	const int result = make_turn(10, &m);
	const int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(makeTurn,10inputs10matches)
{
	int m = 10;
	const int result = make_turn(110, &m);
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(checkInput,11inputs100matches)
{
	const int result = check_input(11, 100);
	const int expected = 0;
	ASSERT_EQUAL(expected, result);
}

CTEST(checkInput,10inputs110matches)
{
	const int result = check_input(10, 110);
	const int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(checkInput,10inputs10matches)
{
	const int result = check_input(10, 10);
	const int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(calculate,11inputs)
{
	const int result = calculate(11);
	const int expected = 10;
	ASSERT_EQUAL(expected, result);
}

CTEST(calculate,2inputs)
{
	const int result = calculate(2);
	const int expected = 1;
	ASSERT_EQUAL(expected, result);
}

CTEST(calculate,10inputs)
{
	const int result = calculate(10);
	const int expected = 9;
	ASSERT_EQUAL(expected, result);
}