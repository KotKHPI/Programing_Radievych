int main() {
	float x = -0.2;
	float y;

	if (x <= -1) { //1 графік ф-ції
	y = -x -1;
}
	if (x > -1 && x <= 0) { 
	y = x + 1;
}
	if (x > 0 && x < 1) {
	y = -x + 1;
}
	if (x >= 1) {
	y = x - 1;
}

	return 0;
}
