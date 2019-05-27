#include <iostream>
#include <vector>

using namespace std;

void add(vector<int>& v, int num);
int pop(vector<int>& v);
bool isUnique(vector<int>& v);
void print(vector<int>&);

int main()
{
	vector<int> vec;

	add(vec, 1);
	add(vec, 2);
	add(vec, 3);
	add(vec, 4);

	print(vec);


	if (isUnique(vec))
		cout << "\n Stack is unique\n" << endl;
	else
		cout << "\n Stack is not unique\t" << endl;

	pop(vec);

	print(vec);

	system("pause");
	return 0;
}


void add(vector<int>& v, int num)
{
	v.push_back(num);
}
int pop(vector<int>& v)
{
	int numToDel = v.at(v.size() - 1);
	v.erase(v.end() - 1);
	return numToDel;
}

bool isUnique(vector<int>& v)
{
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
		for (vector<int>::iterator j = i + 1; j != v.end(); j++)
			if (*i == *j) return false;

	return true;
}
void print(vector<int> &v)
{
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
		cout << *i << " ";

	cout << endl;
}