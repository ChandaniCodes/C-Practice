/*
    -> structure is a user define datatype.
    -> structure is collection of similar or dissimilar elements
    -> structure is a way to group of variables.
    -> structure is used to create datatype.
*/

#include <iostream>
using namespace std;
#include <string.h>

// global definiation of structure
struct book
{
    int bookId;
    char title[10];
    float price;
} b2;

// book b2; global variable

int main()
{
    /* local definiation of structure
    struct book
    {
        int bookId;
        char title[10];
        float price;
    };
    */
    system("clear");
    // creating or declaring variable of book datatype
    struct book b1; /* struct is optional in c++ but manadatory in c. b1 is local variable & will consume 16 bytes memory */
    b1.bookId = 1;
    strcpy(b1.title, "c++");
    b1.price = 200;

    b2 = b1; // copy b1 into b2
    book b3 = {3, "java", 300};
    return 0;
}
