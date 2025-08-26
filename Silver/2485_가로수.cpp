#include <iostream>
#include <vector>

using namespace std;

int gcdd(int a, int b)
{
	if (!b)
		return a;
	
	return gcdd(b, a % b);
}

int main()
{
	int n;
	cin >> n;

	vector<int> trees(n);

	for (int i=0; i<n; i++)
	{
		cin >> trees[i];
	}

	vector<int> tree_distances;
	for (int i = 0; i < trees.size() - 1; i++)
	{
		tree_distances.emplace_back(trees[i+1] - trees[i]);
	}

	int gcd = tree_distances[0];

	for (auto& i : tree_distances)
	{
		gcd = gcdd(gcd, i);
	}

	int cnt = 0;
	for (int i=0; i<n-1; i++)
	{
		cnt += (tree_distances[i] / gcd) - 1;
	}

	cout << cnt;
	return 0;
}