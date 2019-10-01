/**
* _atoi - check the code for Holberton School students.
*@s: character
* Return: Always 0.
*/
int _atoi(char *s)
{
	int l;
	int i, c, m;
	int ok;

	c = 0;
	i = 0;
	m = 1;
	l = 0;
	ok = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	while (i < l && ok == 0)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			c = c * 10 + (s[i] - '0');
				if (s[i + 1] >= '0' && s[i + 1] <= '9')
					ok = 0;
				else
					ok = 1;
		}
		if (s[i] == '+')
		{
			m = m * 1;
		}
		else if (s[i] == '-')
		{
			m = m * -1;
		}
		i++;
	}
return (c * m);
}

