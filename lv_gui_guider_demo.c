/*
 * Copyright 2022 NXP
 * SPDX-License-Identifier: MIT
 */

#include "gui_guider.h"
#include "events_init.h"

lv_ui guider_ui;

void lv_user_gui_init(void)
{
    setup_ui(&guider_ui);
    events_init(&guider_ui);
}

