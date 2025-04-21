




// This file contains examples of system calls performed in arm64 assembly.





// 1 | exit

_start:
    mov X0, #0      // Set the exit code in X0
    mov X16, #1     // Unix exit system call
    svc #0x80       // Call kernel


// 2 | fork

// TODO


// 3 | read

.data
buffer:    .space 10            // "buffer" will hold our input text.

.text
_start:
    mov X0, #0                  // Specify stdin
    adrp X1, buffer@PAGE        // Load buffer
    add X1, X1, buffer@PAGEOFF  
    mov X2, #10                 // Specify to read 10 characters maximum
    mov X16, #3                 // Unix read system call
    svc #0x80                   // Call kernel


// 4 | write

.data
msg:    .ascii "Hello, World!"      // Store our message in RAM

.text
_start:
    mov X0, #1                      // Specify stdout
    adrp X1, msg@PAGE               // Load message (msg)
    add X1, X1, msg@PAGEOFF
    mov X2, #14                     // Specify the length of our string–13 characters
    mov X16, #4                     // Unix write system call.
    svc #0x80                       // Call kernel


// 5 | open

.data
name:  .ascii "file.txt"        // Title of the file to open

.text
_start:
    adrp X0, name@PAGE          // Load "name" into X0
    add X0, X0, name@PAGEOFF
    mov X1, #0x601              // Flags: O_CREAT | O_TRUNC | O_WRONLY
    mov X2, #0x1A4              // Permissions; 0644 (RW-R--R--)       
    mov X16, #5                 // Unix open system call.
    svc #0x80                   // Call kernel


// 6 | close

_start:
    mov X0, {id}    // Load the file ID into X0
    mov X16, #6     // Unix close system call.
    svc #0x80       // Call kernel


// TODO: Examples for the remaining syscalls.