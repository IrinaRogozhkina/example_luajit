CFLAGS = -I/usr//include/luajit-2.0
LDFLAGS = -L/usr//lib -lluajit-5.1 -lm -ldl

script: script.o
	$(CC) script.o $(LDFLAGS) -lm -ldl -o script

script.o: script.c
	$(CC) $(CFLAGS) script.c -c -o script.o

clean:
	rm -f script.o script

.PHONY: clean
