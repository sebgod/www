#-----------------------------------------------------------------------------#
# Copyright (C) 1998 University of Melbourne.
# This file may only be copied under the terms of the GNU General
# Public License - see the file COPYING in the Mercury distribution.
#-----------------------------------------------------------------------------#

HTML=	index.html 		\
	mcorba.html		\
	news.html 		\
	information.html 	\
	download.html 		\
	contact.html 

DIRS=contact download information mailing-lists
ROOT=.

#-----------------------------------------------------------------------------#

target: html

index.html: latest_news.inc newsdb.inc
news.html: latest_news.inc newsdb.inc
mcorba.html: mcorba_newsdb.inc

install: local_install

local_install:
	cp -a images $(INSTALL_WEBDIR)
	chgrp -R mercury $(INSTALL_WEBDIR)/images
	chmod -R g+w,a+r $(INSTALL_WEBDIR)/images


#-----------------------------------------------------------------------------#

include Makefile.common

#-----------------------------------------------------------------------------#
#-----------------------------------------------------------------------------#