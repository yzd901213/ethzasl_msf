/*

Copyright (c) 2013, Simon Lynen, ASL, ETH Zurich, Switzerland
You can contact the author at <slynen at ethz dot ch>

All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright
notice, this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright
notice, this list of conditions and the following disclaimer in the
documentation and/or other materials provided with the distribution.
 * Neither the name of ETHZ-ASL nor the
names of its contributors may be used to endorse or promote products
derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL ETHZ-ASL BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

 */
#ifndef MSF_MACROS_H_
#define MSF_MACROS_H_

#ifndef NUMERIC_PREC
#define NUMERIC_PREC 4 //number of decimal places
#endif

#ifdef UNUSEDPARAM
#elif defined(__GNUC__)
# define UNUSEDPARAM(x) UNUSED_ ## x __attribute__((unused))
#elif defined(__LCLINT__)
# define UNUSEDPARAM(x) /*@unused@*/ x
#else
# define UNUSEDPARAM(x) x
#endif

#ifndef UNUSED
# define UNUSED(x) (void)x;
#endif

#ifndef STREAMQUAT
#define STREAMQUAT(q) "["<<std::setprecision(3)<<(q).w()<<", "<<(q).x()<<", "<<(q).y()<<", "<<(q).z()<<std::setprecision(NUMERIC_PREC)<<"]"
#endif

#ifndef DEG2RAD
#define DEG2RAD (M_PI/180.0)
#endif

#endif /* MSF_MACROS_H_ */
