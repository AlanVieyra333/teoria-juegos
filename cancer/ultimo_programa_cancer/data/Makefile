start:
	bash build.sh
	make clean

run: build
	./out.a

build:
	gcc -o out.a *.c

clean:
	rm -rf **/*.a