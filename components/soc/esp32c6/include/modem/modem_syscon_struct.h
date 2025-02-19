/**
 * SPDX-FileCopyrightText: 2022 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

typedef union {
    struct {
        uint32_t clk_en: 1;
        uint32_t reserved_1: 31;
    };
    uint32_t val;
} modem_syscon_test_conf_reg_t;

typedef union {
    struct {
        uint32_t reserved_0: 21;
        uint32_t clk_data_dump_mux: 1;
        uint32_t clk_etm_en: 1;
        uint32_t clk_zb_apb_en: 1;
        uint32_t clk_zb_mac_en: 1;
        uint32_t clk_modem_sec_ecb_en: 1;
        uint32_t clk_modem_sec_ccm_en: 1;
        uint32_t clk_modem_sec_bah_en: 1;
        uint32_t clk_modem_sec_apb_en: 1;
        uint32_t clk_modem_sec_en: 1;
        uint32_t clk_ble_timer_en: 1;
        uint32_t clk_data_dump_en: 1;
    };
    uint32_t val;
} modem_syscon_clk_conf_reg_t;

typedef union {
    struct {
        uint32_t reserved_0: 22;
        uint32_t clk_etm_fo: 1;
        uint32_t clk_zb_apb_fo: 1;
        uint32_t clk_zb_mac_fo: 1;
        uint32_t clk_modem_sec_ecb_fo: 1;
        uint32_t clk_modem_sec_ccm_fo: 1;
        uint32_t clk_modem_sec_bah_fo: 1;
        uint32_t clk_modem_sec_apb_fo: 1;
        uint32_t clk_modem_sec_fo: 1;
        uint32_t clk_ble_timer_fo: 1;
        uint32_t clk_data_dump_fo: 1;
    };
    uint32_t val;
} modem_syscon_clk_conf_force_on_reg_t;

typedef union {
    struct {
        uint32_t reserved_0: 8;
        uint32_t clk_zb_st_map: 4;
        uint32_t clk_fe_st_map: 4;
        uint32_t clk_bt_st_map: 4;
        uint32_t clk_wifi_st_map: 4;
        uint32_t clk_modem_peri_st_map: 4;
        uint32_t clk_modem_apb_st_map: 4;
    };
    uint32_t val;
} modem_syscon_clk_conf_power_st_reg_t;

typedef union {
    struct {
        uint32_t reserved_0: 8;
        uint32_t rst_wifibb: 1;
        uint32_t reserved_9: 1;
        uint32_t rst_wifimac: 1;
        uint32_t reserved_11: 3;
        uint32_t rst_fe: 1;
        uint32_t rst_btmac_apb: 1;
        uint32_t rst_btmac: 1;
        uint32_t rst_btbb_apb: 1;
        uint32_t rst_btbb: 1;
        uint32_t reserved_19: 3;
        uint32_t rst_etm: 1;
        uint32_t reserved_23: 1;
        uint32_t rst_zbmac: 1;
        uint32_t rst_modem_ecb: 1;
        uint32_t rst_modem_ccm: 1;
        uint32_t rst_modem_bah: 1;
        uint32_t reserved_28: 1;
        uint32_t rst_modem_sec: 1;
        uint32_t rst_ble_timer: 1;
        uint32_t rst_data_dump: 1;
    };
    uint32_t val;
} modem_syscon_modem_rst_conf_reg_t;

typedef union {
    struct {
        uint32_t clk_wifibb_22m_en: 1;
        uint32_t clk_wifibb_40m_en: 1;
        uint32_t clk_wifibb_44m_en: 1;
        uint32_t clk_wifibb_80m_en: 1;
        uint32_t clk_wifibb_40x_en: 1;
        uint32_t clk_wifibb_80x_en: 1;
        uint32_t clk_wifibb_40x1_en: 1;
        uint32_t clk_wifibb_80x1_en: 1;
        uint32_t clk_wifibb_160x1_en: 1;
        uint32_t clk_wifimac_en: 1;
        uint32_t clk_wifi_apb_en: 1;
        uint32_t clk_fe_20m_en: 1;
        uint32_t clk_fe_40m_en: 1;
        uint32_t clk_fe_80m_en: 1;
        uint32_t clk_fe_160m_en: 1;
        uint32_t clk_fe_cal_160m_en: 1;
        uint32_t clk_fe_apb_en: 1;
        uint32_t clk_bt_apb_en: 1;
        uint32_t clk_bt_en: 1;
        uint32_t clk_wifibb_480m_en: 1;
        uint32_t clk_fe_480m_en: 1;
        uint32_t clk_fe_anamode_40m_en: 1;
        uint32_t clk_fe_anamode_80m_en: 1;
        uint32_t clk_fe_anamode_160m_en: 1;
        uint32_t reserved_24: 8;
    };
    uint32_t val;
} modem_syscon_clk_conf1_reg_t;

typedef union {
    struct {
        uint32_t clk_wifibb_22m_fo: 1;
        uint32_t clk_wifibb_40m_fo: 1;
        uint32_t clk_wifibb_44m_fo: 1;
        uint32_t clk_wifibb_80m_fo: 1;
        uint32_t clk_wifibb_40x_fo: 1;
        uint32_t clk_wifibb_80x_fo: 1;
        uint32_t clk_wifibb_40x1_fo: 1;
        uint32_t clk_wifibb_80x1_fo: 1;
        uint32_t clk_wifibb_160x1_fo: 1;
        uint32_t clk_wifimac_fo: 1;
        uint32_t clk_wifi_apb_fo: 1;
        uint32_t clk_fe_20m_fo: 1;
        uint32_t clk_fe_40m_fo: 1;
        uint32_t clk_fe_80m_fo: 1;
        uint32_t clk_fe_160m_fo: 1;
        uint32_t clk_fe_cal_160m_fo: 1;
        uint32_t clk_fe_apb_fo: 1;
        uint32_t clk_bt_apb_fo: 1;
        uint32_t clk_bt_fo: 1;
        uint32_t clk_wifibb_480m_fo: 1;
        uint32_t clk_fe_480m_fo: 1;
        uint32_t clk_fe_anamode_40m_fo: 1;
        uint32_t clk_fe_anamode_80m_fo: 1;
        uint32_t clk_fe_anamode_160m_fo: 1;
        uint32_t reserved_24: 8;
    };
    uint32_t val;
} modem_syscon_clk_conf1_force_on_reg_t;

typedef union {
    struct {
        uint32_t wifi_bb_cfg: 32;
    };
    uint32_t val;
} modem_syscon_wifi_bb_cfg_reg_t;

typedef union {
    struct {
        uint32_t modem_mem_wp: 3;
        uint32_t modem_mem_wa: 3;
        uint32_t modem_mem_ra: 2;
        uint32_t reserved_8: 24;
    };
    uint32_t val;
} modem_syscon_mem_conf_reg_t;

typedef union {
    struct {
        uint32_t date: 28;
        uint32_t reserved_28: 4;
    };
    uint32_t val;
} modem_syscon_date_reg_t;

typedef struct {
    volatile modem_syscon_test_conf_reg_t test_conf;
    volatile modem_syscon_clk_conf_reg_t clk_conf;
    volatile modem_syscon_clk_conf_force_on_reg_t clk_conf_force_on;
    volatile modem_syscon_clk_conf_power_st_reg_t clk_conf_power_st;
    volatile modem_syscon_modem_rst_conf_reg_t modem_rst_conf;
    volatile modem_syscon_clk_conf1_reg_t clk_conf1;
    volatile modem_syscon_clk_conf1_force_on_reg_t clk_conf1_force_on;
    volatile modem_syscon_wifi_bb_cfg_reg_t wifi_bb_cfg;
    volatile modem_syscon_mem_conf_reg_t mem_conf;
    volatile modem_syscon_date_reg_t date;
} modem_syscon_dev_t;

extern modem_syscon_dev_t MODEM_SYSCON;

#ifndef __cplusplus
_Static_assert(sizeof(modem_syscon_dev_t) == 0x28, "Invalid size of modem_syscon_dev_t structure");
#endif

#ifdef __cplusplus
}
#endif
