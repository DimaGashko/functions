template <typename T>
T prompt(const char label[]) {
	cout << label;

	while (true) {
		T val;
		cin >> val;

		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Wrong. Try again: ";
		}
		else {
			cin.ignore(32767, '\n');
			return val;
		}

	}

}