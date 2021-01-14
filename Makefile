SUBDIRS := $(wildcard */.)
SUBOS := $(wildcard */built-in.o)

clean all : $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) -C $@ $(MAKECMDGOALS)

link : $(SUBOS)
	ld -r -o built-in.o $(SUBOS)
	clang built-in.o -o intools -lstdc++

.PHONY: $(TOPTARGETS) $(SUBDIRS)

