
//Program1: To write some data on the standard output device (by default – monitor)
//Name the program file as “write.c”
#include<unistd.h>
int main()
{
write(1,"hello\n",6); //1 is the file descriptor, "hello\n" is the data, 6 is the count of characters in data
}
