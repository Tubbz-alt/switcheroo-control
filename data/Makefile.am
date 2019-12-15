systemdservicedir = $(systemdsystemunitdir)
systemdservice_in_files = switcheroo-control.service.in
systemdservice_DATA = switcheroo-control.service
switcheroo-control.service: switcheroo-control.service.in Makefile
	$(AM_V_GEN) $(SED) -e "s|\@libexecdir\@|$(libexecdir)|" $< > $@

dbusconfdir = $(sysconfdir)/dbus-1/system.d
dbusconf_DATA = net.hadess.SwitcherooControl.conf

hwdb_DATA = 30-pci-intel-gpu.hwdb

install-data-hook:
	$(SYSTEMD_HWDB) update || :

uninstall-hook:
	$(SYSTEMD_HWDB) update || :

CLEANFILES = switcheroo-control.service
EXTRA_DIST =				\
	$(dbusconf_DATA)		\
	$(hwdb_DATA)			\
	$(systemdservice_in_files)	\
	scripts/generate-hwdb.c		\
	scripts/Makefile
