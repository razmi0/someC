# Usage

-   go to a folder
-   ./build.sh to build binaries
-   ./info.sh to log file sizes and run hyperfine benchmarks

## File Sizes

-   `build.sh`: 32 octets
-   `info.sh`: 669 octets
-   `main`: 33,784 octets
-   `main.c`: 839 octets
-   `main.js`: 255 octets

## Benchmark Results

```js
Benchmark 1: node ./main.js 1000
  Time (mean ± σ):      27.3 ms ±   1.3 ms    [User: 23.0 ms, System: 3.1 ms]
  Range (min … max):    25.4 ms …  39.1 ms    101 runs

hyperfine --warmup 100 ./main ...args
Benchmark 1: ./main 1000
  Time (mean ± σ):     542.3 µs ± 187.5 µs    [User: 183.4 µs, System: 245.7 µs]
  Range (min … max):    32.1 µs … 1180.7 µs    1095 runs
```
