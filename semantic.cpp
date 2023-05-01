#include "semantic.h"

void angles_operations() {
	double angles[3]{ (30 * PI / 180), (60 * PI / 180), (90 * PI / 180) };

	function<void(const double&)> cos = [](const double& angle) {  
		cout << "cos: " << cos(angle) << ' ';
	};

	function<void(const double&)> sin = [](const double& angle) {
		cout << "sin: " << sin(angle) << ' ';
	};

	function<void(const double&)> tan = [](const double& angle) {
		cout << "tan: " << tan(angle) << ' ';
	};

	vector<function<void(const double&)>> functions = { sin, cos };

	functions.push_back(tan);

	for (const auto& angle : angles) {
		cout << angle << ": ";
		for (const auto& function : functions) {
			function(angle);
		}
		cout << endl;
	}
}