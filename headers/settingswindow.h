// SPDX-License-Identifier: Apache-2.0
// Copyright 2026, Ne.app. All rights reserved
// Official repository: https://github.com/ne-app-ci/AppSettings.Qt

#ifndef SETTINGSWINDOW_H
#define SETTINGSWINDOW_H

#include <QMainWindow>

#ifndef NE_SETTINGS_PATH
#define NE_SETTINGS_PATH "/etc/ne-app/app_template/settings.manifest.xml"
#endif

/// @brief a private_data classifier for src tool.
#ifndef private_data
#define private_data private
#endif

namespace Ne {

class SettingsWindow;

}

QT_BEGIN_NAMESPACE

namespace Ui {

class SettingsWindow;

}

QT_END_NAMESPACE

namespace Ne {

enum class SettingsOptionType {
    kSettingOptionInvalid,
    kSettingOptionStart = 100,
    kSettingOptionEnd,
};

class SettingsWindow : public QMainWindow
{
    Q_OBJECT

public:
    SettingsWindow(QWidget *parent = nullptr);
    ~SettingsWindow();

private:
    ::Ui::SettingsWindow *ui;

    private_data:
                   QString settings{NE_SETTINGS_PATH};
    QVector<SettingsOptionType> options;

};

}


#endif // SETTINGSWINDOW_H
