#ifndef EXP2_H
#define EXP2_H

#include <cmath>
#include <vector>

class Cexp2 {
private:
    std::vector<double> _exp_result;
    static constexpr double _step = 0.01;
    static constexpr double _begin = -5;
    static constexpr double _end = 0;

    void exp_generation();

    double exp2(double param) const ;

public:
    Cexp2() {
        _exp_result.resize(static_cast<size_t>((_end  - _begin) / _step));
        exp_generation();
    }

    double operator()(double x) const;
};

#endif //EXP2_H
