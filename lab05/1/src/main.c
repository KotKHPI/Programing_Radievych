int main() {
	int a[2] = {3, 10};
	while (a[0] != a[1]) {
		if (a[0] > a[1]) {
		a[0] = a[0] - a[1];
		} else {
		a[1] = a[1] - a[0];
		}
	} //a[0] - це НСД
	return 0;
}
