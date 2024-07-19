#include <iostream>

using namespace std;

long long mintime(long long start, long long end);

int main() {

	long long number = 0;
	long long start = 0, end = 0;
	scanf("%d", &number);
	for (int i = 0; i < number; i++)
	{
		scanf("%d %d",&start,&end);
		printf("%d\n", mintime(start, end));
	}

	return 0;
}

long long mintime(long long start, long long end)
{
	long long distance = end - start;
	long long count = 0;
	long long total = 0;
	long long result = 0;
	long long limitcount = 1;
	while (total<distance)
	{
		total += limitcount;
		count++;
		result++;
		if (count == 2)
		{
			count = 0;
			limitcount++;
		}
	}
	

	return result;
}