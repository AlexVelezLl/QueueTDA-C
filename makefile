bin/cola: obj/cola.o obj/main.o
	gcc -fsanitize=address,undefined $^ -o $@ -lm

obj/main.o: src/main.c include/
	gcc -c -Wall -I include/ $< -o $@

obj/cola.o: src/cola.c include/
	gcc -Wall -I include/ -c $< -o $@

clean:
	rm obj/*
	rm bin/*
