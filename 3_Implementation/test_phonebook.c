#include "unity.h"

#define PROJECT_NAME  "phone_book"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for phone_book
 * 
 */
extern void test_phonebook();

/* Required by the unity test framework */
void setUp(void)
{
}

/* Required by the unity test framework */
void tearDown(void)
{
}

/* Start of the application test */
int main(void)
{
    /* Initiate the Unity Test Framework */
    UnityBegin(NULL);

    /* Run Test functions */
    RUN_TEST(test_phonebook);
    
     /* Close the Unity Test Framework */
    return (UnityEnd());
}