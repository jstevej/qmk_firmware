// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define XXX KC_NO

#define LAYOUT_split_3x5_2( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
                   k33, k34, k35, k36 \
    ) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09 }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29 }, \
    { XXX, XXX, XXX, k33, k34, k35, k36, XXX, XXX, XXX } \
}

#define LAYOUT LAYOUT_split_3x5_2
