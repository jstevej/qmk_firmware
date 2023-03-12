// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define XXX KC_NO

#define LAYOUT_split_3x5_3( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
              k30, k31, k32, k33, k34, k35 \
    ) { \
    { k00, k01, k02, k03, k04, XXX, XXX, XXX, XXX, XXX }, \
    { k10, k11, k12, k13, k14, XXX, XXX, XXX, XXX, XXX }, \
    { k20, k21, k22, k23, k24, XXX, XXX, XXX, XXX, XXX }, \
    { XXX, XXX, k30, k31, k32, XXX, XXX, XXX, XXX, XXX }, \
    { XXX, XXX, XXX, XXX, XXX, k05, k06, k07, k08, k09 }, \
    { XXX, XXX, XXX, XXX, XXX, k15, k16, k17, k18, k19 }, \
    { XXX, XXX, XXX, XXX, XXX, k25, k26, k27, k28, k29 }, \
    { XXX, XXX, XXX, XXX, XXX, k33, k34, k35, XXX, XXX }, \
}

#define LAYOUT_split_3x5_2( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
                   k30, k31, k32, k33 \
    ) { \
    { k00, k01, k02, k03, k04, XXX, XXX, XXX, XXX, XXX }, \
    { k10, k11, k12, k13, k14, XXX, XXX, XXX, XXX, XXX }, \
    { k20, k21, k22, k23, k24, XXX, XXX, XXX, XXX, XXX }, \
    { XXX, XXX, XXX, k30, k31, XXX, XXX, XXX, XXX, XXX }, \
    { XXX, XXX, XXX, XXX, XXX, k05, k06, k07, k08, k09 }, \
    { XXX, XXX, XXX, XXX, XXX, k15, k16, k17, k18, k19 }, \
    { XXX, XXX, XXX, XXX, XXX, k25, k26, k27, k28, k29 }, \
    { XXX, XXX, XXX, XXX, XXX, k32, k33, XXX, XXX, XXX }, \
}

#define LAYOUT LAYOUT_split_3x5_3
