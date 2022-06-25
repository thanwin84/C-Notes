int getLenght(char name[]) {
	int count = 0;
	for (int i = 0; name[i] != '\0'; i++) {
		count++;
	}
	return count;
}

int main() {
	char name[20];
	cout << "Enter your name: " << endl;
	// if we put space, tab, cin won't take that input
	cin >> name;
	// as soon as it sees null char, the iteration will stop
	//name[2] = '\0';
	cout << "your name is " << name << endl;
	cout << getLenght(name);
	return 0;
}
