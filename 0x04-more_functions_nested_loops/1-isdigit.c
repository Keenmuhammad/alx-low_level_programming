#include "main.h"

/**
<<<<<<< HEAD
 *_isdigit - checks wether a number passed as an argument is digit number
 * @value: argument to be checked
 * * Return: returns 1 if successful or 0 if otherwise
 **/
=======
* _isdigit - checks wether a number passsed as an argument is digit number
* @value: argument to be checked
* Return: return 1 if successful or 0 if otherwise
*/
>>>>>>> d1041ab536ff0c3f875497b1bdf30631963366b3
int _isdigit(int value)
{
	if (value >= '0' && value <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}