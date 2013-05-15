/**************************************************************************
**
** Copyright (C) 2013 Kläralvdalens Datakonsult AB, a KDAB Group company.
** Contact: Kläralvdalens Datakonsult AB (info@kdab.com)
**
** This file is part of Qt Creator.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
****************************************************************************/

#ifndef SCRIPTING_INTERNAL_SIGNALWAITER_H
#define SCRIPTING_INTERNAL_SIGNALWAITER_H

#include <QObject>

namespace Scripting {
namespace Internal {

/**
 * @brief Wait for a signal to emit
 *
 * The method wait will block until the provided signal is emitted or the time out is reached. While blocking it will run the event loop.
 */
class SignalWaiter : public QObject
{
    Q_OBJECT
public:
    explicit SignalWaiter(QObject *parent = 0);
    bool wait(QObject* object, const char* signal, int msecs);

private slots:
    void slotReceived();

private:
    bool m_received;
};

} // namespace Internal
} // namespace Scripting

#endif // SCRIPTING_INTERNAL_SIGNALWAITER_H
