DIR_SIM=CM_IS_simulation
DIR_DATA=$(DIR_SIM)/data
EXEC_STATISTICS=./util/statistics.py
FORCES=fuerte-fuerte fuerte-medio fuerte-debil medio-fuerte medio-medio medio-debil debil-fuerte debil-medio debil-debil

#all: data $(FORCES)
#	./start-sim.sh
all: data $(FORCES)

$(FORCES): %:
	cd $(DIR_SIM) && make strength=$@
	python3 $(EXEC_STATISTICS) $@

data:
	cd $(DIR_DATA) && make

clean:
	rm -rf statistics
	cd $(DIR_SIM) && make clean
	cd $(DIR_DATA) && make clean

.PHONY: all data clean $(FORCES)