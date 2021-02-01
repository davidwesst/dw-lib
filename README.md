## NOTES

1. Start with compiling a program myself
2. Import a library and use it in your code
2.      - CPP Library that produces ASCII art on the command line
3. Write my own library and 

## TODO

1. Compile your library with g++
2. Consume your library with dw-cli
    - write a main function cli, include SocialProfileReader headers

    g++ -c -fpic SocialProfileReader.cpp
    g++ -shared -o libdw.so SocialProfileReader.o
    g++ -Wall -I ../../dw-lib/src -L ../../dw-lib/src -Wl,-R ../../dw-lib/src  ../src/main.cpp -ldw
    