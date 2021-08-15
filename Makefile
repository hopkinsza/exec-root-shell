#
# SPDX-License-Identifier: 0BSD
#

PROG = main
SRCS = main.c

CFLAGS = -Wall


.PHONY: clean

all: $(PROG)

$(PROG): $(SRCS)

clean:
	@rm -f main
	@echo cleaned
