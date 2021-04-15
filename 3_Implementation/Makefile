PROJECT_NAME = Transformer_cost_estimation
UNIT_TEST_NAME=TEST_$(PROJECT_NAME)
TO_DO =  SRC/cost.c  SRC/display.c SRC/efficiency.c SRC/energy_copper.c SRC/energy_iron.c SRC/energy_output.c SRC/optimum_load.c unity/unity.c  
UNIT_TEST_CASE= Test/test.c unity/unity.c
CODE_COVERAGE_NAME=coverage_$(PROJECT_NAME)
#To check whether the OS is windows or Liux, based on that extensions are set
ifdef OS
	RM = del /q
	FixPath=$(subst /,\,$1)
	EXEC=exe
	editor=notepad
else
	ifeq ($(shell uname), Linux)
		RM=rm -rf
		FixPath=$1
			EXEC=out
			editor=cat
	endif
endif

#Makefile will not run target commands while the file with that names already exists. To override, use PHONY
.PHONY : all test coverage run clean doc

$(PROJECT_NAME) : $(SRC) 
	gcc project.c  -I -c $(TO_DO) -lm -o $(call  FixPath,$(PROJECT_NAME).$(EXEC))
run: $(PROJECT_NAME)
	./$(PROJECT_NAME).$(EXEC)
test:
	gcc Test/test.c -I -c $(TO_DO) -lm -o Test/$(UNIT_TEST_NAME).$(EXEC)
	./Test/$(UNIT_TEST_NAME).$(EXEC)
coverage:$(SRC)
		gcc -fprofile-arcs -ftest-coverage project.c -I -c $(TO_DO) -lm -o $(CODE_COVERAGE_NAME).$(EXEC)
		./$(CODE_COVERAGE_NAME).$(EXEC)
		gcov -a project.c
		$(editor) project.c.gcov	
clean:
	$(RM) *.$(EXEC)
	$(RM) *.gcn
	$(RM) *.gcov
	$(RM) *.gcda
	$(RM) *.gcno
