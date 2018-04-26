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

#include <QTextBrowser>
#include <QResizeEvent>
#include <widgets/qtexteditsearchwidget.h>

class NotePreviewWidget : public QTextBrowser
{
    Q_OBJECT

public:
    explicit NotePreviewWidget(QWidget *parent = 0);
    void initSearchFrame(QWidget *searchFrame, bool darkMode = false);
    QTextEditSearchWidget *searchWidget();

protected:
    QTextEditSearchWidget *_searchWidget;
    QWidget *_searchFrame;

    void resizeEvent(QResizeEvent* event);
    bool eventFilter(QObject *obj, QEvent *event);

public slots:
    void hide();

signals:
    void resize(QSize size, QSize oldSize);

private:
};
