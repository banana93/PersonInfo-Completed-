#include "unity.h"
#include "PersonInfo.h"

void setUp(void)
{
}

void tearDown(void)
{
}

/* 
In these functions, it is used to test the *name it only accept alphabet a to z, A to Z and space.
It also must not have an empty string, and the size of it must not exceed 20 characters
*/
void test_the_set_first_name_cannot_have_empty_string_if_empty_shall_return_0(void)
{
	int emptystring; // initialize variable
	PersonInfo EmptyString; // typedef for new structure name
	emptystring = setFirstName(&EmptyString, ""); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(0, emptystring); // test whether the returned value is equal or not
}

void test_the_set_first_name_must_within_alphabet_A_to_Z_if_smaller_than_65_shall_return_0(void)
{
	int name; // initialize variable
	PersonInfo nameinfo; // typedef for new structure name
	name = setFirstName(&nameinfo, "&"); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(0, name); // test whether the returned value is equal or not
}

void test_the_set_first_name_must_within_alphabet_A_to_Z_if_greater_than_90_shall_return_0(void)
{
	int name; // initialize variable
	PersonInfo NameInfo; // typedef for new structure name
	name = setFirstName(&NameInfo, "["); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(0, name); // test whether the returned value is equal or not
}

void test_the_set_first_name_must_within_alphabet_a_to_z_if_lesser_than_97_but_greater_than_90_shall_return_0(void)
{
	int name; // initialize variable
	PersonInfo checknameinfo; // typedef for new structure name
	name = setFirstName(&checknameinfo, "_"); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(0, name); // test whether the returned value is equal or not
}

void test_the_set_first_name_must_within_alphabet_a_to_z_if_greater_than_122_shall_return_0(void)
{
	int name; // initialize variable
	PersonInfo CheckNameInfo; // typedef for new structure name
	name = setFirstName(&CheckNameInfo, "|"); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(0, name); // test whether the returned value is equal or not
}

void test_the_set_first_name_array_size_cannot_exceed_21_if_exceed_return_0(void)
{
	int space; // initialize variable
	PersonInfo spaceinfo; // typedef for new structure name
	space = setFirstName(&spaceinfo, "qwertyuiopasdfghjklzxcasd"); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(0, space); // test whether the returned value is equal or not
}

void test_the_set_first_name_must_within_alphabet_A_to_Z_if_yes_return_1(void)
{
	int name; // initialize variable
	PersonInfo Alphabet; // typedef for new structure name
	name = setFirstName(&Alphabet, "Samuel "); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(1, name); // test whether the returned value is equal or not
}

/* 
In these functions, it is used to test the *name it only accept alphabet a to z, A to Z and space.
It also must not have an empty string, and the size of it must not exceed 20 characters
*/
void test_the_set_last_name_cannot_have_empty_string_if_empty_shall_return_0(void)
{
	int emptystring; // initialize variable
	PersonInfo EmptyString; // typedef for new structure name
	emptystring = setLastName(&EmptyString, ""); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(0, emptystring); // test whether the returned value is equal or not
}

void test_the_set_last_name_must_within_alphabet_A_to_Z_if_smaller_than_65_shall_return_0(void)
{
	int name; // initialize variable
	PersonInfo nameinfo; // typedef for new structure name
	name = setLastName(&nameinfo, "&"); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(0, name); // test whether the returned value is equal or not
}

void test_the_set_last_name_must_within_alphabet_A_to_Z_if_greater_than_90_shall_return_0(void)
{
	int name; // initialize variable
	PersonInfo NameInfo; // typedef for new structure name
	name = setLastName(&NameInfo, "["); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(0, name); // test whether the returned value is equal or not
}

void test_the_set_last_name_must_within_alphabet_a_to_z_if_lesser_than_97_but_greater_than_90_shall_return_0(void)
{
	int name; // initialize variable
	PersonInfo checknameinfo; // typedef for new structure name
	name = setLastName(&checknameinfo, "_"); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(0, name); // test whether the returned value is equal or not
}

