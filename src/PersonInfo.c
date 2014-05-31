#include "stdio.h"
#include "PersonInfo.h"

/*
Set the first name

Input :
	info is  a pointer to person's info
	name contains the first name
Return :
	0 to indicate failure
	1 to indicate success
	
Description:
	In this function, the first name is tested so that it does not have empty strings,
	it only regconize alphabet (a to z, A to Z, and space only) and the names must be 
	in 20 characters long each.
	
*/
int setFirstName(PersonInfo *info, char *name)
{
		if(*name == '\0') // if the name is the terminator then it is empty then return 0
		{
			return 0; // return 0
		}
		else
		{
			int count = 0; // initialize counter for testing the size of the string 
			for(*name; *name != '\0'; name++) // for loop, when *name is not terminator it will keep loop
			{
				count++; // counter increment 
					
				if(*name != 32) // if name is not space (ASCII 32) 
				{
					if((*name < 65 || *name > 90) && (*name < 97 || *name > 122)) // Check if the name has character A to Z or not (ASCII 65 to ASCII 90) and a to z or not (ASCII 97 to ASCII 122) if its out of range then return 0
					{
						return 0; // return 0
					}
				}
			}
			
			if(count > 20) // counter is used to check whether the size of the array exceed the size 20, if it exceed then return 0
			{
				return 0; // return 0
			}
			else
			{
				return 1; // return 1
			
			}
		}
}

/*
Set the last name

Input :
	info is  a pointer to person's info
	name contains the last name
Return :
	0 to indicate failure
	1 to indicate success
	
Description:
	In this function, the last name is tested so that it does not have empty strings,
	it only regconize alphabet (a to z, A to Z, and space only) and the names must be 
	in 20 characters long each.
	
*/

int setLastName(PersonInfo *info, char *name)
{
	if(*name == '\0') // if the name is the terminator then it is empty then return 0
		{
			return 0; // return 0
		}
		else
		{
			int count = 0; // initialize counter for testing the size of the string 
			for(*name; *name != '\0'; name++) // for loop, when *name is not terminator it will keep loop
			{
				count++; // counter increment 
					
				if(*name != 32) // if name is not space (ASCII 32) 
				{
					if((*name < 65 || *name > 90) && (*name < 97 || *name > 122)) // Check if the name has character A to Z or not (ASCII 65 to ASCII 90) and a to z or not (ASCII 97 to ASCII 122) if its out of range then return 0
					{
						return 0; // return 0
					}
				}
			}
			
			if(count > 20) // counter is used to check whether the size of the array exceed the size 20, if it exceed then return 0
			{
				return 0; // return 0
			}
			else
			{
				return 1; // return 1
			
			}
		}
}

/* 
Set Age

Input: 
	info is a pointer to person's info
	age is a variable that contains the value of age 
	
Return:
	0 to indicate failure	
	1 to indicate success
	
Description:
	In this function, the value of age cannot exceed 130 and
	cannot have negative value.
*/

int setAge(PersonInfo *info, int age)
{
	info->age = age; // assign the value of age into the age inside the structure age variable
	if((info->age) > 130) // if age is greater than 130 return 0
	{
		return 0; // return 0
	}
	else if((info->age) < 0) // if age is lesser than 0 return 0
	{
		return 0; // return 0
	}
	else
	{
		return 1; // return 1
	}
}

/*
Set Height

Input:
	info is a pointer to person's info
	height contains the value of the height
	
Return:
	0 to indicate failure
	1 to indicate success
	
Description:
	In this function, the value of height cannot exceed 3
	and the value cannot have negative value.

*/
int setHeight(PersonInfo *info, float height)
{
	info->height = height; // assign the value of height into the structure height variable
	if((info->height) > 3) // height value cannot exceed 3
	{
		return 0; // return 0
	}
	else if((info->height) < 0) // height cannot have negative value
	{
		return 0; // return 0
	}
	else
	{
		return 1; // return 1
	}
}

/*
Set Telephone

Input:
	info is a pointer to person's info
	telephone is a long integer that contains the value of the telephone number
	
Return:
	0 to indicate failure
	1 to indicate success
	
Description:
In this function, the telephone number must have only 8 digits of numbers
and it cannot have digit 0 in front of every telephone number.
*/
int setTelephone(PersonInfo *info, unsigned long int telephone)
{
	info->telephone = telephone; // assign the value of telephone into the structure telephone variable
	if((info->telephone) < 10000000) // return 0 when the telephone number is lesser than 100000000 if it is lesser means that the number digit does not have eight digits and to make sure the first digit is not start with 0
	{
		return 0; // return 0
	}
	else if((info->telephone) > 99999999) // return 0 when the telephone number exceed 99999999
	{
		return 0; // return 0
	}
	else
	{
		return 1; // return 1
	}
	
}


