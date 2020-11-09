#define R 5
#define PI 3.14
int main()
{
	char command = 'l';  // вибір команди
	float result;
switch(command) {
	case 'l' : 2 * PI * R; break;  //при виборі команди "l" буде виконуватися така дія
	case 's' : PI * R * R; break; // при виборі команди "s" буде виконуватися така дія
	case 'v' : 4/3 * PI* R * R  * R; break; // при виборі команди "v" буде виконуватися така дія
}
	return 0;
}
