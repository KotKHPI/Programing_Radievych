int main() {
	float x = -0.4f;
	float y;
	if (x <= -1) {
	y = -1/x;
}
	if (x > -1 && x <= 1) {
	y = x*x;
}
	if (x > 1){
	y = 1;
}
	return 0;
}
