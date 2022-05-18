#include <iostream>
#include <string>

using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main(int argc, char *argv[]) {

    if (argc < 2) {
        cerr << "No program parameters provided !" << endl;
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < argc; i++)
        printf("argv[%d] = %s\n", i, argv[i]);

    exit(EXIT_SUCCESS);
}
