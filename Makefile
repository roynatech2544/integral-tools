SUBDIRS := $(wildcard */.)
SUBOS := $(wildcard */built-in.o)

clean all : $(SUBDIRS)
$(SUBDIRS):
	$(MAKE) -C $@ $(MAKECMDGOALS)

link : $(SUBOS)
	clang $(SUBOS) -o intools -lstdc++

.PHONY: $(TOPTARGETS) $(SUBDIRS)

