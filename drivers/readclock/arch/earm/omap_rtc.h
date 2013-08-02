#ifndef __OMAP_RTC_REGISTERS_H
#define __OMAP_RTC_REGISTERS_H

/* RTC Addresses for am335x (BeagleBone White / BeagleBone Black) */

/* Base Addresses */
#define AM335X_RTC_SS_BASE 0x44e3e000 

/* Size of RTC Register Address Range */
#define AM335X_RTC_SS_SIZE 0x1000

/* Register Offsets */
#define AM335X_RTC_SS_SECONDS_REG 0x0
#define AM335X_RTC_SS_MINUTES_REG 0x4
#define AM335X_RTC_SS_HOURS_REG 0x8
#define AM335X_RTC_SS_DAYS_REG 0xC
#define AM335X_RTC_SS_MONTHS_REG 0x10
#define AM335X_RTC_SS_YEARS_REG 0x14
#define AM335X_RTC_SS_WEEKS_REG 0x18
#define AM335X_RTC_SS_ALARM_SECONDS_REG 0x20
#define AM335X_RTC_SS_ALARM_MINUTES_REG 0x24
#define AM335X_RTC_SS_ALARM_HOURS_REG 0x28
#define AM335X_RTC_SS_ALARM_DAYS_REG 0x2C
#define AM335X_RTC_SS_ALARM_MONTHS_REG 0x30
#define AM335X_RTC_SS_ALARM_YEARS_REG 0x34
#define AM335X_RTC_SS_RTC_CTRL_REG 0x40
#define AM335X_RTC_SS_RTC_STATUS_REG 0x44
#define AM335X_RTC_SS_RTC_INTERRUPTS_REG 0x48
#define AM335X_RTC_SS_RTC_COMP_LSB_REG 0x4C
#define AM335X_RTC_SS_RTC_COMP_MSB_REG 0x50
#define AM335X_RTC_SS_RTC_OSC_REG 0x54
#define AM335X_RTC_SS_RTC_SCRATCH0_REG 0x60
#define AM335X_RTC_SS_RTC_SCRATCH1_REG 0x64
#define AM335X_RTC_SS_RTC_SCRATCH2_REG 0x68
#define AM335X_RTC_SS_KICK0R 0x6C
#define AM335X_RTC_SS_KICK1R 0x70
#define AM335X_RTC_SS_RTC_REVISION 0x74
#define AM335X_RTC_SS_RTC_SYSCONFIG 0x78
#define AM335X_RTC_SS_RTC_IRQWAKEEN 0x7C
#define AM335X_RTC_SS_ALARM2_SECONDS_REG 0x80
#define AM335X_RTC_SS_ALARM2_MINUTES_REG 0x84
#define AM335X_RTC_SS_ALARM2_HOURS_REG 0x88
#define AM335X_RTC_SS_ALARM2_DAYS_REG 0x8C
#define AM335X_RTC_SS_ALARM2_MONTHS_REG 0x90
#define AM335X_RTC_SS_ALARM2_YEARS_REG 0x94
#define AM335X_RTC_SS_RTC_PMIC 0x98
#define AM335X_RTC_SS_RTC_DEBOUNCE 0x9C

/* Constants */
#define AM335X_RTC_SS_KICK0R_UNLOCK_MASK 0x83E70B13
#define AM335X_RTC_SS_KICK1R_UNLOCK_MASK 0x95A4F1E0

#define AM335X_RTC_SS_KICK0R_LOCK_MASK 0x546f6d20
#define AM335X_RTC_SS_KICK1R_LOCK_MASK 0x436f7274

/* Bits */

/* RTC_SS_RTC_STATUS_REG */
#define RTC_BUSY_BIT 0

/* RTC_SS_RTC_CTRL_REG */
#define RTC_STOP_BIT 0 

/* RTC_SS_RTC_SYSCONFIG */
#define NOIDLE_BIT 0

/* RTC_SS_RTC_OSC_REG */
#define EN_32KCLK_BIT 6

/* RTC_SS_RTC_PMIC */
#define PWR_ENABLE_EN_BIT 16

/* RTC_SS_RTC_INTERRUPTS_REG */
#define IT_ALARM2_BIT 4

/* Clocks */
#define CM_RTC_RTC_CLKCTRL 0x800
#define CM_RTC_RTC_CLKCTRL_IDLEST ((0<<17)|(0<<16))
#define CM_RTC_RTC_CLKCTRL_MODULEMODE  ((1<<1)|(0<<0))
#define CM_RTC_RTC_CLKCTRL_MASK (CM_RTC_RTC_CLKCTRL_IDLEST|CM_RTC_RTC_CLKCTRL_MODULEMODE)

#define CM_RTC_CLKSTCTRL 0x804
#define CLKACTIVITY_RTC_32KCLK (1<<9)
#define CLKACTIVITY_L4_RTC_GCLK (1<<8)
#define CLKTRCTRL ((0<<1)|(0<<0))
#define CM_RTC_CLKSTCTRL_MASK (CLKACTIVITY_RTC_32KCLK|CLKACTIVITY_L4_RTC_GCLK|CLKTRCTRL)

#endif /* __OMAP_RTC_REGISTERS_H */