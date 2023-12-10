#include<iostream>
#include<cstring>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int i = -1, j = 0, pivot;
	char input[] = "2, 8, 7, 1, 3, 5, 6, 4";
	vector<int> input_item;
	char* p=strtok(input,", ");
	while (p != NULL)
	{
		input_item.resize(input_item.size() + 1);
		input_item[input_item.size() - 1] = *p-'0';
		p = strtok(NULL, ", ");
	}
	pivot = input_item[input_item.size() - 1];
	for (int k = 0; k < input_item.size(); k++, j++)
	{
		if (input_item[j] < pivot)
		{
			i++;
			int temp = input_item[i];
			input_item[i] = input_item[j];
			input_item[j] = temp;
		}
		if (k == input_item.size() - 1)
		{
			input_item[input_item.size() - 1] = input_item[i + 1];
			input_item[i + 1] = pivot;
		}
		for (int l = 0; l < input_item.size(); l++)
		{
			cout << input_item[l];
			if (l == input_item.size() - 1)
				cout << "\n";
			else
				cout << ", ";
		}
	}
    return 0;
}