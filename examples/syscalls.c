

// This file contains examples of system calls performed in standard C.

// To call these, you must include the following header files.

#include <unistd.h>
#include <sys/syscall.h>

// 1 | exit

syscall(SYS_exit, 0);  // Unix system call for exit
return 0;              // Return is still needed, despite calling "exit"


// 2 | fork

// TODO


// 3 | read

char buffer[100];                                   // char[100] is used to store 100 bytes of text information.
syscall(SYS_read, 0, buffer, sizeof(buffer) - 1);   // Unix system call for read
return 0;


// 4 | write


char buffer[100];                                   // char[100] is used to store 100 bytes of text information.
syscall(SYS_write, 0, buffer, sizeof(buffer) - 1);  // Unix system call for write
return 0;


// 5 | open

#include <fcntl.h>                                              // Include "fcntl.h" for flags.

int fd;                                                         // Create "fd" to store file identifier.
fd = syscall(SYS_open, "file.txt", O_CREAT | O_WRONLY, 0644);   // Unix system call for open
return 0;                                                       // File should be closed after usage using SYS_close


// Flags:
// O_RDONLY   - Open for reading only
// O_WRONLY   - Open for writing only
// O_RDWR     - Open for both reading and writing
// O_CREAT    - Create the file if it does not exist
// O_TRUNC    - Truncate the file to zero size if it already exists
// O_APPEND   - Append to the file if writing
// O_EXCL     - Fail if the file already exists (with O_CREAT

// Permissions:
// 0644 = rw-r--r--  - Owner can read/write, others can read
// 0666 = rw-rw-rw-  - Everyone can read/write
// 0600 = rw-------  - Only owner can read/write
// 0777 = rwxrwxrwx  - Everyone can read/write/execute (rarely used for files)


// 6 | close

int main() {
    syscall(SYS_close, fd)  // Unix system call for close
    return 0;
}

// TODO: Examples for the remaining syscalls.