# Product-of-distinct-prime-divisors-of-an-integer---Most-Efficient-Solution
This code optimizes the classic problem of solving the product of the distinct prime divisors of an integer. It retrieves the distinct prime divisors simply by division without needing to check if the numbers are prime.

We read n, then we define d with starting value of 2, the first prime number, and p with 1 so we can multiply it iteratively.

Then, we build our product in a while loop that stops when n is reduced to the value of 1, because we'll divide it iteratively until we exhausted all divisors.

Inside, we first check if n is divisible by our divisor d. If yes, we check if our product isn't divisible by d, because if it isn't it means that the current divisor d hasn't been stored into the product p yet, so we store it one time. If the product is already divisible by the current divisor, we don't execute anything. In the first if statement, after we have completed the second if statement and multiplied p by d, we divide n by d. And this loop will divide n by d until n is no longer divisible by d, making sure the product will not store powers of prime numbers.
We close the first if and open an else that will execute commands for values of d that aren't divisors of n. First, we check inside it if the divisor is 2, in which case we turn it into 3, and if the divisor is not 2, we move to the next odd number. After 2, we made d only odd numbers, because only those are potential candidates for prime numbers, 2 being the only even prime number.

We don't need to check if the divisor is prime, because n will be divided only by distinct prime numbers and p will store them only once.

Removing the check for prime number, we reduce the programme space substantially, making more efficient, much faster and easier to read. 
