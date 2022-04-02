/**
 * @file phone_operations.h
 * @author Sridharan K V (kvsridharan04@gmail.com)
 * @brief Header file for Phone book Application
 * @version 0.1
 * @date 2022-04-04
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _PHONE_BOOK_OPERATIONS_H_
#define _PHONE_BOOK_OPERATIONS_H_
/**
 * @brief prints the input name
 * @return Text file generated with user input name
 */
void namefun();
/**
 * @brief the name of the person you want to see the detail
 * @return text file of the searched name
 */
void searchfun();
/**
 * @brief lists the phonebook data
 * @return text file of data stored
*/

void listfun();
/**
 * @brief modify the input data
 * @return the modified valuew
*/
void modifyfun();
/**
 * @brief delete the phonebook data
 */
    void deletefun();
/** @brief retruns to main page
 
 */
    void exitfun();
    /**
 * @brief verifying password from the user
 * 
 */
    void password(void);
/**
 * @brief show menu options 
 */
    void menu();
    
#endif /* #define _PHONE_BOOK_H_ */




