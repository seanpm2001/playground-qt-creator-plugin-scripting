/**************************************************************************
**
** This file is part of Qt Creator
**
** Copyright (C) 2013 Kläralvdalens Datakonsult AB, a KDAB Group company.
**
** Contact: Kläralvdalens Datakonsult AB (info@kdab.com)
**
**
** GNU Lesser General Public License Usage
**
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this file.
** Please review the following information to ensure the GNU Lesser General
** Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** Other Usage
**
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
** If you have questions regarding the use of this file, please contact
** Nokia at info@qt.nokia.com.
**
**************************************************************************/

#ifndef SCRIPTING_INTERNAL_UTILS_H
#define SCRIPTING_INTERNAL_UTILS_H

#include <QObject>
#include <QStringList>

namespace Scripting {
namespace Internal {

class Utils : public QObject
{
    Q_OBJECT
public:
    explicit Utils(QObject *parent = 0);

public slots:
    QStringList subDirectories(const QString& directory) const;
    QStringList backtrace() const;
};

} // namespace Internal
} // namespace Scripting

#endif // SCRIPTING_INTERNAL_UTILS_H
