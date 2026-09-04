#include "ps4.h"

int _main(struct thread *td) {
    UNUSED(td);

    initKernel();
    initLibc();

    system("cp /data/bluesphere/acc1.txt /data/bluesphere/bluesphere.txt");

    return 0;
}

