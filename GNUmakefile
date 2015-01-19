
SUBDIRS := emodel

GATELIBDIR := lib

GATEDOCDIR := doc

.phony: all clean

all:
	@for i in $(SUBDIRS); do ( echo "" && echo "Compiling $$i..." && cd $$i && $(MAKE) ) || exit $$?; done

clean:
	@for i in $(SUBDIRS); do ( echo "" && echo "Cleaning $$i..." && cd $$i && $(MAKE) clean ) || exit $$?; done
	@rm -f $(GATELIBDIR)/lib/lib*.so

doxygen:
	@echo 'dOxygenising GATE...'
	@mkdir -p $(GATEDOCDIR)/dOxygenGATE
	@doxygen $(GATEDOCDIR)/doxygenGATE.script
	@ln -sf $(GATEDOCDIR)/dOxygenGATE/html/index.html doxygenisedGATE.html
