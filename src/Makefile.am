MAINTAINERCLEANFILES = Makefile.in

AM_CFLAGS = -W -Wall -Werror -g

lib_LTLIBRARIES = libem2.la

EMHEADERS = \
  em2.h
  
EM_FILES = \
  em2.c \
  $(EMHEADERS)

installed_headersdir = $(prefix)/include/em2
installed_headers_DATA = $(EMHEADERS)

libem2_la_SOURCES = $(EM_FILES)

libem2_la_LIBADD = 
libem2_la_LDFLAGS = -version-info 1 0 0
libem2_la_LIBTOOLFLAGS =