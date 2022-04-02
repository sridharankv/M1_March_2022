#include "unity.h"
#include "phone_operations.h"

#define PROJECT_NAME "phone_book"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for phone_book
 * 
 */

/**
 * @brief Testing function for name
 * 
 */
void test_namefun();

/**
 * @brief Testing function for search
 * 
 */
void test_searchfun();

/**
 * @brief Testing function for list
 * 
 */
void test_listfun();

/**
 * @brief Testing function for modify
 * 
 */
void test_modifyfun();

/**
 * @brief Testing function for delete
 * 
 */
void test_deletefun();

/**
 * @brief Testing function for exit
 * 
 */
void test_exitfun();

/**
 * @brief Testing function for password
 * 
 */
void test_password(void);

/**
 * @brief Testing function for menu
 * 
 */
void test_menu();

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_namefun);
    RUN_TEST(test_searchfun);
    RUN_TEST(test_listfun);
    RUN_TEST(test_modifyfun);
    RUN_TEST(test_deletefun);
    RUN_TEST(test_exitfun);
    RUN_TEST(test_password);
    RUN_TEST(test_menu);

    /* Close the Unity Test Framework */
    return UNITY_END;
}
