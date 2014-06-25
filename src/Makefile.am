bin_PROGRAMS = hello

LDFLAGS = -Wall -no-undefined
CFLAGS  = -Wall

hello_SOURCES = main.c

DEFAULT_INCLUDES = \
	-I$(top_srcdir)/include

hello_LDADD = \
	$(top_builddir)/lib/libhello.la
