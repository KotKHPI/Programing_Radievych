int main() {
	int k = 3;
	int m = 2;
	int n = 1;
	int temp;

	if (k > m) {
	temp = k;
	k = m;
	m = temp;
}
	if (k > n) {
	temp = k;
	k = n;
	n = temp;
}
	if (m > n) {
	temp = m;
	m = n;
	n = temp;
}
	return 0;
}
