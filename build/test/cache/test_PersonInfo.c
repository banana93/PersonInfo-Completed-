#include "unity.h"
#include "PersonInfo.h"


void setUp(void)

{

}



void tearDown(void)

{

}











void test_the_set_first_name_cannot_have_empty_string_if_empty_shall_return_0(void)

{

 int emptystring;

 PersonInfo EmptyString;

 emptystring = setFirstName(&EmptyString, "");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((emptystring)), (((void *)0)), (_U_UINT)21, UNITY_DISPLAY_STYLE_INT);

}



void test_the_set_first_name_must_within_alphabet_A_to_Z_if_smaller_than_65_shall_return_0(void)

{

 int name;

 PersonInfo nameinfo;

 name = setFirstName(&nameinfo, "&");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((name)), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_INT);

}



void test_the_set_first_name_must_within_alphabet_A_to_Z_if_greater_than_90_shall_return_0(void)

{

 int name;

 PersonInfo NameInfo;

 name = setFirstName(&NameInfo, "[");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((name)), (((void *)0)), (_U_UINT)37, UNITY_DISPLAY_STYLE_INT);

}



void test_the_set_first_name_must_within_alphabet_a_to_z_if_lesser_than_97_but_greater_than_90_shall_return_0(void)

{

 int name;

 PersonInfo checknameinfo;

 name = setFirstName(&checknameinfo, "_");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((name)), (((void *)0)), (_U_UINT)45, UNITY_DISPLAY_STYLE_INT);

}



void test_the_set_first_name_must_within_alphabet_a_to_z_if_greater_than_122_shall_return_0(void)

{

 int name;

 PersonInfo CheckNameInfo;

 name = setFirstName(&CheckNameInfo, "|");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((name)), (((void *)0)), (_U_UINT)53, UNITY_DISPLAY_STYLE_INT);

}



void test_the_set_first_name_array_size_cannot_exceed_21_if_exceed_return_0(void)

{

 int space;

 PersonInfo spaceinfo;

 space = setFirstName(&spaceinfo, "qwertyuiopasdfghjklzxcasd");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((space)), (((void *)0)), (_U_UINT)61, UNITY_DISPLAY_STYLE_INT);

}



void test_the_set_first_name_must_within_alphabet_A_to_Z_if_yes_return_1(void)

{

 int name;

 PersonInfo Alphabet;

 name = setFirstName(&Alphabet, "Samuel ");

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((name)), (((void *)0)), (_U_UINT)69, UNITY_DISPLAY_STYLE_INT);

}











void test_the_set_last_name_cannot_have_empty_string_if_empty_shall_return_0(void)

{

 int emptystring;

 PersonInfo EmptyString;

 emptystring = setLastName(&EmptyString, "");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((emptystring)), (((void *)0)), (_U_UINT)81, UNITY_DISPLAY_STYLE_INT);

}



void test_the_set_last_name_must_within_alphabet_A_to_Z_if_smaller_than_65_shall_return_0(void)

{

 int name;

 PersonInfo nameinfo;

 name = setLastName(&nameinfo, "&");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((name)), (((void *)0)), (_U_UINT)89, UNITY_DISPLAY_STYLE_INT);

}



void test_the_set_last_name_must_within_alphabet_A_to_Z_if_greater_than_90_shall_return_0(void)

{

 int name;

 PersonInfo NameInfo;

 name = setLastName(&NameInfo, "[");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((name)), (((void *)0)), (_U_UINT)97, UNITY_DISPLAY_STYLE_INT);

}



void test_the_set_last_name_must_within_alphabet_a_to_z_if_lesser_than_97_but_greater_than_90_shall_return_0(void)

{

 int name;

 PersonInfo checknameinfo;

 name = setLastName(&checknameinfo, "_");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((name)), (((void *)0)), (_U_UINT)105, UNITY_DISPLAY_STYLE_INT);

}



void test_the_set_last_name_must_within_alphabet_a_to_z_if_greater_than_122_shall_return_0(void)

{

 int name;

 PersonInfo CheckNameInfo;

 name = setLastName(&CheckNameInfo, "|");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((name)), (((void *)0)), (_U_UINT)113, UNITY_DISPLAY_STYLE_INT);

}



void test_the_set_last_name_array_size_cannot_exceed_21_if_exceed_return_0(void)

{

 int space;

 PersonInfo spaceinfo;

 space = setLastName(&spaceinfo, "qwertyuiopasdfghjklzxcasd");

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((space)), (((void *)0)), (_U_UINT)121, UNITY_DISPLAY_STYLE_INT);

}



void test_the_set_last_name_must_within_alphabet_A_to_Z_if_yes_return_1(void)

{

 int name;

 PersonInfo Alphabet;

 name = setLastName(&Alphabet, "Samuel ");

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((name)), (((void *)0)), (_U_UINT)129, UNITY_DISPLAY_STYLE_INT);

}











void test_setAge_given_131_should_return_0(void)

{

 int age;

 PersonInfo AgeInfo;

 age = setAge(&AgeInfo, 131);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((age)), (((void *)0)), (_U_UINT)141, UNITY_DISPLAY_STYLE_INT);



}



void test_setAge_given_negative_1_should_return_0(void)

{

 int age;

 PersonInfo AgeInfo;

 age = setAge(&AgeInfo, -1);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((age)), (((void *)0)), (_U_UINT)150, UNITY_DISPLAY_STYLE_INT);

}



void test_setAge_given_23_should_return_1(void)

{

 int age;

 PersonInfo AgeInfo;

 age = setAge(&AgeInfo, 23);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((age)), (((void *)0)), (_U_UINT)158, UNITY_DISPLAY_STYLE_INT);

}











void test_height_given_4_should_return_0(void)

{

 int heightresult;

 PersonInfo HeightInfo;

 heightresult = setHeight(&HeightInfo, 4);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((heightresult)), (((void *)0)), (_U_UINT)170, UNITY_DISPLAY_STYLE_INT);

}



void test_height_given_negative_1_should_return_0(void)

{

 int heightresult;

 PersonInfo HeightInfo;

 heightresult = setHeight(&HeightInfo, -1);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((heightresult)), (((void *)0)), (_U_UINT)178, UNITY_DISPLAY_STYLE_INT);

}



void test_height_given_1_should_return_1(void)

{

 int heightresult;

 PersonInfo HeightInfo;

 heightresult = setHeight(&HeightInfo, 1.1);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((heightresult)), (((void *)0)), (_U_UINT)186, UNITY_DISPLAY_STYLE_INT);

}















void test_telephone_number_smaller_than_10000000_should_return_0(void)

{

 int telnumber;

 PersonInfo TelInfo;

 telnumber = setTelephone(&TelInfo, 9999);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((telnumber)), (((void *)0)), (_U_UINT)200, UNITY_DISPLAY_STYLE_INT);

}



void test_telephone_number_greater_than_99999999_should_return_0(void)

{

 int tel;

 PersonInfo telinfo;

 tel = setTelephone(&telinfo, 100000000);

 UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((tel)), (((void *)0)), (_U_UINT)208, UNITY_DISPLAY_STYLE_INT);

}



void test_telephone_number_if_within_the_range_of_10000000_and_99999999_should_return_1(void)

{

 int tel;

 PersonInfo telinfo;

 tel = setTelephone(&telinfo, 12345678);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((tel)), (((void *)0)), (_U_UINT)216, UNITY_DISPLAY_STYLE_INT);

}
