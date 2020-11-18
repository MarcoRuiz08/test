#include <iostream>

using namespace std;

class Solution{
	public:
		int reverse(int x);
		
};

int main() {
    
	int a = 123;
	int result;
	
	Solution obj1;
	
	result = obj1.reverse(a);
	
    return 0;
}

int Solution::reverse(int x)
{
	int answer = 0, aux = 0;
	int n=1;
	int MIN = 2^-31;
	int MAX = 2^31 - 1;
	
	while(x != 0)
	{
		aux = (x % 10);
		x =  x / 10;
		
		answer = answer*10 + aux;
		cout << answer << endl;
	}
	
	if(answer > MAX || answer < MIN)
		return 0;
	else
		cout << answer << endl;
	
	return answer;
}