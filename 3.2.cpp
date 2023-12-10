#include<iostream>
using namespace std;
bool is_prime(int n);
int main() {
	int n=1;
	int z = 0;
	
	while (1) {
		n++;
		if (is_prime(n))
		{
			z++;
			cout << n<<'\t';
			if(z%10==0)
			{
				cout << endl;
			}
		}
		if(z%200==0)
		{
			break;
		}
	}
}
bool is_prime(int n)
{
	for (int i = 2; i <= n - 1; i++)
	{
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}