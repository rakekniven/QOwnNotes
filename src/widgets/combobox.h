/*
 * Copyright (c) 2014-2018 Patrizio Bekerle -- http://www.bekerle.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#pragma once

#include <QWidget>
#include <QComboBox>

class ComboBox : public QComboBox
{
Q_OBJECT

public:
    explicit ComboBox(QWidget *parent = Q_NULLPTR);

protected:

private slots:
    void onFocusChanged(QWidget *old, QWidget *now);

signals:
    void focusIn();
    void focusOut();
};
