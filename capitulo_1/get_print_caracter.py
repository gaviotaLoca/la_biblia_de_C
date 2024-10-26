#!/usr/bin/env python3 

# Me parece que en Python el valor EOF no existe.
# Podemos usar excepcion EOFError

try:
    while True: print(input())
except EOFError:
    pass

