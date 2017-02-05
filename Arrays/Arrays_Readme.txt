Pair of Amicable numbers: 
here it requires to find the sum of all the divisors of a number. to do this 
1. 1 is always the divisor so sum = 1(initialise)
2. consider all numbers from 2 to its sqareroot (i.e. sqrt(num))
3. in these numbers(say loop of i from 2 to sqrt(num)), any number if completely divides
   num i.e.(if num % i == 0 ) then include that number is a divisor.
   now another number on other side of sqareroot will also be a divisor 
   for ex: 
   for 100--> sqrt is 10
   2 is a divisor --> 100/2 = 50 is also a divisor
   4 is a divisor --> 100/4 = 25 is also a divisor
   
   so we also need to include (num/i) BUT NOT ALL num/i. 
   ex:
   
    for num = 4 --> sqrt = 2;
	
	2 is divisor and 4/2 is also a divisor which is 2 again. 
	so number get repeated. so condition to include becomes 
	
	if (num/i != i) then include num/i else not 
4. by this logic keep adding i and num/i and done!! this is also a way to find all divisors of a 
   number.

--------------------------------------------------------------------------------------------
 Leet median of 2 sorted arrays:
 create a vector of int and insert both vectors in it. 
 sort them using sort function --> sort(nums.begin(),nums.end())
 median can be a decimal value so store it in double variable. 
 double ans;
        int n = nums.size();
        if(n % 2 == 1 ) // odd
        ans = nums[(n-1)/2];
        else
        ans = double(nums[n/2] + nums[(n/2)-1])/2;
----------------------------------------------------------------------------------------------

 