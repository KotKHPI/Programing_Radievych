#define R 5
#define PI 3.14
int main()
{
	char command = 'l';
	float result;
switch(command) {
	case 'l' : 2 * PI * R; break;
	case 's' : PI * R * R; break;
	case 'v' : 4/3 * PI* R * R  * R; break;
}
	return 0;
}
