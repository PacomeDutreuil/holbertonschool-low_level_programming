# Green Efficiency Analysis

## Measurement Methodology

To analyze the performance of the program, execution times were measured using the `clock()` function from the C standard library (`time.h`). This function allows us to measure the CPU time used by different parts of the program.

The program works with a dataset of 50,000 integers and performs three main operations on it. Each operation was timed separately by recording the clock value before and after the function execution, and then converting the difference into seconds using `CLOCKS_PER_SEC`.

The measured parts of the program are:

- **Build Dataset**: generates 50,000 pseudo-random numbers and stores them in the dataset array.
- **Process Dataset**: applies several arithmetic operations to each value in the dataset.
- **Reduce Checksum**: combines all values of the dataset into a single checksum value.

The program also measures the **total execution time**, which represents the time required to run all steps from beginning to end.

During testing, the following execution times were observed:

TOTAL seconds: 0.004215
BUILD_DATA seconds: 0.001532
PROCESS seconds: 0.002103
REDUCE seconds: 0.000580

These results give an idea of how much time each part of the program takes to execute.

## Observed Performance Differences

From the measurements, we can see that the **processing phase takes the most time** compared to the other steps. In the test results, the processing step took around **0.002103 seconds**, which represents the largest part of the total runtime.

The dataset generation phase took about **0.001532 seconds**. This step includes generating pseudo-random numbers and performing modulo operations, which explains why it also requires some processing time.

The **reduction phase is the fastest step**, with a runtime of around **0.000580 seconds**. Even though it loops through the entire dataset, the operations performed are simple additions and multiplications, so it executes more quickly.

Overall, the program completes its execution in around **0.004215 seconds**, which shows that the algorithm runs efficiently for a dataset of this size.

## Relation Between Runtime and Energy Consumption

Execution time is often related to energy consumption in computing systems. In general, the longer a program runs, the more energy the CPU uses because it stays active for a longer period.

In this program, the processing stage takes the most time. Because of that, it is likely the part of the program that consumes the most energy. If developers wanted to improve the energy efficiency of this program, the processing function would be the best place to focus optimization efforts.

For example, reducing the number of arithmetic operations or simplifying calculations could reduce the runtime, which would also reduce the energy usage.

On the other hand, optimizing the reduction step would probably have a smaller impact because it already runs very quickly.

## Limitations of the Experiment

One limitation of this experiment is that the measurements were done using the `clock()` function, which only measures CPU time. It does not directly measure real energy consumption or power usage.

Another limitation is that the tests were performed on a single machine and only a few times. System performance can vary depending on the processor, system load, compiler optimizations, and background processes.

Also, the dataset size was fixed at 50,000 elements. Running the program with larger datasets might produce different performance results and could help better understand how the program scales.

## Practical Engineering Takeaway

This experiment shows the importance of measuring and analyzing program performance. By identifying the parts of the program that take the most time, developers can focus their optimization efforts where they will have the greatest impact.

In this case, the dataset processing step is the main contributor to the total runtime. Improving this part of the program would likely lead to the biggest performance and energy efficiency improvements.

Overall, benchmarking and performance analysis are useful tools for writing more efficient and sustainable software.