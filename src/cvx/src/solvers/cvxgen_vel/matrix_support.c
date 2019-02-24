// Solver released by written permission from Jacob Mattingley, for non-commercial use only
/* Produced by CVXGEN, 2018-08-30 09:02:13 -0400.  */
/* CVXGEN is Copyright (C) 2006-2017 Jacob Mattingley, jem@cvxgen.com. */
/* The code in this file is Copyright (C) 2006-2017 Jacob Mattingley. */
/* CVXGEN, or solvers produced by CVXGEN, cannot be used for commercial */
/* applications without prior written permission from Jacob Mattingley. */

/* Filename: matrix_support.c. */
/* Description: Support functions for matrix multiplication and vector filling. */
#include "solver.h"
void multbymA(double *lhs, double *rhs)
{
  lhs[0] = -rhs[16] * (-params.B[0]) - rhs[17] * (-params.B[3]) - rhs[18] * (-params.B[6]) - rhs[64] * (1);
  lhs[1] = -rhs[16] * (-params.B[1]) - rhs[17] * (-params.B[4]) - rhs[18] * (-params.B[7]) - rhs[65] * (1);
  lhs[2] = -rhs[16] * (-params.B[2]) - rhs[17] * (-params.B[5]) - rhs[18] * (-params.B[8]) - rhs[66] * (1);
  lhs[3] = -rhs[19] * (-params.B[0]) - rhs[20] * (-params.B[3]) - rhs[21] * (-params.B[6]) - rhs[64] * (-params.A[0]) -
           rhs[65] * (-params.A[3]) - rhs[66] * (-params.A[6]) - rhs[67] * (1);
  lhs[4] = -rhs[19] * (-params.B[1]) - rhs[20] * (-params.B[4]) - rhs[21] * (-params.B[7]) - rhs[64] * (-params.A[1]) -
           rhs[65] * (-params.A[4]) - rhs[66] * (-params.A[7]) - rhs[68] * (1);
  lhs[5] = -rhs[19] * (-params.B[2]) - rhs[20] * (-params.B[5]) - rhs[21] * (-params.B[8]) - rhs[64] * (-params.A[2]) -
           rhs[65] * (-params.A[5]) - rhs[66] * (-params.A[8]) - rhs[69] * (1);
  lhs[6] = -rhs[22] * (-params.B[0]) - rhs[23] * (-params.B[3]) - rhs[24] * (-params.B[6]) - rhs[67] * (-params.A[0]) -
           rhs[68] * (-params.A[3]) - rhs[69] * (-params.A[6]) - rhs[70] * (1);
  lhs[7] = -rhs[22] * (-params.B[1]) - rhs[23] * (-params.B[4]) - rhs[24] * (-params.B[7]) - rhs[67] * (-params.A[1]) -
           rhs[68] * (-params.A[4]) - rhs[69] * (-params.A[7]) - rhs[71] * (1);
  lhs[8] = -rhs[22] * (-params.B[2]) - rhs[23] * (-params.B[5]) - rhs[24] * (-params.B[8]) - rhs[67] * (-params.A[2]) -
           rhs[68] * (-params.A[5]) - rhs[69] * (-params.A[8]) - rhs[72] * (1);
  lhs[9] = -rhs[25] * (-params.B[0]) - rhs[26] * (-params.B[3]) - rhs[27] * (-params.B[6]) - rhs[70] * (-params.A[0]) -
           rhs[71] * (-params.A[3]) - rhs[72] * (-params.A[6]) - rhs[73] * (1);
  lhs[10] = -rhs[25] * (-params.B[1]) - rhs[26] * (-params.B[4]) - rhs[27] * (-params.B[7]) - rhs[70] * (-params.A[1]) -
            rhs[71] * (-params.A[4]) - rhs[72] * (-params.A[7]) - rhs[74] * (1);
  lhs[11] = -rhs[25] * (-params.B[2]) - rhs[26] * (-params.B[5]) - rhs[27] * (-params.B[8]) - rhs[70] * (-params.A[2]) -
            rhs[71] * (-params.A[5]) - rhs[72] * (-params.A[8]) - rhs[75] * (1);
  lhs[12] = -rhs[28] * (-params.B[0]) - rhs[29] * (-params.B[3]) - rhs[30] * (-params.B[6]) - rhs[73] * (-params.A[0]) -
            rhs[74] * (-params.A[3]) - rhs[75] * (-params.A[6]) - rhs[76] * (1);
  lhs[13] = -rhs[28] * (-params.B[1]) - rhs[29] * (-params.B[4]) - rhs[30] * (-params.B[7]) - rhs[73] * (-params.A[1]) -
            rhs[74] * (-params.A[4]) - rhs[75] * (-params.A[7]) - rhs[77] * (1);
  lhs[14] = -rhs[28] * (-params.B[2]) - rhs[29] * (-params.B[5]) - rhs[30] * (-params.B[8]) - rhs[73] * (-params.A[2]) -
            rhs[74] * (-params.A[5]) - rhs[75] * (-params.A[8]) - rhs[78] * (1);
  lhs[15] = -rhs[31] * (-params.B[0]) - rhs[32] * (-params.B[3]) - rhs[33] * (-params.B[6]) - rhs[76] * (-params.A[0]) -
            rhs[77] * (-params.A[3]) - rhs[78] * (-params.A[6]) - rhs[79] * (1);
  lhs[16] = -rhs[31] * (-params.B[1]) - rhs[32] * (-params.B[4]) - rhs[33] * (-params.B[7]) - rhs[76] * (-params.A[1]) -
            rhs[77] * (-params.A[4]) - rhs[78] * (-params.A[7]) - rhs[80] * (1);
  lhs[17] = -rhs[31] * (-params.B[2]) - rhs[32] * (-params.B[5]) - rhs[33] * (-params.B[8]) - rhs[76] * (-params.A[2]) -
            rhs[77] * (-params.A[5]) - rhs[78] * (-params.A[8]) - rhs[81] * (1);
  lhs[18] = -rhs[34] * (-params.B[0]) - rhs[35] * (-params.B[3]) - rhs[36] * (-params.B[6]) - rhs[79] * (-params.A[0]) -
            rhs[80] * (-params.A[3]) - rhs[81] * (-params.A[6]) - rhs[82] * (1);
  lhs[19] = -rhs[34] * (-params.B[1]) - rhs[35] * (-params.B[4]) - rhs[36] * (-params.B[7]) - rhs[79] * (-params.A[1]) -
            rhs[80] * (-params.A[4]) - rhs[81] * (-params.A[7]) - rhs[83] * (1);
  lhs[20] = -rhs[34] * (-params.B[2]) - rhs[35] * (-params.B[5]) - rhs[36] * (-params.B[8]) - rhs[79] * (-params.A[2]) -
            rhs[80] * (-params.A[5]) - rhs[81] * (-params.A[8]) - rhs[84] * (1);
  lhs[21] = -rhs[37] * (-params.B[0]) - rhs[38] * (-params.B[3]) - rhs[39] * (-params.B[6]) - rhs[82] * (-params.A[0]) -
            rhs[83] * (-params.A[3]) - rhs[84] * (-params.A[6]) - rhs[85] * (1);
  lhs[22] = -rhs[37] * (-params.B[1]) - rhs[38] * (-params.B[4]) - rhs[39] * (-params.B[7]) - rhs[82] * (-params.A[1]) -
            rhs[83] * (-params.A[4]) - rhs[84] * (-params.A[7]) - rhs[86] * (1);
  lhs[23] = -rhs[37] * (-params.B[2]) - rhs[38] * (-params.B[5]) - rhs[39] * (-params.B[8]) - rhs[82] * (-params.A[2]) -
            rhs[83] * (-params.A[5]) - rhs[84] * (-params.A[8]) - rhs[87] * (1);
  lhs[24] = -rhs[40] * (-params.B[0]) - rhs[41] * (-params.B[3]) - rhs[42] * (-params.B[6]) - rhs[85] * (-params.A[0]) -
            rhs[86] * (-params.A[3]) - rhs[87] * (-params.A[6]) - rhs[88] * (1);
  lhs[25] = -rhs[40] * (-params.B[1]) - rhs[41] * (-params.B[4]) - rhs[42] * (-params.B[7]) - rhs[85] * (-params.A[1]) -
            rhs[86] * (-params.A[4]) - rhs[87] * (-params.A[7]) - rhs[89] * (1);
  lhs[26] = -rhs[40] * (-params.B[2]) - rhs[41] * (-params.B[5]) - rhs[42] * (-params.B[8]) - rhs[85] * (-params.A[2]) -
            rhs[86] * (-params.A[5]) - rhs[87] * (-params.A[8]) - rhs[90] * (1);
  lhs[27] = -rhs[43] * (-params.B[0]) - rhs[44] * (-params.B[3]) - rhs[45] * (-params.B[6]) - rhs[88] * (-params.A[0]) -
            rhs[89] * (-params.A[3]) - rhs[90] * (-params.A[6]) - rhs[91] * (1);
  lhs[28] = -rhs[43] * (-params.B[1]) - rhs[44] * (-params.B[4]) - rhs[45] * (-params.B[7]) - rhs[88] * (-params.A[1]) -
            rhs[89] * (-params.A[4]) - rhs[90] * (-params.A[7]) - rhs[92] * (1);
  lhs[29] = -rhs[43] * (-params.B[2]) - rhs[44] * (-params.B[5]) - rhs[45] * (-params.B[8]) - rhs[88] * (-params.A[2]) -
            rhs[89] * (-params.A[5]) - rhs[90] * (-params.A[8]) - rhs[93] * (1);
  lhs[30] = -rhs[46] * (-params.B[0]) - rhs[47] * (-params.B[3]) - rhs[48] * (-params.B[6]) - rhs[91] * (-params.A[0]) -
            rhs[92] * (-params.A[3]) - rhs[93] * (-params.A[6]) - rhs[94] * (1);
  lhs[31] = -rhs[46] * (-params.B[1]) - rhs[47] * (-params.B[4]) - rhs[48] * (-params.B[7]) - rhs[91] * (-params.A[1]) -
            rhs[92] * (-params.A[4]) - rhs[93] * (-params.A[7]) - rhs[95] * (1);
  lhs[32] = -rhs[46] * (-params.B[2]) - rhs[47] * (-params.B[5]) - rhs[48] * (-params.B[8]) - rhs[91] * (-params.A[2]) -
            rhs[92] * (-params.A[5]) - rhs[93] * (-params.A[8]) - rhs[96] * (1);
  lhs[33] = -rhs[49] * (-params.B[0]) - rhs[50] * (-params.B[3]) - rhs[51] * (-params.B[6]) - rhs[94] * (-params.A[0]) -
            rhs[95] * (-params.A[3]) - rhs[96] * (-params.A[6]) - rhs[97] * (1);
  lhs[34] = -rhs[49] * (-params.B[1]) - rhs[50] * (-params.B[4]) - rhs[51] * (-params.B[7]) - rhs[94] * (-params.A[1]) -
            rhs[95] * (-params.A[4]) - rhs[96] * (-params.A[7]) - rhs[98] * (1);
  lhs[35] = -rhs[49] * (-params.B[2]) - rhs[50] * (-params.B[5]) - rhs[51] * (-params.B[8]) - rhs[94] * (-params.A[2]) -
            rhs[95] * (-params.A[5]) - rhs[96] * (-params.A[8]) - rhs[99] * (1);
  lhs[36] = -rhs[52] * (-params.B[0]) - rhs[53] * (-params.B[3]) - rhs[54] * (-params.B[6]) - rhs[97] * (-params.A[0]) -
            rhs[98] * (-params.A[3]) - rhs[99] * (-params.A[6]) - rhs[100] * (1);
  lhs[37] = -rhs[52] * (-params.B[1]) - rhs[53] * (-params.B[4]) - rhs[54] * (-params.B[7]) - rhs[97] * (-params.A[1]) -
            rhs[98] * (-params.A[4]) - rhs[99] * (-params.A[7]) - rhs[101] * (1);
  lhs[38] = -rhs[52] * (-params.B[2]) - rhs[53] * (-params.B[5]) - rhs[54] * (-params.B[8]) - rhs[97] * (-params.A[2]) -
            rhs[98] * (-params.A[5]) - rhs[99] * (-params.A[8]) - rhs[102] * (1);
  lhs[39] = -rhs[55] * (-params.B[0]) - rhs[56] * (-params.B[3]) - rhs[57] * (-params.B[6]) -
            rhs[100] * (-params.A[0]) - rhs[101] * (-params.A[3]) - rhs[102] * (-params.A[6]) - rhs[103] * (1);
  lhs[40] = -rhs[55] * (-params.B[1]) - rhs[56] * (-params.B[4]) - rhs[57] * (-params.B[7]) -
            rhs[100] * (-params.A[1]) - rhs[101] * (-params.A[4]) - rhs[102] * (-params.A[7]) - rhs[104] * (1);
  lhs[41] = -rhs[55] * (-params.B[2]) - rhs[56] * (-params.B[5]) - rhs[57] * (-params.B[8]) -
            rhs[100] * (-params.A[2]) - rhs[101] * (-params.A[5]) - rhs[102] * (-params.A[8]) - rhs[105] * (1);
  lhs[42] = -rhs[58] * (-params.B[0]) - rhs[59] * (-params.B[3]) - rhs[60] * (-params.B[6]) -
            rhs[103] * (-params.A[0]) - rhs[104] * (-params.A[3]) - rhs[105] * (-params.A[6]) - rhs[106] * (1);
  lhs[43] = -rhs[58] * (-params.B[1]) - rhs[59] * (-params.B[4]) - rhs[60] * (-params.B[7]) -
            rhs[103] * (-params.A[1]) - rhs[104] * (-params.A[4]) - rhs[105] * (-params.A[7]) - rhs[107] * (1);
  lhs[44] = -rhs[58] * (-params.B[2]) - rhs[59] * (-params.B[5]) - rhs[60] * (-params.B[8]) -
            rhs[103] * (-params.A[2]) - rhs[104] * (-params.A[5]) - rhs[105] * (-params.A[8]) - rhs[108] * (1);
}
void multbymAT(double *lhs, double *rhs)
{
  lhs[0] = 0;
  lhs[1] = 0;
  lhs[2] = 0;
  lhs[3] = 0;
  lhs[4] = 0;
  lhs[5] = 0;
  lhs[6] = 0;
  lhs[7] = 0;
  lhs[8] = 0;
  lhs[9] = 0;
  lhs[10] = 0;
  lhs[11] = 0;
  lhs[12] = 0;
  lhs[13] = 0;
  lhs[14] = 0;
  lhs[15] = 0;
  lhs[16] = -rhs[0] * (-params.B[0]) - rhs[1] * (-params.B[1]) - rhs[2] * (-params.B[2]);
  lhs[17] = -rhs[0] * (-params.B[3]) - rhs[1] * (-params.B[4]) - rhs[2] * (-params.B[5]);
  lhs[18] = -rhs[0] * (-params.B[6]) - rhs[1] * (-params.B[7]) - rhs[2] * (-params.B[8]);
  lhs[19] = -rhs[3] * (-params.B[0]) - rhs[4] * (-params.B[1]) - rhs[5] * (-params.B[2]);
  lhs[20] = -rhs[3] * (-params.B[3]) - rhs[4] * (-params.B[4]) - rhs[5] * (-params.B[5]);
  lhs[21] = -rhs[3] * (-params.B[6]) - rhs[4] * (-params.B[7]) - rhs[5] * (-params.B[8]);
  lhs[22] = -rhs[6] * (-params.B[0]) - rhs[7] * (-params.B[1]) - rhs[8] * (-params.B[2]);
  lhs[23] = -rhs[6] * (-params.B[3]) - rhs[7] * (-params.B[4]) - rhs[8] * (-params.B[5]);
  lhs[24] = -rhs[6] * (-params.B[6]) - rhs[7] * (-params.B[7]) - rhs[8] * (-params.B[8]);
  lhs[25] = -rhs[9] * (-params.B[0]) - rhs[10] * (-params.B[1]) - rhs[11] * (-params.B[2]);
  lhs[26] = -rhs[9] * (-params.B[3]) - rhs[10] * (-params.B[4]) - rhs[11] * (-params.B[5]);
  lhs[27] = -rhs[9] * (-params.B[6]) - rhs[10] * (-params.B[7]) - rhs[11] * (-params.B[8]);
  lhs[28] = -rhs[12] * (-params.B[0]) - rhs[13] * (-params.B[1]) - rhs[14] * (-params.B[2]);
  lhs[29] = -rhs[12] * (-params.B[3]) - rhs[13] * (-params.B[4]) - rhs[14] * (-params.B[5]);
  lhs[30] = -rhs[12] * (-params.B[6]) - rhs[13] * (-params.B[7]) - rhs[14] * (-params.B[8]);
  lhs[31] = -rhs[15] * (-params.B[0]) - rhs[16] * (-params.B[1]) - rhs[17] * (-params.B[2]);
  lhs[32] = -rhs[15] * (-params.B[3]) - rhs[16] * (-params.B[4]) - rhs[17] * (-params.B[5]);
  lhs[33] = -rhs[15] * (-params.B[6]) - rhs[16] * (-params.B[7]) - rhs[17] * (-params.B[8]);
  lhs[34] = -rhs[18] * (-params.B[0]) - rhs[19] * (-params.B[1]) - rhs[20] * (-params.B[2]);
  lhs[35] = -rhs[18] * (-params.B[3]) - rhs[19] * (-params.B[4]) - rhs[20] * (-params.B[5]);
  lhs[36] = -rhs[18] * (-params.B[6]) - rhs[19] * (-params.B[7]) - rhs[20] * (-params.B[8]);
  lhs[37] = -rhs[21] * (-params.B[0]) - rhs[22] * (-params.B[1]) - rhs[23] * (-params.B[2]);
  lhs[38] = -rhs[21] * (-params.B[3]) - rhs[22] * (-params.B[4]) - rhs[23] * (-params.B[5]);
  lhs[39] = -rhs[21] * (-params.B[6]) - rhs[22] * (-params.B[7]) - rhs[23] * (-params.B[8]);
  lhs[40] = -rhs[24] * (-params.B[0]) - rhs[25] * (-params.B[1]) - rhs[26] * (-params.B[2]);
  lhs[41] = -rhs[24] * (-params.B[3]) - rhs[25] * (-params.B[4]) - rhs[26] * (-params.B[5]);
  lhs[42] = -rhs[24] * (-params.B[6]) - rhs[25] * (-params.B[7]) - rhs[26] * (-params.B[8]);
  lhs[43] = -rhs[27] * (-params.B[0]) - rhs[28] * (-params.B[1]) - rhs[29] * (-params.B[2]);
  lhs[44] = -rhs[27] * (-params.B[3]) - rhs[28] * (-params.B[4]) - rhs[29] * (-params.B[5]);
  lhs[45] = -rhs[27] * (-params.B[6]) - rhs[28] * (-params.B[7]) - rhs[29] * (-params.B[8]);
  lhs[46] = -rhs[30] * (-params.B[0]) - rhs[31] * (-params.B[1]) - rhs[32] * (-params.B[2]);
  lhs[47] = -rhs[30] * (-params.B[3]) - rhs[31] * (-params.B[4]) - rhs[32] * (-params.B[5]);
  lhs[48] = -rhs[30] * (-params.B[6]) - rhs[31] * (-params.B[7]) - rhs[32] * (-params.B[8]);
  lhs[49] = -rhs[33] * (-params.B[0]) - rhs[34] * (-params.B[1]) - rhs[35] * (-params.B[2]);
  lhs[50] = -rhs[33] * (-params.B[3]) - rhs[34] * (-params.B[4]) - rhs[35] * (-params.B[5]);
  lhs[51] = -rhs[33] * (-params.B[6]) - rhs[34] * (-params.B[7]) - rhs[35] * (-params.B[8]);
  lhs[52] = -rhs[36] * (-params.B[0]) - rhs[37] * (-params.B[1]) - rhs[38] * (-params.B[2]);
  lhs[53] = -rhs[36] * (-params.B[3]) - rhs[37] * (-params.B[4]) - rhs[38] * (-params.B[5]);
  lhs[54] = -rhs[36] * (-params.B[6]) - rhs[37] * (-params.B[7]) - rhs[38] * (-params.B[8]);
  lhs[55] = -rhs[39] * (-params.B[0]) - rhs[40] * (-params.B[1]) - rhs[41] * (-params.B[2]);
  lhs[56] = -rhs[39] * (-params.B[3]) - rhs[40] * (-params.B[4]) - rhs[41] * (-params.B[5]);
  lhs[57] = -rhs[39] * (-params.B[6]) - rhs[40] * (-params.B[7]) - rhs[41] * (-params.B[8]);
  lhs[58] = -rhs[42] * (-params.B[0]) - rhs[43] * (-params.B[1]) - rhs[44] * (-params.B[2]);
  lhs[59] = -rhs[42] * (-params.B[3]) - rhs[43] * (-params.B[4]) - rhs[44] * (-params.B[5]);
  lhs[60] = -rhs[42] * (-params.B[6]) - rhs[43] * (-params.B[7]) - rhs[44] * (-params.B[8]);
  lhs[61] = 0;
  lhs[62] = 0;
  lhs[63] = 0;
  lhs[64] = -rhs[0] * (1) - rhs[3] * (-params.A[0]) - rhs[4] * (-params.A[1]) - rhs[5] * (-params.A[2]);
  lhs[65] = -rhs[1] * (1) - rhs[3] * (-params.A[3]) - rhs[4] * (-params.A[4]) - rhs[5] * (-params.A[5]);
  lhs[66] = -rhs[2] * (1) - rhs[3] * (-params.A[6]) - rhs[4] * (-params.A[7]) - rhs[5] * (-params.A[8]);
  lhs[67] = -rhs[3] * (1) - rhs[6] * (-params.A[0]) - rhs[7] * (-params.A[1]) - rhs[8] * (-params.A[2]);
  lhs[68] = -rhs[4] * (1) - rhs[6] * (-params.A[3]) - rhs[7] * (-params.A[4]) - rhs[8] * (-params.A[5]);
  lhs[69] = -rhs[5] * (1) - rhs[6] * (-params.A[6]) - rhs[7] * (-params.A[7]) - rhs[8] * (-params.A[8]);
  lhs[70] = -rhs[6] * (1) - rhs[9] * (-params.A[0]) - rhs[10] * (-params.A[1]) - rhs[11] * (-params.A[2]);
  lhs[71] = -rhs[7] * (1) - rhs[9] * (-params.A[3]) - rhs[10] * (-params.A[4]) - rhs[11] * (-params.A[5]);
  lhs[72] = -rhs[8] * (1) - rhs[9] * (-params.A[6]) - rhs[10] * (-params.A[7]) - rhs[11] * (-params.A[8]);
  lhs[73] = -rhs[9] * (1) - rhs[12] * (-params.A[0]) - rhs[13] * (-params.A[1]) - rhs[14] * (-params.A[2]);
  lhs[74] = -rhs[10] * (1) - rhs[12] * (-params.A[3]) - rhs[13] * (-params.A[4]) - rhs[14] * (-params.A[5]);
  lhs[75] = -rhs[11] * (1) - rhs[12] * (-params.A[6]) - rhs[13] * (-params.A[7]) - rhs[14] * (-params.A[8]);
  lhs[76] = -rhs[12] * (1) - rhs[15] * (-params.A[0]) - rhs[16] * (-params.A[1]) - rhs[17] * (-params.A[2]);
  lhs[77] = -rhs[13] * (1) - rhs[15] * (-params.A[3]) - rhs[16] * (-params.A[4]) - rhs[17] * (-params.A[5]);
  lhs[78] = -rhs[14] * (1) - rhs[15] * (-params.A[6]) - rhs[16] * (-params.A[7]) - rhs[17] * (-params.A[8]);
  lhs[79] = -rhs[15] * (1) - rhs[18] * (-params.A[0]) - rhs[19] * (-params.A[1]) - rhs[20] * (-params.A[2]);
  lhs[80] = -rhs[16] * (1) - rhs[18] * (-params.A[3]) - rhs[19] * (-params.A[4]) - rhs[20] * (-params.A[5]);
  lhs[81] = -rhs[17] * (1) - rhs[18] * (-params.A[6]) - rhs[19] * (-params.A[7]) - rhs[20] * (-params.A[8]);
  lhs[82] = -rhs[18] * (1) - rhs[21] * (-params.A[0]) - rhs[22] * (-params.A[1]) - rhs[23] * (-params.A[2]);
  lhs[83] = -rhs[19] * (1) - rhs[21] * (-params.A[3]) - rhs[22] * (-params.A[4]) - rhs[23] * (-params.A[5]);
  lhs[84] = -rhs[20] * (1) - rhs[21] * (-params.A[6]) - rhs[22] * (-params.A[7]) - rhs[23] * (-params.A[8]);
  lhs[85] = -rhs[21] * (1) - rhs[24] * (-params.A[0]) - rhs[25] * (-params.A[1]) - rhs[26] * (-params.A[2]);
  lhs[86] = -rhs[22] * (1) - rhs[24] * (-params.A[3]) - rhs[25] * (-params.A[4]) - rhs[26] * (-params.A[5]);
  lhs[87] = -rhs[23] * (1) - rhs[24] * (-params.A[6]) - rhs[25] * (-params.A[7]) - rhs[26] * (-params.A[8]);
  lhs[88] = -rhs[24] * (1) - rhs[27] * (-params.A[0]) - rhs[28] * (-params.A[1]) - rhs[29] * (-params.A[2]);
  lhs[89] = -rhs[25] * (1) - rhs[27] * (-params.A[3]) - rhs[28] * (-params.A[4]) - rhs[29] * (-params.A[5]);
  lhs[90] = -rhs[26] * (1) - rhs[27] * (-params.A[6]) - rhs[28] * (-params.A[7]) - rhs[29] * (-params.A[8]);
  lhs[91] = -rhs[27] * (1) - rhs[30] * (-params.A[0]) - rhs[31] * (-params.A[1]) - rhs[32] * (-params.A[2]);
  lhs[92] = -rhs[28] * (1) - rhs[30] * (-params.A[3]) - rhs[31] * (-params.A[4]) - rhs[32] * (-params.A[5]);
  lhs[93] = -rhs[29] * (1) - rhs[30] * (-params.A[6]) - rhs[31] * (-params.A[7]) - rhs[32] * (-params.A[8]);
  lhs[94] = -rhs[30] * (1) - rhs[33] * (-params.A[0]) - rhs[34] * (-params.A[1]) - rhs[35] * (-params.A[2]);
  lhs[95] = -rhs[31] * (1) - rhs[33] * (-params.A[3]) - rhs[34] * (-params.A[4]) - rhs[35] * (-params.A[5]);
  lhs[96] = -rhs[32] * (1) - rhs[33] * (-params.A[6]) - rhs[34] * (-params.A[7]) - rhs[35] * (-params.A[8]);
  lhs[97] = -rhs[33] * (1) - rhs[36] * (-params.A[0]) - rhs[37] * (-params.A[1]) - rhs[38] * (-params.A[2]);
  lhs[98] = -rhs[34] * (1) - rhs[36] * (-params.A[3]) - rhs[37] * (-params.A[4]) - rhs[38] * (-params.A[5]);
  lhs[99] = -rhs[35] * (1) - rhs[36] * (-params.A[6]) - rhs[37] * (-params.A[7]) - rhs[38] * (-params.A[8]);
  lhs[100] = -rhs[36] * (1) - rhs[39] * (-params.A[0]) - rhs[40] * (-params.A[1]) - rhs[41] * (-params.A[2]);
  lhs[101] = -rhs[37] * (1) - rhs[39] * (-params.A[3]) - rhs[40] * (-params.A[4]) - rhs[41] * (-params.A[5]);
  lhs[102] = -rhs[38] * (1) - rhs[39] * (-params.A[6]) - rhs[40] * (-params.A[7]) - rhs[41] * (-params.A[8]);
  lhs[103] = -rhs[39] * (1) - rhs[42] * (-params.A[0]) - rhs[43] * (-params.A[1]) - rhs[44] * (-params.A[2]);
  lhs[104] = -rhs[40] * (1) - rhs[42] * (-params.A[3]) - rhs[43] * (-params.A[4]) - rhs[44] * (-params.A[5]);
  lhs[105] = -rhs[41] * (1) - rhs[42] * (-params.A[6]) - rhs[43] * (-params.A[7]) - rhs[44] * (-params.A[8]);
  lhs[106] = -rhs[42] * (1);
  lhs[107] = -rhs[43] * (1);
  lhs[108] = -rhs[44] * (1);
}
void multbymG(double *lhs, double *rhs)
{
  lhs[0] = -rhs[0] * (1);
  lhs[1] = -rhs[0] * (-1) - rhs[16] * (1);
  lhs[2] = -rhs[0] * (-1) - rhs[17] * (1);
  lhs[3] = -rhs[0] * (-1) - rhs[18] * (1);
  lhs[4] = -rhs[0] * (-1) - rhs[16] * (-1);
  lhs[5] = -rhs[0] * (-1) - rhs[17] * (-1);
  lhs[6] = -rhs[0] * (-1) - rhs[18] * (-1);
  lhs[7] = -rhs[1] * (1);
  lhs[8] = -rhs[1] * (-1) - rhs[19] * (1);
  lhs[9] = -rhs[1] * (-1) - rhs[20] * (1);
  lhs[10] = -rhs[1] * (-1) - rhs[21] * (1);
  lhs[11] = -rhs[1] * (-1) - rhs[19] * (-1);
  lhs[12] = -rhs[1] * (-1) - rhs[20] * (-1);
  lhs[13] = -rhs[1] * (-1) - rhs[21] * (-1);
  lhs[14] = -rhs[2] * (1);
  lhs[15] = -rhs[2] * (-1) - rhs[22] * (1);
  lhs[16] = -rhs[2] * (-1) - rhs[23] * (1);
  lhs[17] = -rhs[2] * (-1) - rhs[24] * (1);
  lhs[18] = -rhs[2] * (-1) - rhs[22] * (-1);
  lhs[19] = -rhs[2] * (-1) - rhs[23] * (-1);
  lhs[20] = -rhs[2] * (-1) - rhs[24] * (-1);
  lhs[21] = -rhs[3] * (1);
  lhs[22] = -rhs[3] * (-1) - rhs[25] * (1);
  lhs[23] = -rhs[3] * (-1) - rhs[26] * (1);
  lhs[24] = -rhs[3] * (-1) - rhs[27] * (1);
  lhs[25] = -rhs[3] * (-1) - rhs[25] * (-1);
  lhs[26] = -rhs[3] * (-1) - rhs[26] * (-1);
  lhs[27] = -rhs[3] * (-1) - rhs[27] * (-1);
  lhs[28] = -rhs[4] * (1);
  lhs[29] = -rhs[4] * (-1) - rhs[28] * (1);
  lhs[30] = -rhs[4] * (-1) - rhs[29] * (1);
  lhs[31] = -rhs[4] * (-1) - rhs[30] * (1);
  lhs[32] = -rhs[4] * (-1) - rhs[28] * (-1);
  lhs[33] = -rhs[4] * (-1) - rhs[29] * (-1);
  lhs[34] = -rhs[4] * (-1) - rhs[30] * (-1);
  lhs[35] = -rhs[5] * (1);
  lhs[36] = -rhs[5] * (-1) - rhs[31] * (1);
  lhs[37] = -rhs[5] * (-1) - rhs[32] * (1);
  lhs[38] = -rhs[5] * (-1) - rhs[33] * (1);
  lhs[39] = -rhs[5] * (-1) - rhs[31] * (-1);
  lhs[40] = -rhs[5] * (-1) - rhs[32] * (-1);
  lhs[41] = -rhs[5] * (-1) - rhs[33] * (-1);
  lhs[42] = -rhs[6] * (1);
  lhs[43] = -rhs[6] * (-1) - rhs[34] * (1);
  lhs[44] = -rhs[6] * (-1) - rhs[35] * (1);
  lhs[45] = -rhs[6] * (-1) - rhs[36] * (1);
  lhs[46] = -rhs[6] * (-1) - rhs[34] * (-1);
  lhs[47] = -rhs[6] * (-1) - rhs[35] * (-1);
  lhs[48] = -rhs[6] * (-1) - rhs[36] * (-1);
  lhs[49] = -rhs[7] * (1);
  lhs[50] = -rhs[7] * (-1) - rhs[37] * (1);
  lhs[51] = -rhs[7] * (-1) - rhs[38] * (1);
  lhs[52] = -rhs[7] * (-1) - rhs[39] * (1);
  lhs[53] = -rhs[7] * (-1) - rhs[37] * (-1);
  lhs[54] = -rhs[7] * (-1) - rhs[38] * (-1);
  lhs[55] = -rhs[7] * (-1) - rhs[39] * (-1);
  lhs[56] = -rhs[8] * (1);
  lhs[57] = -rhs[8] * (-1) - rhs[40] * (1);
  lhs[58] = -rhs[8] * (-1) - rhs[41] * (1);
  lhs[59] = -rhs[8] * (-1) - rhs[42] * (1);
  lhs[60] = -rhs[8] * (-1) - rhs[40] * (-1);
  lhs[61] = -rhs[8] * (-1) - rhs[41] * (-1);
  lhs[62] = -rhs[8] * (-1) - rhs[42] * (-1);
  lhs[63] = -rhs[9] * (1);
  lhs[64] = -rhs[9] * (-1) - rhs[43] * (1);
  lhs[65] = -rhs[9] * (-1) - rhs[44] * (1);
  lhs[66] = -rhs[9] * (-1) - rhs[45] * (1);
  lhs[67] = -rhs[9] * (-1) - rhs[43] * (-1);
  lhs[68] = -rhs[9] * (-1) - rhs[44] * (-1);
  lhs[69] = -rhs[9] * (-1) - rhs[45] * (-1);
  lhs[70] = -rhs[10] * (1);
  lhs[71] = -rhs[10] * (-1) - rhs[46] * (1);
  lhs[72] = -rhs[10] * (-1) - rhs[47] * (1);
  lhs[73] = -rhs[10] * (-1) - rhs[48] * (1);
  lhs[74] = -rhs[10] * (-1) - rhs[46] * (-1);
  lhs[75] = -rhs[10] * (-1) - rhs[47] * (-1);
  lhs[76] = -rhs[10] * (-1) - rhs[48] * (-1);
  lhs[77] = -rhs[11] * (1);
  lhs[78] = -rhs[11] * (-1) - rhs[49] * (1);
  lhs[79] = -rhs[11] * (-1) - rhs[50] * (1);
  lhs[80] = -rhs[11] * (-1) - rhs[51] * (1);
  lhs[81] = -rhs[11] * (-1) - rhs[49] * (-1);
  lhs[82] = -rhs[11] * (-1) - rhs[50] * (-1);
  lhs[83] = -rhs[11] * (-1) - rhs[51] * (-1);
  lhs[84] = -rhs[12] * (1);
  lhs[85] = -rhs[12] * (-1) - rhs[52] * (1);
  lhs[86] = -rhs[12] * (-1) - rhs[53] * (1);
  lhs[87] = -rhs[12] * (-1) - rhs[54] * (1);
  lhs[88] = -rhs[12] * (-1) - rhs[52] * (-1);
  lhs[89] = -rhs[12] * (-1) - rhs[53] * (-1);
  lhs[90] = -rhs[12] * (-1) - rhs[54] * (-1);
  lhs[91] = -rhs[13] * (1);
  lhs[92] = -rhs[13] * (-1) - rhs[55] * (1);
  lhs[93] = -rhs[13] * (-1) - rhs[56] * (1);
  lhs[94] = -rhs[13] * (-1) - rhs[57] * (1);
  lhs[95] = -rhs[13] * (-1) - rhs[55] * (-1);
  lhs[96] = -rhs[13] * (-1) - rhs[56] * (-1);
  lhs[97] = -rhs[13] * (-1) - rhs[57] * (-1);
  lhs[98] = -rhs[14] * (1);
  lhs[99] = -rhs[14] * (-1) - rhs[58] * (1);
  lhs[100] = -rhs[14] * (-1) - rhs[59] * (1);
  lhs[101] = -rhs[14] * (-1) - rhs[60] * (1);
  lhs[102] = -rhs[14] * (-1) - rhs[58] * (-1);
  lhs[103] = -rhs[14] * (-1) - rhs[59] * (-1);
  lhs[104] = -rhs[14] * (-1) - rhs[60] * (-1);
  lhs[105] = -rhs[15] * (1);
  lhs[106] = -rhs[15] * (-1) - rhs[61] * (1);
  lhs[107] = -rhs[15] * (-1) - rhs[62] * (1);
  lhs[108] = -rhs[15] * (-1) - rhs[63] * (1);
  lhs[109] = -rhs[15] * (-1) - rhs[61] * (-1);
  lhs[110] = -rhs[15] * (-1) - rhs[62] * (-1);
  lhs[111] = -rhs[15] * (-1) - rhs[63] * (-1);
}
void multbymGT(double *lhs, double *rhs)
{
  lhs[0] =
      -rhs[0] * (1) - rhs[1] * (-1) - rhs[2] * (-1) - rhs[3] * (-1) - rhs[4] * (-1) - rhs[5] * (-1) - rhs[6] * (-1);
  lhs[1] =
      -rhs[7] * (1) - rhs[8] * (-1) - rhs[9] * (-1) - rhs[10] * (-1) - rhs[11] * (-1) - rhs[12] * (-1) - rhs[13] * (-1);
  lhs[2] = -rhs[14] * (1) - rhs[15] * (-1) - rhs[16] * (-1) - rhs[17] * (-1) - rhs[18] * (-1) - rhs[19] * (-1) -
           rhs[20] * (-1);
  lhs[3] = -rhs[21] * (1) - rhs[22] * (-1) - rhs[23] * (-1) - rhs[24] * (-1) - rhs[25] * (-1) - rhs[26] * (-1) -
           rhs[27] * (-1);
  lhs[4] = -rhs[28] * (1) - rhs[29] * (-1) - rhs[30] * (-1) - rhs[31] * (-1) - rhs[32] * (-1) - rhs[33] * (-1) -
           rhs[34] * (-1);
  lhs[5] = -rhs[35] * (1) - rhs[36] * (-1) - rhs[37] * (-1) - rhs[38] * (-1) - rhs[39] * (-1) - rhs[40] * (-1) -
           rhs[41] * (-1);
  lhs[6] = -rhs[42] * (1) - rhs[43] * (-1) - rhs[44] * (-1) - rhs[45] * (-1) - rhs[46] * (-1) - rhs[47] * (-1) -
           rhs[48] * (-1);
  lhs[7] = -rhs[49] * (1) - rhs[50] * (-1) - rhs[51] * (-1) - rhs[52] * (-1) - rhs[53] * (-1) - rhs[54] * (-1) -
           rhs[55] * (-1);
  lhs[8] = -rhs[56] * (1) - rhs[57] * (-1) - rhs[58] * (-1) - rhs[59] * (-1) - rhs[60] * (-1) - rhs[61] * (-1) -
           rhs[62] * (-1);
  lhs[9] = -rhs[63] * (1) - rhs[64] * (-1) - rhs[65] * (-1) - rhs[66] * (-1) - rhs[67] * (-1) - rhs[68] * (-1) -
           rhs[69] * (-1);
  lhs[10] = -rhs[70] * (1) - rhs[71] * (-1) - rhs[72] * (-1) - rhs[73] * (-1) - rhs[74] * (-1) - rhs[75] * (-1) -
            rhs[76] * (-1);
  lhs[11] = -rhs[77] * (1) - rhs[78] * (-1) - rhs[79] * (-1) - rhs[80] * (-1) - rhs[81] * (-1) - rhs[82] * (-1) -
            rhs[83] * (-1);
  lhs[12] = -rhs[84] * (1) - rhs[85] * (-1) - rhs[86] * (-1) - rhs[87] * (-1) - rhs[88] * (-1) - rhs[89] * (-1) -
            rhs[90] * (-1);
  lhs[13] = -rhs[91] * (1) - rhs[92] * (-1) - rhs[93] * (-1) - rhs[94] * (-1) - rhs[95] * (-1) - rhs[96] * (-1) -
            rhs[97] * (-1);
  lhs[14] = -rhs[98] * (1) - rhs[99] * (-1) - rhs[100] * (-1) - rhs[101] * (-1) - rhs[102] * (-1) - rhs[103] * (-1) -
            rhs[104] * (-1);
  lhs[15] = -rhs[105] * (1) - rhs[106] * (-1) - rhs[107] * (-1) - rhs[108] * (-1) - rhs[109] * (-1) - rhs[110] * (-1) -
            rhs[111] * (-1);
  lhs[16] = -rhs[1] * (1) - rhs[4] * (-1);
  lhs[17] = -rhs[2] * (1) - rhs[5] * (-1);
  lhs[18] = -rhs[3] * (1) - rhs[6] * (-1);
  lhs[19] = -rhs[8] * (1) - rhs[11] * (-1);
  lhs[20] = -rhs[9] * (1) - rhs[12] * (-1);
  lhs[21] = -rhs[10] * (1) - rhs[13] * (-1);
  lhs[22] = -rhs[15] * (1) - rhs[18] * (-1);
  lhs[23] = -rhs[16] * (1) - rhs[19] * (-1);
  lhs[24] = -rhs[17] * (1) - rhs[20] * (-1);
  lhs[25] = -rhs[22] * (1) - rhs[25] * (-1);
  lhs[26] = -rhs[23] * (1) - rhs[26] * (-1);
  lhs[27] = -rhs[24] * (1) - rhs[27] * (-1);
  lhs[28] = -rhs[29] * (1) - rhs[32] * (-1);
  lhs[29] = -rhs[30] * (1) - rhs[33] * (-1);
  lhs[30] = -rhs[31] * (1) - rhs[34] * (-1);
  lhs[31] = -rhs[36] * (1) - rhs[39] * (-1);
  lhs[32] = -rhs[37] * (1) - rhs[40] * (-1);
  lhs[33] = -rhs[38] * (1) - rhs[41] * (-1);
  lhs[34] = -rhs[43] * (1) - rhs[46] * (-1);
  lhs[35] = -rhs[44] * (1) - rhs[47] * (-1);
  lhs[36] = -rhs[45] * (1) - rhs[48] * (-1);
  lhs[37] = -rhs[50] * (1) - rhs[53] * (-1);
  lhs[38] = -rhs[51] * (1) - rhs[54] * (-1);
  lhs[39] = -rhs[52] * (1) - rhs[55] * (-1);
  lhs[40] = -rhs[57] * (1) - rhs[60] * (-1);
  lhs[41] = -rhs[58] * (1) - rhs[61] * (-1);
  lhs[42] = -rhs[59] * (1) - rhs[62] * (-1);
  lhs[43] = -rhs[64] * (1) - rhs[67] * (-1);
  lhs[44] = -rhs[65] * (1) - rhs[68] * (-1);
  lhs[45] = -rhs[66] * (1) - rhs[69] * (-1);
  lhs[46] = -rhs[71] * (1) - rhs[74] * (-1);
  lhs[47] = -rhs[72] * (1) - rhs[75] * (-1);
  lhs[48] = -rhs[73] * (1) - rhs[76] * (-1);
  lhs[49] = -rhs[78] * (1) - rhs[81] * (-1);
  lhs[50] = -rhs[79] * (1) - rhs[82] * (-1);
  lhs[51] = -rhs[80] * (1) - rhs[83] * (-1);
  lhs[52] = -rhs[85] * (1) - rhs[88] * (-1);
  lhs[53] = -rhs[86] * (1) - rhs[89] * (-1);
  lhs[54] = -rhs[87] * (1) - rhs[90] * (-1);
  lhs[55] = -rhs[92] * (1) - rhs[95] * (-1);
  lhs[56] = -rhs[93] * (1) - rhs[96] * (-1);
  lhs[57] = -rhs[94] * (1) - rhs[97] * (-1);
  lhs[58] = -rhs[99] * (1) - rhs[102] * (-1);
  lhs[59] = -rhs[100] * (1) - rhs[103] * (-1);
  lhs[60] = -rhs[101] * (1) - rhs[104] * (-1);
  lhs[61] = -rhs[106] * (1) - rhs[109] * (-1);
  lhs[62] = -rhs[107] * (1) - rhs[110] * (-1);
  lhs[63] = -rhs[108] * (1) - rhs[111] * (-1);
  lhs[64] = 0;
  lhs[65] = 0;
  lhs[66] = 0;
  lhs[67] = 0;
  lhs[68] = 0;
  lhs[69] = 0;
  lhs[70] = 0;
  lhs[71] = 0;
  lhs[72] = 0;
  lhs[73] = 0;
  lhs[74] = 0;
  lhs[75] = 0;
  lhs[76] = 0;
  lhs[77] = 0;
  lhs[78] = 0;
  lhs[79] = 0;
  lhs[80] = 0;
  lhs[81] = 0;
  lhs[82] = 0;
  lhs[83] = 0;
  lhs[84] = 0;
  lhs[85] = 0;
  lhs[86] = 0;
  lhs[87] = 0;
  lhs[88] = 0;
  lhs[89] = 0;
  lhs[90] = 0;
  lhs[91] = 0;
  lhs[92] = 0;
  lhs[93] = 0;
  lhs[94] = 0;
  lhs[95] = 0;
  lhs[96] = 0;
  lhs[97] = 0;
  lhs[98] = 0;
  lhs[99] = 0;
  lhs[100] = 0;
  lhs[101] = 0;
  lhs[102] = 0;
  lhs[103] = 0;
  lhs[104] = 0;
  lhs[105] = 0;
  lhs[106] = 0;
  lhs[107] = 0;
  lhs[108] = 0;
}
void multbyP(double *lhs, double *rhs)
{
  /* TODO use the fact that P is symmetric? */
  /* TODO check doubling / half factor etc. */
  lhs[0] = 0;
  lhs[1] = 0;
  lhs[2] = 0;
  lhs[3] = 0;
  lhs[4] = 0;
  lhs[5] = 0;
  lhs[6] = 0;
  lhs[7] = 0;
  lhs[8] = 0;
  lhs[9] = 0;
  lhs[10] = 0;
  lhs[11] = 0;
  lhs[12] = 0;
  lhs[13] = 0;
  lhs[14] = 0;
  lhs[15] = 0;
  lhs[16] = rhs[16] * (2);
  lhs[17] = rhs[17] * (2);
  lhs[18] = rhs[18] * (2);
  lhs[19] = rhs[19] * (2);
  lhs[20] = rhs[20] * (2);
  lhs[21] = rhs[21] * (2);
  lhs[22] = rhs[22] * (2);
  lhs[23] = rhs[23] * (2);
  lhs[24] = rhs[24] * (2);
  lhs[25] = rhs[25] * (2);
  lhs[26] = rhs[26] * (2);
  lhs[27] = rhs[27] * (2);
  lhs[28] = rhs[28] * (2);
  lhs[29] = rhs[29] * (2);
  lhs[30] = rhs[30] * (2);
  lhs[31] = rhs[31] * (2);
  lhs[32] = rhs[32] * (2);
  lhs[33] = rhs[33] * (2);
  lhs[34] = rhs[34] * (2);
  lhs[35] = rhs[35] * (2);
  lhs[36] = rhs[36] * (2);
  lhs[37] = rhs[37] * (2);
  lhs[38] = rhs[38] * (2);
  lhs[39] = rhs[39] * (2);
  lhs[40] = rhs[40] * (2);
  lhs[41] = rhs[41] * (2);
  lhs[42] = rhs[42] * (2);
  lhs[43] = rhs[43] * (2);
  lhs[44] = rhs[44] * (2);
  lhs[45] = rhs[45] * (2);
  lhs[46] = rhs[46] * (2);
  lhs[47] = rhs[47] * (2);
  lhs[48] = rhs[48] * (2);
  lhs[49] = rhs[49] * (2);
  lhs[50] = rhs[50] * (2);
  lhs[51] = rhs[51] * (2);
  lhs[52] = rhs[52] * (2);
  lhs[53] = rhs[53] * (2);
  lhs[54] = rhs[54] * (2);
  lhs[55] = rhs[55] * (2);
  lhs[56] = rhs[56] * (2);
  lhs[57] = rhs[57] * (2);
  lhs[58] = rhs[58] * (2);
  lhs[59] = rhs[59] * (2);
  lhs[60] = rhs[60] * (2);
  lhs[61] = 0;
  lhs[62] = 0;
  lhs[63] = 0;
  lhs[64] = 0;
  lhs[65] = 0;
  lhs[66] = 0;
  lhs[67] = 0;
  lhs[68] = 0;
  lhs[69] = 0;
  lhs[70] = 0;
  lhs[71] = 0;
  lhs[72] = 0;
  lhs[73] = 0;
  lhs[74] = 0;
  lhs[75] = 0;
  lhs[76] = 0;
  lhs[77] = 0;
  lhs[78] = 0;
  lhs[79] = 0;
  lhs[80] = 0;
  lhs[81] = 0;
  lhs[82] = 0;
  lhs[83] = 0;
  lhs[84] = 0;
  lhs[85] = 0;
  lhs[86] = 0;
  lhs[87] = 0;
  lhs[88] = 0;
  lhs[89] = 0;
  lhs[90] = 0;
  lhs[91] = 0;
  lhs[92] = 0;
  lhs[93] = 0;
  lhs[94] = 0;
  lhs[95] = 0;
  lhs[96] = 0;
  lhs[97] = 0;
  lhs[98] = 0;
  lhs[99] = 0;
  lhs[100] = 0;
  lhs[101] = 0;
  lhs[102] = 0;
  lhs[103] = 0;
  lhs[104] = 0;
  lhs[105] = 0;
  lhs[106] =
      rhs[106] * (2 * params.Q_final[0]) + rhs[107] * (2 * params.Q_final[3]) + rhs[108] * (2 * params.Q_final[6]);
  lhs[107] =
      rhs[106] * (2 * params.Q_final[1]) + rhs[107] * (2 * params.Q_final[4]) + rhs[108] * (2 * params.Q_final[7]);
  lhs[108] =
      rhs[106] * (2 * params.Q_final[2]) + rhs[107] * (2 * params.Q_final[5]) + rhs[108] * (2 * params.Q_final[8]);
}
void fillq(void)
{
  work.q[0] = 0;
  work.q[1] = 0;
  work.q[2] = 0;
  work.q[3] = 0;
  work.q[4] = 0;
  work.q[5] = 0;
  work.q[6] = 0;
  work.q[7] = 0;
  work.q[8] = 0;
  work.q[9] = 0;
  work.q[10] = 0;
  work.q[11] = 0;
  work.q[12] = 0;
  work.q[13] = 0;
  work.q[14] = 0;
  work.q[15] = 0;
  work.q[16] = 0;
  work.q[17] = 0;
  work.q[18] = 0;
  work.q[19] = 0;
  work.q[20] = 0;
  work.q[21] = 0;
  work.q[22] = 0;
  work.q[23] = 0;
  work.q[24] = 0;
  work.q[25] = 0;
  work.q[26] = 0;
  work.q[27] = 0;
  work.q[28] = 0;
  work.q[29] = 0;
  work.q[30] = 0;
  work.q[31] = 0;
  work.q[32] = 0;
  work.q[33] = 0;
  work.q[34] = 0;
  work.q[35] = 0;
  work.q[36] = 0;
  work.q[37] = 0;
  work.q[38] = 0;
  work.q[39] = 0;
  work.q[40] = 0;
  work.q[41] = 0;
  work.q[42] = 0;
  work.q[43] = 0;
  work.q[44] = 0;
  work.q[45] = 0;
  work.q[46] = 0;
  work.q[47] = 0;
  work.q[48] = 0;
  work.q[49] = 0;
  work.q[50] = 0;
  work.q[51] = 0;
  work.q[52] = 0;
  work.q[53] = 0;
  work.q[54] = 0;
  work.q[55] = 0;
  work.q[56] = 0;
  work.q[57] = 0;
  work.q[58] = 0;
  work.q[59] = 0;
  work.q[60] = 0;
  work.q[61] = 0;
  work.q[62] = 0;
  work.q[63] = 0;
  work.q[64] = 0;
  work.q[65] = 0;
  work.q[66] = 0;
  work.q[67] = 0;
  work.q[68] = 0;
  work.q[69] = 0;
  work.q[70] = 0;
  work.q[71] = 0;
  work.q[72] = 0;
  work.q[73] = 0;
  work.q[74] = 0;
  work.q[75] = 0;
  work.q[76] = 0;
  work.q[77] = 0;
  work.q[78] = 0;
  work.q[79] = 0;
  work.q[80] = 0;
  work.q[81] = 0;
  work.q[82] = 0;
  work.q[83] = 0;
  work.q[84] = 0;
  work.q[85] = 0;
  work.q[86] = 0;
  work.q[87] = 0;
  work.q[88] = 0;
  work.q[89] = 0;
  work.q[90] = 0;
  work.q[91] = 0;
  work.q[92] = 0;
  work.q[93] = 0;
  work.q[94] = 0;
  work.q[95] = 0;
  work.q[96] = 0;
  work.q[97] = 0;
  work.q[98] = 0;
  work.q[99] = 0;
  work.q[100] = 0;
  work.q[101] = 0;
  work.q[102] = 0;
  work.q[103] = 0;
  work.q[104] = 0;
  work.q[105] = 0;
  work.q[106] =
      -2 * (params.Q_final[0] * params.xf[0] + params.Q_final[3] * params.xf[1] + params.Q_final[6] * params.xf[2]);
  work.q[107] =
      -2 * (params.Q_final[1] * params.xf[0] + params.Q_final[4] * params.xf[1] + params.Q_final[7] * params.xf[2]);
  work.q[108] =
      -2 * (params.Q_final[2] * params.xf[0] + params.Q_final[5] * params.xf[1] + params.Q_final[8] * params.xf[2]);
}
void fillh(void)
{
  work.h[0] = params.v_max[0];
  work.h[1] = 0;
  work.h[2] = 0;
  work.h[3] = 0;
  work.h[4] = 0;
  work.h[5] = 0;
  work.h[6] = 0;
  work.h[7] = params.v_max[0];
  work.h[8] = 0;
  work.h[9] = 0;
  work.h[10] = 0;
  work.h[11] = 0;
  work.h[12] = 0;
  work.h[13] = 0;
  work.h[14] = params.v_max[0];
  work.h[15] = 0;
  work.h[16] = 0;
  work.h[17] = 0;
  work.h[18] = 0;
  work.h[19] = 0;
  work.h[20] = 0;
  work.h[21] = params.v_max[0];
  work.h[22] = 0;
  work.h[23] = 0;
  work.h[24] = 0;
  work.h[25] = 0;
  work.h[26] = 0;
  work.h[27] = 0;
  work.h[28] = params.v_max[0];
  work.h[29] = 0;
  work.h[30] = 0;
  work.h[31] = 0;
  work.h[32] = 0;
  work.h[33] = 0;
  work.h[34] = 0;
  work.h[35] = params.v_max[0];
  work.h[36] = 0;
  work.h[37] = 0;
  work.h[38] = 0;
  work.h[39] = 0;
  work.h[40] = 0;
  work.h[41] = 0;
  work.h[42] = params.v_max[0];
  work.h[43] = 0;
  work.h[44] = 0;
  work.h[45] = 0;
  work.h[46] = 0;
  work.h[47] = 0;
  work.h[48] = 0;
  work.h[49] = params.v_max[0];
  work.h[50] = 0;
  work.h[51] = 0;
  work.h[52] = 0;
  work.h[53] = 0;
  work.h[54] = 0;
  work.h[55] = 0;
  work.h[56] = params.v_max[0];
  work.h[57] = 0;
  work.h[58] = 0;
  work.h[59] = 0;
  work.h[60] = 0;
  work.h[61] = 0;
  work.h[62] = 0;
  work.h[63] = params.v_max[0];
  work.h[64] = 0;
  work.h[65] = 0;
  work.h[66] = 0;
  work.h[67] = 0;
  work.h[68] = 0;
  work.h[69] = 0;
  work.h[70] = params.v_max[0];
  work.h[71] = 0;
  work.h[72] = 0;
  work.h[73] = 0;
  work.h[74] = 0;
  work.h[75] = 0;
  work.h[76] = 0;
  work.h[77] = params.v_max[0];
  work.h[78] = 0;
  work.h[79] = 0;
  work.h[80] = 0;
  work.h[81] = 0;
  work.h[82] = 0;
  work.h[83] = 0;
  work.h[84] = params.v_max[0];
  work.h[85] = 0;
  work.h[86] = 0;
  work.h[87] = 0;
  work.h[88] = 0;
  work.h[89] = 0;
  work.h[90] = 0;
  work.h[91] = params.v_max[0];
  work.h[92] = 0;
  work.h[93] = 0;
  work.h[94] = 0;
  work.h[95] = 0;
  work.h[96] = 0;
  work.h[97] = 0;
  work.h[98] = params.v_max[0];
  work.h[99] = 0;
  work.h[100] = 0;
  work.h[101] = 0;
  work.h[102] = 0;
  work.h[103] = 0;
  work.h[104] = 0;
  work.h[105] = params.v_max[0];
  work.h[106] = 0;
  work.h[107] = 0;
  work.h[108] = 0;
  work.h[109] = 0;
  work.h[110] = 0;
  work.h[111] = 0;
}
void fillb(void)
{
  work.b[0] = params.A[0] * params.x_0[0] + params.A[3] * params.x_0[1] + params.A[6] * params.x_0[2];
  work.b[1] = params.A[1] * params.x_0[0] + params.A[4] * params.x_0[1] + params.A[7] * params.x_0[2];
  work.b[2] = params.A[2] * params.x_0[0] + params.A[5] * params.x_0[1] + params.A[8] * params.x_0[2];
  work.b[3] = 0;
  work.b[4] = 0;
  work.b[5] = 0;
  work.b[6] = 0;
  work.b[7] = 0;
  work.b[8] = 0;
  work.b[9] = 0;
  work.b[10] = 0;
  work.b[11] = 0;
  work.b[12] = 0;
  work.b[13] = 0;
  work.b[14] = 0;
  work.b[15] = 0;
  work.b[16] = 0;
  work.b[17] = 0;
  work.b[18] = 0;
  work.b[19] = 0;
  work.b[20] = 0;
  work.b[21] = 0;
  work.b[22] = 0;
  work.b[23] = 0;
  work.b[24] = 0;
  work.b[25] = 0;
  work.b[26] = 0;
  work.b[27] = 0;
  work.b[28] = 0;
  work.b[29] = 0;
  work.b[30] = 0;
  work.b[31] = 0;
  work.b[32] = 0;
  work.b[33] = 0;
  work.b[34] = 0;
  work.b[35] = 0;
  work.b[36] = 0;
  work.b[37] = 0;
  work.b[38] = 0;
  work.b[39] = 0;
  work.b[40] = 0;
  work.b[41] = 0;
  work.b[42] = 0;
  work.b[43] = 0;
  work.b[44] = 0;
}
void pre_ops(void)
{
  work.quad_416097357824[0] =
      (params.xf[0] *
           (params.Q_final[0] * params.xf[0] + params.Q_final[3] * params.xf[1] + params.Q_final[6] * params.xf[2]) +
       params.xf[1] *
           (params.Q_final[1] * params.xf[0] + params.Q_final[4] * params.xf[1] + params.Q_final[7] * params.xf[2]) +
       params.xf[2] *
           (params.Q_final[2] * params.xf[0] + params.Q_final[5] * params.xf[1] + params.Q_final[8] * params.xf[2]));
}
