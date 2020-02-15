#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

vector<int> rgb();
string format_rgb(vector<int> rgb);
string rgb_to_hex(vector<int> rgb);

int main() {
	cout << format_rgb(rgb()) << endl;

	return 0;
}

vector<int> rgb() {
	vector<int> rgb_arr(3);

	srand(time(NULL));
	
	rgb_arr[0] = rand() % 256;
	rgb_arr[1] = rand() % 256;
	rgb_arr[2] = rand() % 256;

	return rgb_arr;
}

string format_rgb(vector<int> rgb) {
	string formated = "rgb(";
	formated.append(to_string(rgb[0]));
	formated.append(", ");
	formated.append(to_string(rgb[1]));
	formated.append(", ");
	formated.append(to_string(rgb[2]));
	formated.append(")");

	return formated;
}
