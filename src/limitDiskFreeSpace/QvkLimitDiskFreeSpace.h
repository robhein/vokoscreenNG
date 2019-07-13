/* vokoscreenNG - A desktop recorder
 * Copyright (C) 2017-2019 Volker Kohaupt
 * 
 * Author:
 *      Volker Kohaupt <vkohaupt@freenet.de>
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of version 2 of the GNU General Public License
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * --End_License--
 */

#ifndef QvkLimitDiskFreeSpace_H
#define QvkLimitDiskFreeSpace_H

#include "ui_formMainWindow.h"
#include "QvkSpezialSlider.h"

#include <QWidget>

class QvkLimitDiskFreeSpace: public QWidget
{ 
Q_OBJECT
public:
  QvkLimitDiskFreeSpace( Ui_formMainWindow *ui_mainwindow, QvkSpezialSlider *vkSpezialSlider );
  virtual ~QvkLimitDiskFreeSpace();
  bool isStorageOK();
  bool isStorageOKMessagBoxByStart();


public slots:


private slots:
  void slot_storageMessagBoxByRecord();


signals:


protected:


private:
  Ui_formMainWindow *ui;
  QTimer *timerStorageSize;
  QvkSpezialSlider *sliderLimitOfFreeDiskSpace;

};

#endif
