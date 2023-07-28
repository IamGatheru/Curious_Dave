#ifndef _ex22_h
#define _ex22_h

//Makes THE_SIZE in ex22.c available to other .c files
//

extern intTHE_SIZE;

//Gets and sets an internal static variable in ex22.c

int get_age(); //this is an accessor function which basically accesses protected members.
void set_age(int age);

//Updates a static variable that's inside update_ratio
double update_ratio(double ratio);

void print_size();

#endif
