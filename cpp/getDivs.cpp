vector<int> getDivs(int n) {
	if (n == 0) return vector<int> {};
	else if (n == 1) return vector<int> {1};
	else if (n < 0) n = -n;

	vector<int> divs{ 1, n };

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i != 0) continue;

		divs.push_back(i);
		if (n / i != i) divs.push_back(n / i);
	}

	sort(divs.begin(), divs.end());
	return divs;
}