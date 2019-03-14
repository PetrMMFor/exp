#include <benchmark/benchmark.h>
#include "exp2.h"

static void BM_exp(benchmark::State &x) {
    while (x.KeepRunning()) {
        benchmark::DoNotOptimize(
                exp(-x.range(0)) * x.range(0)
        );
    }
}

static void NEW_exp(benchmark::State& x){
    Cexp2 p;
    while (x.KeepRunning()) {
        benchmark::DoNotOptimize(
                p(x.range())
                );
    }
}

static void first_initialization_exp(benchmark::State& x){
    while (x.KeepRunning()) {
        Cexp2 p;
        benchmark::DoNotOptimize(
                p(x.range())
        );
    }
}

BENCHMARK(BM_exp)->Arg(-2.49);
BENCHMARK(NEW_exp)->Arg(-2.49);
BENCHMARK(first_initialization_exp)->Arg(-2.49);

BENCHMARK_MAIN();