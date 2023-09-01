#!/bin/bash
(ar r liball.a && gcc -c *.c && ar r liball.a *.o)
