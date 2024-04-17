#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main(void)
{
	int pid = getpid();
	int gpid = getgpid();
	
	printf(1, "My student id is 2020005996\n");
	printf(1, "My pid is %d\n", pid);
	printf(1, "My gpid is %d\n", gpid);

	exit();
}