void test_the_set_last_name_must_within_alphabet_a_to_z_if_greater_than_122_shall_return_0(void)
{
	int name; // initialize variable
	PersonInfo CheckNameInfo; // typedef for new structure name
	name = setLastName(&CheckNameInfo, "|"); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(0, name); // test whether the returned value is equal or not
}

void test_the_set_last_name_array_size_cannot_exceed_21_if_exceed_return_0(void)
{
	int space; // initialize variable
	PersonInfo spaceinfo; // typedef for new structure name
	space = setLastName(&spaceinfo, "qwertyuiopasdfghjklzxcasd"); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(0, space); // test whether the returned value is equal or not
}

void test_the_set_last_name_must_within_alphabet_A_to_Z_if_yes_return_1(void)
{
	int name; // initialize variable
	PersonInfo Alphabet; // typedef for new structure name
	name = setLastName(&Alphabet, "Samuel "); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(1, name); // test whether the returned value is equal or not
}

/*
 In these function, it test the set age function so that the age
 does not younger than 0 and not older than 130 age.
*/
void test_setAge_given_131_should_return_0(void)
{
	int age; // initialize variable
	PersonInfo AgeInfo; // typedef for new structure name
	age = setAge(&AgeInfo, 131); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(0, age); // test whether the returned value is equal or not

}

void test_setAge_given_negative_1_should_return_0(void)
{
	int age; // initialize variable
	PersonInfo AgeInfo; // typedef for new structure name
	age = setAge(&AgeInfo, -1); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(0, age); // test whether the returned value is equal or not
}

void test_setAge_given_23_should_return_1(void)
{ 
	int age; // initialize variable
	PersonInfo AgeInfo; // typedef for new structure name
	age = setAge(&AgeInfo, 23); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(1, age); // test whether the returned value is equal or not
}

/*
In these function, it test the height and to make sure the height
does not lesser than 0 and not exceed 3.
*/
void test_height_given_4_should_return_0(void)
{
	int heightresult; // initialize variable
	PersonInfo HeightInfo; // typedef for new structure name
	heightresult = setHeight(&HeightInfo, 4); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(0, heightresult); // test whether the returned value is equal or not
}

void test_height_given_negative_1_should_return_0(void)
{
	int heightresult; // initialize variable
	PersonInfo HeightInfo; // typedef for new structure name
	heightresult = setHeight(&HeightInfo, -1); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(0, heightresult); // test whether the returned value is equal or not
}

void test_height_given_1_should_return_1(void)
{
	int heightresult; // initialize variable
	PersonInfo HeightInfo; // typedef for new structure name
	heightresult = setHeight(&HeightInfo, 1.1); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(1, heightresult); // test whether the returned value is equal or not
}


/*
In this two function is the test code for the telephone number, 
the telephone number must have 8 digit numbers, it must not have
value 0 in front of it.
*/ 
void test_telephone_number_smaller_than_10000000_should_return_0(void)
{
	int telnumber; // initialize variable
	PersonInfo TelInfo; // typedef for new structure name
	telnumber = setTelephone(&TelInfo, 9999); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(0,telnumber); // test whether the returned value is equal or not
}

void test_telephone_number_greater_than_99999999_should_return_0(void)
{
	int tel; // initialize variable
	PersonInfo telinfo; // typedef for new structure name
	tel = setTelephone(&telinfo, 100000000); // function call and assign the returned value to the variable
	TEST_ASSERT_EQUAL(0, tel);  // test whether the returned value is equal or not
}

void test_telephone_number_if_within_the_range_of_10000000_and_99999999_should_return_1(void)
{
	int tel;
	PersonInfo telinfo;
	tel = setTelephone(&telinfo, 12345678);
	TEST_ASSERT_EQUAL(1, tel);
}
