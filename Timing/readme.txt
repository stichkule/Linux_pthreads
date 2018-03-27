ECEN 5623 -- EXERCISE-1
Shiril Tichkule, Srivishnu Alvakonda

README

Problem 3:

List of submitted files --
1. posix_clock.c
2. analyze_jitter.c
3. Makefile
4. measure_delay.sh

Instructions to be followed in sequence --

1. make all -- this builds posix_clock and analyze_jitter
2. ./measure_delay.sh -- script executes 10 runs of posix_clock and stores measured nanosecond delays in file delay_ns.txt
3. ./analyze_jitter -- runs analyze_jitter, which calculates standard deviation of delay values in delay_ns.txt
4. make clean -- removes all executables, debug, and txt files

In case there are permissions issues with the script measure_delay.sh, run 'sudo chmod u+x measure_delay.sh'.
The file 'delay_ns.txt' must be deleted prior to each new run of analyze_jitter, so that the program has data from the 10 most recent runs. 
This can be done via make clean or manually deleting the delay_ns.txt file.
