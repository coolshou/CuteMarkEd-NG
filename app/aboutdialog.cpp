/*
 * Copyright 2014 Christian Loose <christian.loose@hamburg.de>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "aboutdialog.h"
#include "ui_aboutdialog.h"
#include "version.h"
static const QString COPYRIGHT = QStringLiteral("Copyright 2013-2016 Christian Loose");
static const QString HOMEPAGE = QStringLiteral("<a href=\"%1\">%2</a>").arg(SOURCEURL).arg(SOURCEURL);
static const QString OLDHOMEPAGE = QStringLiteral("<a href=\"http://cloose.github.io/CuteMarkEd\">http://cloose.github.io/CuteMarkEd</a>");

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);

    const QString appInfo = QString(ui->messageLabel->text())
            .arg(qApp->applicationDisplayName())
            .arg(qApp->applicationVersion());
    ui->messageLabel->setText(appInfo);

    const QString description = QStringLiteral("<p>%1<br>%2</p><p>%3</p><p>%4</p>")
            .arg(tr("Qt-based, free and open source markdown editor with live HTML preview"))
            .arg(HOMEPAGE)
            .arg(COPYRIGHT)
            .arg(OLDHOMEPAGE);
    ui->descriptionLabel->setText(description);
}

AboutDialog::~AboutDialog()
{
    delete ui;
}
