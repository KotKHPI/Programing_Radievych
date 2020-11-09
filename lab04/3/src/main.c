int main() { // суть завдяння виконання умови k < m < n
	int k = 3;
	int m = 2;
	int n = 1;
	int temp; // вільна змінна

	if (k > m) { // змінемо місцями m i k
	temp = k;
	k = m;
	m = temp;
}
	if (k > n) { // змінемо місцями n i k
	temp = k;
	k = n;
	n = temp;
}
	if (m > n) { // змінемо місцями n i m
	temp = m;
	m = n;
	n = temp;
}
	return 0;
}
