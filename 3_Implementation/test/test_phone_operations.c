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
void test_name();

/**
 * @brief Testing function for search
 * 
 */
void test_search();

/**
 * @brief Testing function for list
 * 
 */
void test_list();

/**
 * @brief Testing function for modify
 * 
 */
void test_modify();

/**
 * @brief Testing function for delete
 * 
 */
void test_delete();

/**
 * @brief Testing function for exit
 * 
 */
void test_exit();

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
    RUN_TEST(test_name);
    RUN_TEST(test_search);
    RUN_TEST(test_list);
    RUN_TEST(test_modify);
    RUN_TEST(test_delete);
    RUN_TEST(test_exit);
    RUN_TEST(test_password);
    RUN_TEST(test_menu);

    /* Close the Unity Test Framework */
    return UNITY_END;
}