MAINTAINERCLEANFILES = Makefile.in

AM_CFLAGS = -W -Wall -Werror -g

lib_LTLIBRARIES = libeventmachine.la

EMHEADERS = \
  eventmachine.h
  
EM_FILES = \
  eventmachine.c \
  $(EMHEADERS)

installed_headersdir = $(prefix)/include/eventmachine
installed_headers_DATA = $(EMHEADERS)

libeventmachine_la_SOURCES = $(EM_FILES)

libeventmachine_la_LIBADD = 
libeventmachine_la_LDFLAGS = -version-info 1 0 0
libeventmachine_la_LIBTOOLFLAGS =