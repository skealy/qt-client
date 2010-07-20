/*
 * This file is part of the xTuple ERP: PostBooks Edition, a free and
 * open source Enterprise Resource Planning software suite,
 * Copyright (c) 1999-2010 by OpenMFG LLC, d/b/a xTuple.
 * It is licensed to you under the Common Public Attribution License
 * version 1.0, the full text of which (including xTuple-specific Exhibits)
 * is available at www.xtuple.com/CPAL.  By using this software, you agree
 * to be bound by its terms.
 */

#include "dspItemsByClassCode.h"

dspItemsByClassCode::dspItemsByClassCode(QWidget * parent, const char *, Qt::WindowFlags flags)
  : dspItemsByParameter(parent, "dspItemsByClassCode", flags)
{
  setWindowTitle(tr("Items by Class Code"));
  setReportName("ItemsByClassCode");
  _parameter->setType(ParameterGroup::ClassCode);
}