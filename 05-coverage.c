/**
These are the six coverage metrics that you will probably be using
in daily life in programming. Master them!:)
S tatement Coverage / Line Coverage
B ranch Coverage
L oop coverage
M odified Condition/Decision Coverage
P ath coverage
B oundary value coverage
*/


/*
Statement Coverage / Line Coverage
- all statements are executed.
*/
int main()
{
	//100% statement coverage
	int x = 0;
	int y = -1;
	if (x == 0)
		y += 1;
	if (y == 0)
		x += 1;

	return 0;
}

/*
Branch Coverage
- all condition values are covered (true/false)
*/
int main()
{
	//100% branch coverage
	test(0, -1);
	test(1, 0);

	return 0;
}
void test(int x, int y)
{
	if (x == 0)
		y += 1;
	if (y == 0)
		x += 1;
}

/*
Loop Coverage
- test when loop execute 0 time, 1 time, >1 times
*/
//test when file has no line, 1 line and more than 1 line
for line in open("file")
	process(line)

/*
Modified Condition/Decision Coverage (MCDC)
- check all possible values of variables
- can cover possibilities < (2 ^ #variables) to study in more detail in Software Testing
- usually done using truth table (2 ^ #variables)
*/
if A or (B AND C)

/*
Path Coverage
- all paths are covered
- can draw a diagram to illustrate
*/
//has 6 paths
//when x = {0,1,2} AND y is true
//and x = {0,1,2} AND y is false
void doSomething(int x, bool y)
{
	for (int i = 1; i <= x; ++i)
	{
		doThis();
	}
	if (y)
		doThat();
}
//has 8 paths, so need 8 test cases
void doThis(bool x, bool y, bool z)
{
	if (x)
		i1();
	if (y)
		i2();
	if (z)
		i3();

}

/*
Boundary Value Coverage
- checks for off-by-one errors
- checks for values 1 less than the boundary value, 
the boundary value and 1 more than the boundary value
*/
bool can_drink(int age)
	if age is 18 above
		true
	else
		false

can_drink(17, false)
can_drink(18, true)
can_drink(19, true)




