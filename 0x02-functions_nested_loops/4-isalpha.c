#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @k: the character to be checked
 * Return: 1 if k is a letter, 0 otherwise
*/
int _isalpha(int k)
{
	return ((k >= 'a' && k <= 'z') || (k >= 'A' && k <= 'Z'));
}
