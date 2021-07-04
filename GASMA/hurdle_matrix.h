//
// Created by 顾振昊 on 2021/5/22.
//

#ifndef APPROXIMATE_STRING_MATCHING_HURDLE_MATRIX_H
#define APPROXIMATE_STRING_MATCHING_HURDLE_MATRIX_H

#include <stdint.h>
#include <x86intrin.h>

/**
 * The hurdle_matrix class
 * Implements a way to store the hurdle information of lanes using an
 * efficient way.
 */
class hurdle_matrix {
private:
    int k;
    bool remove_single_zeros;




public:
    /**
     * Constructor of hurdle_matrix class
     * 
     * @param k the k of banded Levenshtein problem.
     * @param remove_single_zeros whether we remove the single zeros
     *     inside the hurdle matrix
     */
    hurdle_matrix(int k, bool remove_single_zeros);

    hurdle_matrix(const hurdle_matrix &) = default;
    
    ~hurdle_matrix() = default;

    /** 
     * Load two DNAs, read and ref, into the class and calculate the
     * resulting hurdle matrix.
     * 
     * @param read a string containing only 'A', 'C', 'G' and 'T'
     * @param ref a string containing only 'A', 'C', 'G' and 'T'
    */
    void load_reads(const char *read, const char *ref);



};


#endif //APPROXIMATE_STRING_MATCHING_HURDLE_MATRIX_H
