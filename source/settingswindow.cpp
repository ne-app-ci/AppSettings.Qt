// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Ne.app. All rights reserved
// Official repository: https://github.com/ne-app-ci/AppSettings.Qt

#include <settingswindow.h>
#include "ui_settingswindow.h"

#ifndef NE_WIDTH
#define NE_WIDTH 800
#endif

#ifndef NE_HEIGHT
#define NE_HEIGHT 302
#endif

::Ne::ISettingsWindow::ISettingsWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SettingsWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Settings - Ne.app");
    this->setFixedSize(QSize(NE_WIDTH, NE_HEIGHT));
}

::Ne::ISettingsWindow::~ISettingsWindow()
{
    delete ui;
}
