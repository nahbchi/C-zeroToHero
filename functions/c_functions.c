#include <stdio.h>
#include <stdbool.h> 
#define MAX_IDS 32
#define MAX_EMPLOYEES 1000
struct employee_t{
    int id;
    char firstname [64];
    char lastname [64];
    float income.
    bool ismanager
};

union myunion_u{
    int x;
    char c;
    short s
}

int main(){

     struct employee_t employees[10];
     
     int i = 0

     for (i = 0; i < MAX_EMPLOYEES; i++){
          employees[i].income = 0;
          employees.ismanager = false;
    }
        prinf("%f\n", employees[10].income)

        union myunion_u u;
        u.x = 0x41424344;

        prinf("%hx %hhx\n", u.s, u.c);
    }