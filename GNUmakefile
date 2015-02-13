
SUBDIRS := emodel IO utils

GATELIBDIR := lib

GATEINCDIR := include

GATEDOCDIR := doc


.phony: all clean

all:
	@mkdir -p $(GATELIBDIR)
	@mkdir -p $(GATEINCDIR)
	@for i in $(SUBDIRS); do ( cd $(GATEINCDIR) && ln -sf ../$$i/*.h ./) || exit $$?; done
	@for i in $(SUBDIRS); do ( echo "" && echo "Compiling $$i..." && cd $$i && $(MAKE) ) || exit $$?; done

clean:
	@for i in $(SUBDIRS); do ( echo "" && echo "Cleaning $$i..." && cd $$i && $(MAKE) clean ) || exit $$?; done
	@rm -f $(GATELIBDIR)/lib/lib*.so

doxygen:
	@echo 'dOxygenising GATE...'
	@doxygen $(GATEDOCDIR)/doxygenGATE.script
	@ln -sf $(GATEDOCDIR)/dOxygen/html/index.html doxygenisedGATE.html	
