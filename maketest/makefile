src = $(wildcard *.c)
obj = $(patsubst %.c, %.o, $(src))

myArgs = -Wall -g


a.out: $(obj)
	gcc $^ -o $@ $(myArgs)
$(obj):%.o:%.c
	gcc -c $< -o $@ $(myArgs)
clean:
	-rm -rf $(obj) a.out
.PHONY: clean ALL

