/*
** Taiga
** Copyright (C) 2010-2014, Eren Okka
** 
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
** 
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
** 
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef TAIGA_TRACK_MONITOR_H
#define TAIGA_TRACK_MONITOR_H

#include "base/file_monitor.h"

class FolderMonitor : public DirectoryMonitor {
public:
  void Enable(bool enabled = true);
  void HandleChangeNotification(const DirectoryChangeNotification& notification) const;

private:
  void OnDirectory(const DirectoryChangeNotification& notification) const;
  void OnFile(const DirectoryChangeNotification& notification) const;
};

extern class FolderMonitor FolderMonitor;

#endif  // TAIGA_TRACK_MONITOR_H