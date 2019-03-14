#include <cmath>
#include <exp2.h>
#include <complex>
#include <assert.h>

void Cexp2::exp_generation() {
    auto i = _begin;
    for (auto &it: _exp_result) {
        it = std::exp(-i*i);
        i += _step;
    }
}

double Cexp2::exp2(double x) const {
    if (x >= _end) { return 1; }
    if (x < _begin) { return 0; }
    assert(static_cast<size_t >(std::round((x - _begin) / _step)) < _exp_result.size());
    return _exp_result[static_cast<size_t>(std::round((x - _begin) / _step))];

}

double Cexp2::operator()(double x) const { return exp2(x); }
