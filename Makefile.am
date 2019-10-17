SUBDIRS = data src docs

DISTCHECK_CONFIGURE_FLAGS =								\
	--enable-gtk-doc								\
	--with-hwdbdir=$$dc_install_base/$(hwdbdir)					\
	--with-systemdsystemunitdir=$$dc_install_base/$(systemdsystemunitdir)

EXTRA_DIST = README.md
