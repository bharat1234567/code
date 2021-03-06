/*
Water and jug problem
---------------------------
Que no: 365
You are given two jugs with capacities x and y litres. There is an infinite amount of water supply available. You need to determine whether it is possible to measure exactly z litres using these two jugs.

If z liters of water is measurable, you must have z liters of water contained within one or both buckets by the end.

Operations allowed:

Fill any of the jugs completely with water.
Empty any of the jugs.
Pour water from one jug into another till the other jug is completely full or the first jug itself is empty.

Input: x = 3, y = 5, z = 4
Output: True

Input: x = 2, y = 6, z = 5
Output: False
*/







/*

overall idea is if 2 no's are coprime then we can reach solution z in [0,x+y] i.e. value of z should lie btw 0 and x + y
and numbers are coprimes --> gcd of both numbers is 1. 
if these 2 conditions satisfy then return true else false. 

so we will find remainder of z and gcd(x,y)
bool canMeasureWater(int x, int y, int z) {
    return z == 0 || z <= (long long)x + y && z % __gcd(x, y) == 0; .. why long long --> to avoid overflow
}



*/

















/*










only thing we should proof is this:

if x and y are coprime,  then we can and only can reach every integer z in [0, x + y]. (1)
then for a GCD g, from gx and gy,
we can and only can reach every z in {i * g | i in [0, x + y] }

now, let's see how to proof (1).
let x be the less one, and y the greater one.
then fill the two jug to full, we have x and y water each and x + y water in total.
then we pour out x water each time until we can't.

now we have these different z:

 y + x,  y,  y - x,  y - 2x, ... , y % x 
finally we have y % x water left, we pour it into the x jug,
then fill the y jug to full.
now the two jugs have y % x and y water separately,
and y + y % x water in total.
then we pour from y jug into x jug until the x jug is full,
afterwards do the same thing like before,
to pour out x water each time until we can't.

finally we get (y + y % x) % x = (y % x + y % x) % x = (2y) % x water left.

now we have these different z:

 y + y % x,   y + y % x - x,  y + y % x - 2x, ... ,  (2y) % x 
do this x times, we get z:

 y + (2y) % x,  y + (2y) % x - x, y + (2y) % x - 2x, ..., (3y) % x
 :
 :
 :    
 y + ((x-1)y) % x,  y + ((x-1)y) % x - x,  y + ((x-1)y) % x - 2x, ... ,  (xy) % x
then you see (xy) % x = 0, and

 y % x, (2y) % x, (3y) % x, ... , ((x-1)y) % x just are 1, 2, 3, 4, 5, ... , x - 1. (2)
proof for (2):
modulo x could get x - 1 different results at most exclusive 0, that's 1,2,3,...,x-1.
we have x - 1 expressions, suppose there is two same,
let a != b in [1, x-1] and (ay) % x = (by) % x,
then we get ((a - b)y) % x = 0,
then ((a - b) % x) * (y % x) = 0, (a - b) % x = 0.
for 1 <= a, b <= x - 1, so we get a = b. it's impossible.

so we can get any z in [0, x + y] water for coprime x and y.

C++ code:

bool canMeasureWater(int x, int y, int z) {
    return z == 0 || z <= (long long)x + y && z % __gcd(x, y) == 0;
}
Java code:

public boolean canMeasureWater(int x, int y, int z) {
    return z == 0 || (long)x + y >= z && z % gcd(x, y) == 0;
}
public int gcd(int x, int y) {
    return y == 0 ? x : gcd(y, x % y);
}
Python code:

def canMeasureWater(self, x, y, z):
    from fractions import gcd
    return z == 0 or x + y >= z and z % gcd(x, y) == 0
p.s. the testcases are too weak.
you may get overflow without long long, say 2147483647, 234524287, 1.
some code get AC, while runs wrong on this 4,6,8.

*/



