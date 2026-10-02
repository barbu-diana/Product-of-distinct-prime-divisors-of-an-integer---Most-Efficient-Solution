int n;
cin>>n;
int d=2; //d will take the values of our divisors, starting with 2, the first prime number
int p=1; //p will be the product of our distinct prime divisors

//we search for divisors iteratively until n can't be divided anymore
while(n!=1){
    //first we check if our divisor is a divisor of n
     if(n%d==0){
          //then we check if our product already contains d
          if(p%d!=0){
             p=p*d; //if it doesn't we store it in our product one time, if the product contains d it won't store it a second time
             //cout<<d; //uncomment this line to also print each distinct prime divisor
          }  
          n=n/d; //n is then divided by the divisor until it is no longer divisible to that d, reducing n to a number that isn't divisible by non-prime multipliers of d
     }
     else{
         if(d==2) //checks if the divisor is 2, the only even prime number, then goes to 3
           d++;
         else
            d=d+2; //consecutively, d takes only odd numbers, because only those are potential candidates to being prime numbers
            //and it doesn't check if the divisor is prime because n will be divided only by prime numbers until it's no longer divisible by them
            //and p will store the prime divisor only once
   }
}
cout<<p; //it prints the product of the distinct prime divisors of n
