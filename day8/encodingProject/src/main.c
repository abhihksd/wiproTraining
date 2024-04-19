#include<utility.h>
int main(int argc, char* argv)
{
    char* encode_string=encoding(argv[1]);
    display(encode_string);
    return 0;
}