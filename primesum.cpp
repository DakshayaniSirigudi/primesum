#include <iostream>
using namespace std;
int sop(int n);//sop-sum of two primes
int main()
{
int n,x,i;
cout << "Enter the number: ";
cin>>n;
x=0;
for(i=2;i<=n/2;++i)
{
  if (sop(i)==1)      //  condition for i to be prime
{
  if (sop(n-i)==1)
{
  cout << n << " can be expressed as the sum of " << i << " and " << n-i << endl;
x=1;
}
}
}
if (x==0)
 cout << n << " cannot be expressed as the sum of two prime numbers\n";
return 0;
}
//function to check if a number is prime or not
int sop(int n)
{
 int i, isPrime=1;
 for(i=2;i<=n/2;++i)
 {
  if(n % i == 0)
  {
    isPrime=0;
    break;
  }
 }
return isPrime;
}
