PROJ = gen-input-data.a
MAIN = gen-input-data.c

run: $(PROJ)
	./$(PROJ)

$(PROJ): $(MAIN)
	gcc -o $@ $<

clean:
	rm -rf $(PROJ) *.a **/*.a *.o **/*.o debil-* medio-* fuerte-*