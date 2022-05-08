//
//  NonlinearSolver02.hpp
//  Homework 8
//
//  Created by Yuhang Fan on 3/26/22.
//

#pragma once
#include "Function02.hpp"
namespace fre{
class NonlinearSolver
{
private:
    double Tgt;
    double LEnd;
    double REnd;
    double Acc;
    double Guess;
public:
    NonlinearSolver() : Tgt(0), LEnd(0), REnd(0), Acc(0), Guess(0) {}
    NonlinearSolver(double Tgt_, double LEnd_, double REnd_, double Acc_, double Guess_)
    : Tgt(Tgt_), LEnd(LEnd_), REnd(REnd_), Acc(Acc_), Guess(Guess_) {}
    ~NonlinearSolver() {}
    
    void UpdateSolver(double Tgt_, double LEnd_, double REnd_, double Acc_, double Guess_)
    {
        Tgt = Tgt_;
        LEnd = LEnd_;
        REnd = REnd_;
        Acc = Acc_;
        Guess = Guess_;
    }
    
    double SolveByBisect(Function* Fct);
    double SolveByNR(Function* Fct);
};
}
