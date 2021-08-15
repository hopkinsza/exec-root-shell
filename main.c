/*
 * SPDX-License-Identifier: 0BSD
 */

#include <err.h>
#include <grp.h>
#include <unistd.h>

#define DESIRED_SHELL "/bin/bash"

int
main(int argc, char *argv[])
{
	if (setuid(0) == -1)
		err(1, "setuid");
	if (setgid(0) == -1)
		err(1, "setgid");
	if (setgroups(0, (gid_t *)NULL) == -1)
		err(1, "setgroups");

	execl(DESIRED_SHELL, DESIRED_SHELL, (char *)0);
	execl("/bin/sh", "/bin/sh", (char *)0);
	err(1, "/bin/sh");
}
