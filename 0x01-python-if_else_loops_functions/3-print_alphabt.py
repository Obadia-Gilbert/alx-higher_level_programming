#!/usr/bin/python3
for letter in range(97, 123):
    if chr(letter) not in 'qe':
        print("{}".format(chr(letter)), end="")
