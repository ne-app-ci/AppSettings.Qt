// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Ne.app. All rights reserved
// Official repository: https://github.com/ne-app-ci/AppSettings.Qt

#include "settingswindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ::Ne::ISettingsWindow w;
    w.show();

    return a.exec();
}
