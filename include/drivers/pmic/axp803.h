/*
 * Copyright © 2017-2020 The Crust Firmware Authors.
 * SPDX-License-Identifier: BSD-3-Clause OR GPL-2.0-only
 */

#ifndef DRIVERS_PMIC_AXP803_H
#define DRIVERS_PMIC_AXP803_H

#include <device.h>
#include <pmic.h>
#include <regmap.h>

struct axp803_pmic {
	struct device        dev;
	const struct regmap *map;
};

extern const struct axp803_pmic axp803_pmic;

#endif /* DRIVERS_PMIC_AXP803_H */
