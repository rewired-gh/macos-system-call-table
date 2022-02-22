| **NR** |             **name**             | **%x8** | **description**                                                |
| :----: | :------------------------------: | :-----: | :------------------------------------------------------------- |
|   0    |             syscall              |   0x0   | (not available)                                                |
|   1    |               exit               |   0x1   | (not available)                                                |
|   2    |               fork               |   0x2   | create a new process                                           |
|   3    |               read               |   0x3   | read input                                                     |
|   4    |              write               |   0x4   | write output                                                   |
|   5    |               open               |   0x5   | open or create a file for reading or writing                   |
|   6    |              close               |   0x6   | delete a descriptor                                            |
|   7    |              wait4               |   0x7   | wait for process termination                                   |
|   9    |               link               |   0x9   | make a hard file link                                          |
|   10   |              unlink              |   0xa   | remove directory entry                                         |
|   12   |              chdir               |   0xc   | change current working directory                               |
|   13   |              fchdir              |   0xd   | change current working directory                               |
|   14   |              mknod               |   0xe   | make a special file node                                       |
|   15   |              chmod               |   0xf   | change mode of file                                            |
|   16   |              chown               |  0x10   | change owner and group of a file                               |
|   18   |            getfsstat             |  0x12   | get list of all mounted file systems                           |
|   20   |              getpid              |  0x14   | get parent or calling process identification                   |
|   23   |              setuid              |  0x17   | set user and group ID                                          |
|   24   |              getuid              |  0x18   | get user identification                                        |
|   25   |             geteuid              |  0x19   | get user identification                                        |
|   26   |              ptrace              |  0x1a   | process tracing and debugging                                  |
|   27   |             recvmsg              |  0x1b   | receive a message from a socket                                |
|   28   |             sendmsg              |  0x1c   | send a message from a socket                                   |
|   29   |             recvfrom             |  0x1d   | receive a message from a socket                                |
|   30   |              accept              |  0x1e   | accept a connection on a socket                                |
|   31   |           getpeername            |  0x1f   | get address of connected peer                                  |
|   32   |           getsockname            |  0x20   | get socket name                                                |
|   33   |              access              |  0x21   | check accessibility of a file                                  |
|   34   |             chflags              |  0x22   | set file flags                                                 |
|   35   |             fchflags             |  0x23   | set file flags                                                 |
|   36   |               sync               |  0x24   | synchronize disk block in-core status with that on disk        |
|   37   |               kill               |  0x25   | send signal to a process                                       |
|   39   |             getppid              |  0x27   | get parent or calling process identification                   |
|   41   |               dup                |  0x29   | duplicate an existing file descriptor                          |
|   42   |               pipe               |  0x2a   | create descriptor pair for interprocess communication          |
|   43   |             getegid              |  0x2b   | get group process identification                               |
|   46   |            sigaction             |  0x2e   | software signal facilities                                     |
|   47   |              getgid              |  0x2f   | get group process identification                               |
|   48   |           sigprocmask            |  0x30   | manipulate current signal mask                                 |
|   49   |             getlogin             |  0x31   | get/set login name                                             |
|   50   |             setlogin             |  0x32   | get/set login name                                             |
|   51   |               acct               |  0x33   | enable or disable process accounting                           |
|   52   |            sigpending            |  0x34   | get pending signals                                            |
|   53   |           sigaltstack            |  0x35   | set and/or get signal stack context                            |
|   54   |              ioctl               |  0x36   | control device                                                 |
|   55   |              reboot              |  0x37   | reboot system or halt processor                                |
|   56   |              revoke              |  0x38   | revoke file access                                             |
|   57   |             symlink              |  0x39   | make symbolic link to a file                                   |
|   58   |             readlink             |  0x3a   | read value of a symbolic link                                  |
|   59   |              execve              |  0x3b   | execute a file                                                 |
|   60   |              umask               |  0x3c   | set file creation mode mask                                    |
|   61   |              chroot              |  0x3d   | change root directory                                          |
|   65   |              msync               |  0x41   | synchronize a mapped region                                    |
|   66   |              vfork               |  0x42   | deprecated system call to create a new process                 |
|   73   |              munmap              |  0x49   | remove a mapping                                               |
|   74   |             mprotect             |  0x4a   | control the protection of pages                                |
|   75   |             madvise              |  0x4b   | give advice about use of memory                                |
|   78   |             mincore              |  0x4e   | determine residency of memory pages                            |
|   79   |            getgroups             |  0x4f   | get group access list                                          |
|   80   |            setgroups             |  0x50   | set group access list                                          |
|   81   |             getpgrp              |  0x51   | get process group                                              |
|   82   |             setpgid              |  0x52   | set process group                                              |
|   83   |            setitimer             |  0x53   | get/set value of interval timer                                |
|   85   |              swapon              |  0x55   | (not available)                                                |
|   86   |            getitimer             |  0x56   | get/set value of interval timer                                |
|   89   |          getdtablesize           |  0x59   | get descriptor table size                                      |
|   90   |               dup2               |  0x5a   | duplicate an existing file descriptor                          |
|   92   |              fcntl               |  0x5c   | file control                                                   |
|   93   |              select              |  0x5d   | synchronous I/O                                                |
|   95   |              fsync               |  0x5f   | synchronize a file's in-core state with that on disk           |
|   96   |           setpriority            |  0x60   | get/set program scheduling priority                            |
|   97   |              socket              |  0x61   | create an endpoint for communication                           |
|   98   |             connect              |  0x62   | initiate a connection on a socket                              |
|  100   |           getpriority            |  0x64   | get/set program scheduling priority                            |
|  104   |               bind               |  0x68   | bind a name to a socket                                        |
|  105   |            setsockopt            |  0x69   | get and set options on sockets                                 |
|  106   |              listen              |  0x6a   | listen for connections on a socket                             |
|  111   |            sigsuspend            |  0x6f   | atomically release blocked signals and wait for interrupt      |
|  116   |           gettimeofday           |  0x74   | get/set date and time                                          |
|  117   |            getrusage             |  0x75   | get information about resource utilization                     |
|  118   |            getsockopt            |  0x76   | get and set options on sockets                                 |
|  120   |              readv               |  0x78   | read input                                                     |
|  121   |              writev              |  0x79   | write output                                                   |
|  122   |           settimeofday           |  0x7a   | get/set date and time                                          |
|  123   |              fchown              |  0x7b   | change owner and group of a file                               |
|  124   |              fchmod              |  0x7c   | change mode of file                                            |
|  126   |             setreuid             |  0x7e   | set real and effective user IDs                                |
|  127   |             setregid             |  0x7f   | set real and effective group ID                                |
|  128   |              rename              |  0x80   | change the name of a file                                      |
|  131   |              flock               |  0x83   | apply or remove an advisory lock on an open file               |
|  132   |              mkfifo              |  0x84   | make a fifo file                                               |
|  133   |              sendto              |  0x85   | send a message from a socket                                   |
|  134   |             shutdown             |  0x86   | shut down part of a full-duplex connection                     |
|  135   |            socketpair            |  0x87   | create a pair of connected sockets                             |
|  136   |              mkdir               |  0x88   | make a directory file                                          |
|  137   |              rmdir               |  0x89   | remove a directory file                                        |
|  138   |              utimes              |  0x8a   | set file access and modification times                         |
|  139   |             futimes              |  0x8b   | set file access and modification times                         |
|  140   |             adjtime              |  0x8c   | correct the time to allow synchronization of the system clock  |
|  142   |           gethostuuid            |  0x8e   | return a unique identifier for the current machine             |
|  147   |              setsid              |  0x93   | create session and set process group ID                        |
|  151   |             getpgid              |  0x97   | get process group                                              |
|  152   |           setprivexec            |  0x98   | (not available)                                                |
|  153   |              pread               |  0x99   | read input                                                     |
|  154   |              pwrite              |  0x9a   | write output                                                   |
|  155   |              nfssvc              |  0x9b   | NFS services                                                   |
|  157   |              statfs              |  0x9d   | get file system statistics                                     |
|  158   |             fstatfs              |  0x9e   | get file system statistics                                     |
|  159   |             unmount              |  0x9f   | mount or dismount a filesystem                                 |
|  161   |              getfh               |  0xa1   | get file handle                                                |
|  165   |             quotactl             |  0xa5   | manipulate filesystem quotas                                   |
|  167   |              mount               |  0xa7   | mount or dismount a filesystem                                 |
|  169   |              csops               |  0xa9   | (not available)                                                |
|  170   |         csops_audittoken         |  0xaa   | (not available)                                                |
|  173   |              waitid              |  0xad   | (not available)                                                |
|  177   |        kdebug_typefilter         |  0xb1   | (not available)                                                |
|  178   |       kdebug_trace_string        |  0xb2   | (not available)                                                |
|  179   |          kdebug_trace64          |  0xb3   | (not available)                                                |
|  180   |           kdebug_trace           |  0xb4   | (not available)                                                |
|  181   |              setgid              |  0xb5   | set user and group ID                                          |
|  182   |             setegid              |  0xb6   | set user and group ID                                          |
|  183   |             seteuid              |  0xb7   | set user and group ID                                          |
|  184   |            sigreturn             |  0xb8   | (not available)                                                |
|  186   |        thread_selfcounts         |  0xba   | (not available)                                                |
|  187   |            fdatasync             |  0xbb   | (not available)                                                |
|  188   |               stat               |  0xbc   | get file status                                                |
|  189   |              fstat               |  0xbd   | get file status                                                |
|  190   |              lstat               |  0xbe   | get file status                                                |
|  191   |             pathconf             |  0xbf   | get configurable pathname variables                            |
|  192   |            fpathconf             |  0xc0   | get configurable pathname variables                            |
|  194   |            getrlimit             |  0xc2   | control maximum system resource consumption                    |
|  195   |            setrlimit             |  0xc3   | control maximum system resource consumption                    |
|  196   |          getdirentries           |  0xc4   | get directory entries in a filesystem independent format       |
|  197   |               mmap               |  0xc5   | "allocate memory, or map files or devices into memory"         |
|  199   |              lseek               |  0xc7   | reposition read/write file offset                              |
|  200   |             truncate             |  0xc8   | truncate or extend a file to a specified length                |
|  201   |            ftruncate             |  0xc9   | truncate or extend a file to a specified length                |
|  202   |              sysctl              |  0xca   | (not available)                                                |
|  203   |              mlock               |  0xcb   | lock (unlock) physical pages in memory                         |
|  204   |             munlock              |  0xcc   | lock (unlock) physical pages in memory                         |
|  205   |             undelete             |  0xcd   | attempt to recover a deleted file                              |
|  216   |        open_dprotected_np        |  0xd8   | (not available)                                                |
|  217   |          fsgetpath_ext           |  0xd9   | (not available)                                                |
|  220   |           getattrlist            |  0xdc   | get file system attributes                                     |
|  221   |           setattrlist            |  0xdd   | set file system attributes                                     |
|  222   |        getdirentriesattr         |  0xde   | get file system attributes for multiple                        |
|  223   |           exchangedata           |  0xdf   | atomically exchange data between two files                     |
|  225   |             searchfs             |  0xe1   | search a volume quickly                                        |
|  226   |              delete              |  0xe2   | (not available)                                                |
|  227   |             copyfile             |  0xe3   | (not available)                                                |
|  228   |           fgetattrlist           |  0xe4   | get file system attributes                                     |
|  229   |           fsetattrlist           |  0xe5   | set file system attributes                                     |
|  230   |               poll               |  0xe6   | synchronous I/O multiplexing                                   |
|  234   |             getxattr             |  0xea   | get an extended attribute value                                |
|  235   |            fgetxattr             |  0xeb   | get an extended attribute value                                |
|  236   |             setxattr             |  0xec   | set an extended attribute value                                |
|  237   |            fsetxattr             |  0xed   | set an extended attribute value                                |
|  238   |           removexattr            |  0xee   | remove an extended attribute value                             |
|  239   |           fremovexattr           |  0xef   | remove an extended attribute value                             |
|  240   |            listxattr             |  0xf0   | list extended attribute names                                  |
|  241   |            flistxattr            |  0xf1   | list extended attribute names                                  |
|  242   |              fsctl               |  0xf2   | (not available)                                                |
|  243   |            initgroups            |  0xf3   | (not available)                                                |
|  244   |           posix_spawn            |  0xf4   | spawn a process                                                |
|  245   |              ffsctl              |  0xf5   | (not available)                                                |
|  247   |             nfsclnt              |  0xf7   | NFS client services                                            |
|  248   |              fhopen              |  0xf8   | open a file by file handle                                     |
|  250   |             minherit             |  0xfa   | control the inheritance of pages                               |
|  251   |              semsys              |  0xfb   | (not available)                                                |
|  252   |              msgsys              |  0xfc   | (not available)                                                |
|  253   |              shmsys              |  0xfd   | (not available)                                                |
|  254   |              semctl              |  0xfe   | control operations on a semaphore set                          |
|  255   |              semget              |  0xff   | obtain a semaphore id                                          |
|  256   |              semop               |  0x100  | atomic array of operations on a semaphore set                  |
|  258   |              msgctl              |  0x102  | (not available)                                                |
|  259   |              msgget              |  0x103  | (not available)                                                |
|  260   |              msgsnd              |  0x104  | (not available)                                                |
|  261   |              msgrcv              |  0x105  | (not available)                                                |
|  262   |              shmat               |  0x106  | map/unmap shared memory                                        |
|  263   |              shmctl              |  0x107  | shared memory control operations                               |
|  264   |              shmdt               |  0x108  | map/unmap shared memory                                        |
|  265   |              shmget              |  0x109  | get shared memory area identifier                              |
|  266   |             shm_open             |  0x10a  | open a shared memory object                                    |
|  267   |            shm_unlink            |  0x10b  | remove shared memory object                                    |
|  268   |             sem_open             |  0x10c  | initialize and open a named semaphore                          |
|  269   |            sem_close             |  0x10d  | close a named semaphore                                        |
|  270   |            sem_unlink            |  0x10e  | remove a named semaphore                                       |
|  271   |             sem_wait             |  0x10f  | lock a semaphore                                               |
|  272   |           sem_trywait            |  0x110  | lock a semaphore                                               |
|  273   |             sem_post             |  0x111  | unlock a semaphore                                             |
|  274   |           sysctlbyname           |  0x112  | (not available)                                                |
|  277   |          open_extended           |  0x115  | (not available)                                                |
|  278   |          umask_extended          |  0x116  | (not available)                                                |
|  279   |          stat_extended           |  0x117  | (not available)                                                |
|  280   |          lstat_extended          |  0x118  | (not available)                                                |
|  281   |          fstat_extended          |  0x119  | (not available)                                                |
|  282   |          chmod_extended          |  0x11a  | (not available)                                                |
|  283   |         fchmod_extended          |  0x11b  | (not available)                                                |
|  284   |         access_extended          |  0x11c  | (not available)                                                |
|  285   |              settid              |  0x11d  | (not available)                                                |
|  286   |              gettid              |  0x11e  | (not available)                                                |
|  287   |            setsgroups            |  0x11f  | (not available)                                                |
|  288   |            getsgroups            |  0x120  | (not available)                                                |
|  289   |            setwgroups            |  0x121  | (not available)                                                |
|  290   |            getwgroups            |  0x122  | (not available)                                                |
|  291   |         mkfifo_extended          |  0x123  | (not available)                                                |
|  292   |          mkdir_extended          |  0x124  | (not available)                                                |
|  293   |           identitysvc            |  0x125  | (not available)                                                |
|  294   |      shared_region_check_np      |  0x126  | (not available)                                                |
|  296   |       vm_pressure_monitor        |  0x128  | (not available)                                                |
|  297   |       psynch_rw_longrdlock       |  0x129  | (not available)                                                |
|  298   |      psynch_rw_yieldwrlock       |  0x12a  | (not available)                                                |
|  299   |       psynch_rw_downgrade        |  0x12b  | (not available)                                                |
|  300   |        psynch_rw_upgrade         |  0x12c  | (not available)                                                |
|  301   |         psynch_mutexwait         |  0x12d  | (not available)                                                |
|  302   |         psynch_mutexdrop         |  0x12e  | (not available)                                                |
|  303   |          psynch_cvbroad          |  0x12f  | (not available)                                                |
|  304   |         psynch_cvsignal          |  0x130  | (not available)                                                |
|  305   |          psynch_cvwait           |  0x131  | (not available)                                                |
|  306   |         psynch_rw_rdlock         |  0x132  | (not available)                                                |
|  307   |         psynch_rw_wrlock         |  0x133  | (not available)                                                |
|  308   |         psynch_rw_unlock         |  0x134  | (not available)                                                |
|  309   |        psynch_rw_unlock2         |  0x135  | (not available)                                                |
|  310   |              getsid              |  0x136  | get process session                                            |
|  311   |         settid_with_pid          |  0x137  | (not available)                                                |
|  312   |       psynch_cvclrprepost        |  0x138  | (not available)                                                |
|  313   |            aio_fsync             |  0x139  | (not available)                                                |
|  314   |            aio_return            |  0x13a  | retrieve return status of asynchronous I/O operation           |
|  315   |           aio_suspend            |  0x13b  | suspend until asynchronous I/O operations or timeout complete  |
|  316   |            aio_cancel            |  0x13c  | cancel an outstanding asynchronous I/O operation (REALTIME)    |
|  317   |            aio_error             |  0x13d  | retrieve error status of asynchronous I/O operation (REALTIME) |
|  318   |             aio_read             |  0x13e  | asynchronous read from a file (REALTIME)                       |
|  319   |            aio_write             |  0x13f  | asynchronous write to a file (REALTIME)                        |
|  320   |            lio_listio            |  0x140  | (not available)                                                |
|  322   |           iopolicysys            |  0x142  | (not available)                                                |
|  323   |          process_policy          |  0x143  | (not available)                                                |
|  324   |             mlockall             |  0x144  | (not available)                                                |
|  325   |            munlockall            |  0x145  | (not available)                                                |
|  327   |            issetugid             |  0x147  | is current process tainted by uid or gid changes               |
|  328   |         \_\_pthread_kill         |  0x148  | (not available)                                                |
|  329   |       \_\_pthread_sigmask        |  0x149  | (not available)                                                |
|  330   |           \_\_sigwait            |  0x14a  | (not available)                                                |
|  331   |     \_\_disable_threadsignal     |  0x14b  | (not available)                                                |
|  332   |      \_\_pthread_markcancel      |  0x14c  | (not available)                                                |
|  333   |       \_\_pthread_canceled       |  0x14d  | (not available)                                                |
|  334   |        \_\_semwait_signal        |  0x14e  | (not available)                                                |
|  336   |            proc_info             |  0x150  | (not available)                                                |
|  337   |             sendfile             |  0x151  | send a file to a socket                                        |
|  338   |              stat64              |  0x152  | get file status                                                |
|  339   |             fstat64              |  0x153  | get file status                                                |
|  340   |             lstat64              |  0x154  | get file status                                                |
|  341   |         stat64_extended          |  0x155  | (not available)                                                |
|  342   |         lstat64_extended         |  0x156  | (not available)                                                |
|  343   |         fstat64_extended         |  0x157  | (not available)                                                |
|  344   |         getdirentries64          |  0x158  | (not available)                                                |
|  345   |             statfs64             |  0x159  | get file system statistics                                     |
|  346   |            fstatfs64             |  0x15a  | get file system statistics                                     |
|  347   |           getfsstat64            |  0x15b  | (not available)                                                |
|  348   |        \_\_pthread_chdir         |  0x15c  | (not available)                                                |
|  349   |        \_\_pthread_fchdir        |  0x15d  | (not available)                                                |
|  350   |              audit               |  0x15e  | commit BSM audit record to audit log                           |
|  351   |             auditon              |  0x15f  | configure system audit parameters                              |
|  353   |             getauid              |  0x161  | retrieve audit user ID                                         |
|  354   |             setauid              |  0x162  | set audit indentifier                                          |
|  357   |          getaudit_addr           |  0x165  | retrieve audit session state                                   |
|  358   |          setaudit_addr           |  0x166  | set audit session state                                        |
|  359   |             auditctl             |  0x167  | configure system audit parameters                              |
|  360   |         bsdthread_create         |  0x168  | (not available)                                                |
|  361   |       bsdthread_terminate        |  0x169  | (not available)                                                |
|  362   |              kqueue              |  0x16a  | kernel event notification                                      |
|  363   |              kevent              |  0x16b  | kernel event notification                                      |
|  364   |              lchown              |  0x16c  | change owner and group of a file                               |
|  366   |        bsdthread_register        |  0x16e  | (not available)                                                |
|  367   |            workq_open            |  0x16f  | (not available)                                                |
|  368   |         workq_kernreturn         |  0x170  | (not available)                                                |
|  369   |             kevent64             |  0x171  | kernel event notification                                      |
|  370   |      \_\_old_semwait_signal      |  0x172  | (not available)                                                |
|  371   | \_\_old_semwait_signal_nocancel  |  0x173  | (not available)                                                |
|  372   |          thread_selfid           |  0x174  | (not available)                                                |
|  373   |              ledger              |  0x175  | (not available)                                                |
|  374   |            kevent_qos            |  0x176  | kernel event notification                                      |
|  375   |            kevent_id             |  0x177  | (not available)                                                |
|  380   |          \_\_mac_execve          |  0x17c  | (not available)                                                |
|  381   |         \_\_mac_syscall          |  0x17d  | (not available)                                                |
|  382   |         \_\_mac_get_file         |  0x17e  | (not available)                                                |
|  383   |         \_\_mac_set_file         |  0x17f  | (not available)                                                |
|  384   |         \_\_mac_get_link         |  0x180  | (not available)                                                |
|  385   |         \_\_mac_set_link         |  0x181  | (not available)                                                |
|  386   |         \_\_mac_get_proc         |  0x182  | (not available)                                                |
|  387   |         \_\_mac_set_proc         |  0x183  | (not available)                                                |
|  388   |          \_\_mac_get_fd          |  0x184  | (not available)                                                |
|  389   |          \_\_mac_set_fd          |  0x185  | (not available)                                                |
|  390   |         \_\_mac_get_pid          |  0x186  | (not available)                                                |
|  394   |             pselect              |  0x18a  | synchronous I/O multiplexing a la POSIX.1g                     |
|  395   |         pselect_nocancel         |  0x18b  | (not available)                                                |
|  396   |          read_nocancel           |  0x18c  | (not available)                                                |
|  397   |          write_nocancel          |  0x18d  | (not available)                                                |
|  398   |          open_nocancel           |  0x18e  | (not available)                                                |
|  399   |          close_nocancel          |  0x18f  | (not available)                                                |
|  400   |          wait4_nocancel          |  0x190  | (not available)                                                |
|  401   |         recvmsg_nocancel         |  0x191  | (not available)                                                |
|  402   |         sendmsg_nocancel         |  0x192  | (not available)                                                |
|  403   |        recvfrom_nocancel         |  0x193  | (not available)                                                |
|  404   |         accept_nocancel          |  0x194  | (not available)                                                |
|  405   |          msync_nocancel          |  0x195  | (not available)                                                |
|  406   |          fcntl_nocancel          |  0x196  | (not available)                                                |
|  407   |         select_nocancel          |  0x197  | (not available)                                                |
|  408   |          fsync_nocancel          |  0x198  | (not available)                                                |
|  409   |         connect_nocancel         |  0x199  | (not available)                                                |
|  410   |       sigsuspend_nocancel        |  0x19a  | (not available)                                                |
|  411   |          readv_nocancel          |  0x19b  | (not available)                                                |
|  412   |         writev_nocancel          |  0x19c  | (not available)                                                |
|  413   |         sendto_nocancel          |  0x19d  | (not available)                                                |
|  414   |          pread_nocancel          |  0x19e  | (not available)                                                |
|  415   |         pwrite_nocancel          |  0x19f  | (not available)                                                |
|  416   |         waitid_nocancel          |  0x1a0  | (not available)                                                |
|  417   |          poll_nocancel           |  0x1a1  | (not available)                                                |
|  418   |         msgsnd_nocancel          |  0x1a2  | (not available)                                                |
|  419   |         msgrcv_nocancel          |  0x1a3  | (not available)                                                |
|  420   |        sem_wait_nocancel         |  0x1a4  | (not available)                                                |
|  421   |       aio_suspend_nocancel       |  0x1a5  | (not available)                                                |
|  422   |       \_\_sigwait_nocancel       |  0x1a6  | (not available)                                                |
|  423   |   \_\_semwait_signal_nocancel    |  0x1a7  | (not available)                                                |
|  424   |          \_\_mac_mount           |  0x1a8  | (not available)                                                |
|  425   |        \_\_mac_get_mount         |  0x1a9  | (not available)                                                |
|  426   |        \_\_mac_getfsstat         |  0x1aa  | (not available)                                                |
|  427   |            fsgetpath             |  0x1ab  | get the path associated with filesystem node identifier (inode |
|  428   |        audit_session_self        |  0x1ac  | (not available)                                                |
|  429   |        audit_session_join        |  0x1ad  | (not available)                                                |
|  430   |        fileport_makeport         |  0x1ae  | (not available)                                                |
|  431   |         fileport_makefd          |  0x1af  | (not available)                                                |
|  432   |        audit_session_port        |  0x1b0  | (not available)                                                |
|  433   |           pid_suspend            |  0x1b1  | (not available)                                                |
|  434   |            pid_resume            |  0x1b2  | (not available)                                                |
|  435   |          pid_hibernate           |  0x1b3  | (not available)                                                |
|  436   |       pid_shutdown_sockets       |  0x1b4  | (not available)                                                |
|  438   |  shared_region_map_and_slide_np  |  0x1b6  | (not available)                                                |
|  439   |             kas_info             |  0x1b7  | (not available)                                                |
|  440   |       memorystatus_control       |  0x1b8  | (not available)                                                |
|  441   |         guarded_open_np          |  0x1b9  | (not available)                                                |
|  442   |         guarded_close_np         |  0x1ba  | (not available)                                                |
|  443   |        guarded_kqueue_np         |  0x1bb  | (not available)                                                |
|  444   |        change_fdguard_np         |  0x1bc  | (not available)                                                |
|  445   |              usrctl              |  0x1bd  | (not available)                                                |
|  446   |       proc_rlimit_control        |  0x1be  | (not available)                                                |
|  447   |             connectx             |  0x1bf  | initiate a connection on a socket                              |
|  448   |           disconnectx            |  0x1c0  | disconnects a connection on a socket                           |
|  449   |             peeloff              |  0x1c1  | (not available)                                                |
|  450   |         socket_delegate          |  0x1c2  | (not available)                                                |
|  451   |            telemetry             |  0x1c3  | (not available)                                                |
|  452   |         proc_uuid_policy         |  0x1c4  | (not available)                                                |
|  453   |      memorystatus_get_level      |  0x1c5  | (not available)                                                |
|  454   |         system_override          |  0x1c6  | (not available)                                                |
|  455   |            vfs_purge             |  0x1c7  | (not available)                                                |
|  456   |             sfi_ctl              |  0x1c8  | (not available)                                                |
|  457   |            sfi_pidctl            |  0x1c9  | (not available)                                                |
|  458   |            coalition             |  0x1ca  | (not available)                                                |
|  459   |          coalition_info          |  0x1cb  | (not available)                                                |
|  460   |        necp_match_policy         |  0x1cc  | (not available)                                                |
|  461   |         getattrlistbulk          |  0x1cd  | get file system attributes for multiple directory entries      |
|  462   |           clonefileat            |  0x1ce  | create copy on write clones of files                           |
|  463   |              openat              |  0x1cf  | open or create a file for reading or writing                   |
|  464   |         openat_nocancel          |  0x1d0  | (not available)                                                |
|  465   |             renameat             |  0x1d1  | change the name of a file                                      |
|  466   |            faccessat             |  0x1d2  | check accessibility of a file                                  |
|  467   |             fchmodat             |  0x1d3  | change mode of file                                            |
|  468   |             fchownat             |  0x1d4  | change owner and group of a file                               |
|  469   |             fstatat              |  0x1d5  | get file status                                                |
|  470   |            fstatat64             |  0x1d6  | (not available)                                                |
|  471   |              linkat              |  0x1d7  | make a hard file link                                          |
|  472   |             unlinkat             |  0x1d8  | remove directory entry                                         |
|  473   |            readlinkat            |  0x1d9  | read value of a symbolic link                                  |
|  474   |            symlinkat             |  0x1da  | make symbolic link to a file                                   |
|  475   |             mkdirat              |  0x1db  | make a directory file                                          |
|  476   |          getattrlistat           |  0x1dc  | get file system attributes                                     |
|  477   |          proc_trace_log          |  0x1dd  | (not available)                                                |
|  478   |          bsdthread_ctl           |  0x1de  | (not available)                                                |
|  479   |           openbyid_np            |  0x1df  | (not available)                                                |
|  480   |            recvmsg_x             |  0x1e0  | (not available)                                                |
|  481   |            sendmsg_x             |  0x1e1  | (not available)                                                |
|  482   |         thread_selfusage         |  0x1e2  | (not available)                                                |
|  483   |              csrctl              |  0x1e3  | (not available)                                                |
|  484   |    guarded_open_dprotected_np    |  0x1e4  | (not available)                                                |
|  485   |         guarded_write_np         |  0x1e5  | (not available)                                                |
|  486   |        guarded_pwrite_np         |  0x1e6  | (not available)                                                |
|  487   |        guarded_writev_np         |  0x1e7  | (not available)                                                |
|  488   |           renameatx_np           |  0x1e8  | change the name of a file                                      |
|  489   |         mremap_encrypted         |  0x1e9  | (not available)                                                |
|  490   |         netagent_trigger         |  0x1ea  | (not available)                                                |
|  491   |    stack_snapshot_with_config    |  0x1eb  | (not available)                                                |
|  492   |          microstackshot          |  0x1ec  | (not available)                                                |
|  493   |          grab_pgo_data           |  0x1ed  | (not available)                                                |
|  494   |             persona              |  0x1ee  | (not available)                                                |
|  496   |      mach_eventlink_signal       |  0x1f0  | (not available)                                                |
|  497   |    mach_eventlink_wait_until     |  0x1f1  | (not available)                                                |
|  498   | mach_eventlink_signal_wait_until |  0x1f2  | (not available)                                                |
|  499   |        work_interval_ctl         |  0x1f3  | (not available)                                                |
|  500   |            getentropy            |  0x1f4  | get entropy                                                    |
|  501   |            necp_open             |  0x1f5  | (not available)                                                |
|  502   |        necp_client_action        |  0x1f6  | (not available)                                                |
|  503   |          \_\_nexus_open          |  0x1f7  | (not available)                                                |
|  504   |        \_\_nexus_register        |  0x1f8  | (not available)                                                |
|  505   |       \_\_nexus_deregister       |  0x1f9  | (not available)                                                |
|  506   |         \_\_nexus_create         |  0x1fa  | (not available)                                                |
|  507   |        \_\_nexus_destroy         |  0x1fb  | (not available)                                                |
|  508   |        \_\_nexus_get_opt         |  0x1fc  | (not available)                                                |
|  509   |        \_\_nexus_set_opt         |  0x1fd  | (not available)                                                |
|  510   |         \_\_channel_open         |  0x1fe  | (not available)                                                |
|  511   |       \_\_channel_get_info       |  0x1ff  | (not available)                                                |
|  512   |         \_\_channel_sync         |  0x200  | (not available)                                                |
|  513   |       \_\_channel_get_opt        |  0x201  | (not available)                                                |
|  514   |       \_\_channel_set_opt        |  0x202  | (not available)                                                |
|  515   |            ulock_wait            |  0x203  | (not available)                                                |
|  516   |            ulock_wake            |  0x204  | (not available)                                                |
|  517   |           fclonefileat           |  0x205  | create copy on write clones of files                           |
|  518   |           fs_snapshot            |  0x206  | (not available)                                                |
|  519   |      register_uexc_handler       |  0x207  | (not available)                                                |
|  520   |      terminate_with_payload      |  0x208  | (not available)                                                |
|  521   |        abort_with_payload        |  0x209  | (not available)                                                |
|  522   |        necp_session_open         |  0x20a  | (not available)                                                |
|  523   |       necp_session_action        |  0x20b  | (not available)                                                |
|  524   |          setattrlistat           |  0x20c  | set file system attributes                                     |
|  525   |        net_qos_guideline         |  0x20d  | (not available)                                                |
|  526   |              fmount              |  0x20e  | (not available)                                                |
|  527   |           ntp_adjtime            |  0x20f  | (not available)                                                |
|  528   |           ntp_gettime            |  0x210  | (not available)                                                |
|  529   |      os_fault_with_payload       |  0x211  | (not available)                                                |
|  530   |       kqueue_workloop_ctl        |  0x212  | (not available)                                                |
|  531   |   \_\_mach_bridge_remote_time    |  0x213  | (not available)                                                |
|  532   |         coalition_ledger         |  0x214  | (not available)                                                |
|  533   |             log_data             |  0x215  | (not available)                                                |
|  534   |  memorystatus_available_memory   |  0x216  | (not available)                                                |
|  535   |      objc_bp_assist_cfg_np       |  0x217  | (not available)                                                |
|  536   | shared_region_map_and_slide_2_np |  0x218  | (not available)                                                |
|  537   |            pivot_root            |  0x219  | (not available)                                                |
|  538   |       task_inspect_for_pid       |  0x21a  | (not available)                                                |
|  539   |        task_read_for_pid         |  0x21b  | (not available)                                                |
|  540   |              preadv              |  0x21c  | read input                                                     |
|  541   |             pwritev              |  0x21d  | write output                                                   |
|  542   |         preadv_nocancel          |  0x21e  | (not available)                                                |
|  543   |         pwritev_nocancel         |  0x21f  | (not available)                                                |
|  544   |           ulock_wait2            |  0x220  | (not available)                                                |
|  545   |      proc_info_extended_id       |  0x221  | (not available)                                                |
|  546   |          tracker_action          |  0x222  | (not available)                                                |
|  547   |       debug_syscall_reject       |  0x223  | (not available)                                                |
|  548   |            MAXSYSCALL            |  0x224  | (not available)                                                |
|   63   |             invalid              |  0x3f   | (not available)                                                |
