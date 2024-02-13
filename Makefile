DIR=KHFL-reverse-chall

compile: exe1.c compile2
	gcc -O3 -Wall -Wextra -fstack-protector-all -static -fvisibility=hidden -static -s exe1.c -o exe1
compile2: exe2.c
	gcc -O3 -Wall -Wextra -fstack-protector-all -static -fvisibility=hidden -static -s exe2.c -o exe2
archive:
	mkdir $(DIR)
	cp exe1 exe2 $(DIR)
	tar czvf $(DIR).tar.gz $(DIR)
	rm -r $(DIR)
