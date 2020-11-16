#define R 5
#define PI 3.14
int main()
{
	char command = 's';  // вибір команди
	float l = 0;
	float s = 0;
	float v = 0;
	float result;
switch(command) {
	case 'l' :
	l = 2 * PI * R;
	result = l;
	break;  //при виборі команди "l" буде виконуватися така дія
	case 's' :
	s = PI * R * R;
	result = s;
	break; // при виборі команди "s" буде виконуватися така дія
	case 'v' :
	v = 4/3 * PI* R * R  * R;
	result = v;
	break; // при виборі команди "v" буде виконуватися така дія
}
	return 0;
}
