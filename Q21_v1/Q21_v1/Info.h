#pragma once
const int NAME_SIZE = 51, ADDR_SIZE = 51, PHONE_SIZE = 14; // named constants

class Info
{
private:

public:
    char name[NAME_SIZE]; // 51 bytes
    int age; // 4 bytes
    char address1[ADDR_SIZE]; // 51 bytes
    //  char address2[ADDR_SIZE]; // 51 bytes
    char phone[PHONE_SIZE]; // 14 bytes
};
