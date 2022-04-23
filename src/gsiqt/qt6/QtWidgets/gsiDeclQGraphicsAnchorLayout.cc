
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQGraphicsAnchorLayout.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QGraphicsAnchorLayout>
#include <QEvent>
#include <QGraphicsAnchor>
#include <QGraphicsItem>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include <QSizePolicy>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QGraphicsAnchorLayout

// QGraphicsAnchor *QGraphicsAnchorLayout::addAnchor(QGraphicsLayoutItem *firstItem, Qt::AnchorPoint firstEdge, QGraphicsLayoutItem *secondItem, Qt::AnchorPoint secondEdge)


static void _init_f_addAnchor_8538 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("firstItem");
  decl->add_arg<QGraphicsLayoutItem * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("firstEdge");
  decl->add_arg<const qt_gsi::Converter<Qt::AnchorPoint>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("secondItem");
  decl->add_arg<QGraphicsLayoutItem * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("secondEdge");
  decl->add_arg<const qt_gsi::Converter<Qt::AnchorPoint>::target_type & > (argspec_3);
  decl->set_return<QGraphicsAnchor * > ();
}

static void _call_f_addAnchor_8538 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QGraphicsLayoutItem *arg1 = gsi::arg_reader<QGraphicsLayoutItem * >() (args, heap);
  const qt_gsi::Converter<Qt::AnchorPoint>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<Qt::AnchorPoint>::target_type & >() (args, heap);
  QGraphicsLayoutItem *arg3 = gsi::arg_reader<QGraphicsLayoutItem * >() (args, heap);
  const qt_gsi::Converter<Qt::AnchorPoint>::target_type & arg4 = gsi::arg_reader<const qt_gsi::Converter<Qt::AnchorPoint>::target_type & >() (args, heap);
  ret.write<QGraphicsAnchor * > ((QGraphicsAnchor *)((QGraphicsAnchorLayout *)cls)->addAnchor (arg1, qt_gsi::QtToCppAdaptor<Qt::AnchorPoint>(arg2).cref(), arg3, qt_gsi::QtToCppAdaptor<Qt::AnchorPoint>(arg4).cref()));
}


// void QGraphicsAnchorLayout::addAnchors(QGraphicsLayoutItem *firstItem, QGraphicsLayoutItem *secondItem, QFlags<Qt::Orientation> orientations)


static void _init_f_addAnchors_7507 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("firstItem");
  decl->add_arg<QGraphicsLayoutItem * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("secondItem");
  decl->add_arg<QGraphicsLayoutItem * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("orientations", true, "Qt::Horizontal | Qt::Vertical");
  decl->add_arg<QFlags<Qt::Orientation> > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_addAnchors_7507 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QGraphicsLayoutItem *arg1 = gsi::arg_reader<QGraphicsLayoutItem * >() (args, heap);
  QGraphicsLayoutItem *arg2 = gsi::arg_reader<QGraphicsLayoutItem * >() (args, heap);
  QFlags<Qt::Orientation> arg3 = args ? gsi::arg_reader<QFlags<Qt::Orientation> >() (args, heap) : gsi::arg_maker<QFlags<Qt::Orientation> >() (Qt::Horizontal | Qt::Vertical, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsAnchorLayout *)cls)->addAnchors (arg1, arg2, arg3);
}


// void QGraphicsAnchorLayout::addCornerAnchors(QGraphicsLayoutItem *firstItem, Qt::Corner firstCorner, QGraphicsLayoutItem *secondItem, Qt::Corner secondCorner)


static void _init_f_addCornerAnchors_7522 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("firstItem");
  decl->add_arg<QGraphicsLayoutItem * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("firstCorner");
  decl->add_arg<const qt_gsi::Converter<Qt::Corner>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("secondItem");
  decl->add_arg<QGraphicsLayoutItem * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("secondCorner");
  decl->add_arg<const qt_gsi::Converter<Qt::Corner>::target_type & > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_addCornerAnchors_7522 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QGraphicsLayoutItem *arg1 = gsi::arg_reader<QGraphicsLayoutItem * >() (args, heap);
  const qt_gsi::Converter<Qt::Corner>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<Qt::Corner>::target_type & >() (args, heap);
  QGraphicsLayoutItem *arg3 = gsi::arg_reader<QGraphicsLayoutItem * >() (args, heap);
  const qt_gsi::Converter<Qt::Corner>::target_type & arg4 = gsi::arg_reader<const qt_gsi::Converter<Qt::Corner>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsAnchorLayout *)cls)->addCornerAnchors (arg1, qt_gsi::QtToCppAdaptor<Qt::Corner>(arg2).cref(), arg3, qt_gsi::QtToCppAdaptor<Qt::Corner>(arg4).cref());
}


// QGraphicsAnchor *QGraphicsAnchorLayout::anchor(QGraphicsLayoutItem *firstItem, Qt::AnchorPoint firstEdge, QGraphicsLayoutItem *secondItem, Qt::AnchorPoint secondEdge)


static void _init_f_anchor_8538 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("firstItem");
  decl->add_arg<QGraphicsLayoutItem * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("firstEdge");
  decl->add_arg<const qt_gsi::Converter<Qt::AnchorPoint>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("secondItem");
  decl->add_arg<QGraphicsLayoutItem * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("secondEdge");
  decl->add_arg<const qt_gsi::Converter<Qt::AnchorPoint>::target_type & > (argspec_3);
  decl->set_return<QGraphicsAnchor * > ();
}

static void _call_f_anchor_8538 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QGraphicsLayoutItem *arg1 = gsi::arg_reader<QGraphicsLayoutItem * >() (args, heap);
  const qt_gsi::Converter<Qt::AnchorPoint>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<Qt::AnchorPoint>::target_type & >() (args, heap);
  QGraphicsLayoutItem *arg3 = gsi::arg_reader<QGraphicsLayoutItem * >() (args, heap);
  const qt_gsi::Converter<Qt::AnchorPoint>::target_type & arg4 = gsi::arg_reader<const qt_gsi::Converter<Qt::AnchorPoint>::target_type & >() (args, heap);
  ret.write<QGraphicsAnchor * > ((QGraphicsAnchor *)((QGraphicsAnchorLayout *)cls)->anchor (arg1, qt_gsi::QtToCppAdaptor<Qt::AnchorPoint>(arg2).cref(), arg3, qt_gsi::QtToCppAdaptor<Qt::AnchorPoint>(arg4).cref()));
}


// int QGraphicsAnchorLayout::count()


static void _init_f_count_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_count_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QGraphicsAnchorLayout *)cls)->count ());
}


// double QGraphicsAnchorLayout::horizontalSpacing()


static void _init_f_horizontalSpacing_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_horizontalSpacing_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QGraphicsAnchorLayout *)cls)->horizontalSpacing ());
}


// void QGraphicsAnchorLayout::invalidate()


static void _init_f_invalidate_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_invalidate_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsAnchorLayout *)cls)->invalidate ();
}


// QGraphicsLayoutItem *QGraphicsAnchorLayout::itemAt(int index)


static void _init_f_itemAt_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QGraphicsLayoutItem * > ();
}

static void _call_f_itemAt_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QGraphicsLayoutItem * > ((QGraphicsLayoutItem *)((QGraphicsAnchorLayout *)cls)->itemAt (arg1));
}


// void QGraphicsAnchorLayout::removeAt(int index)


static void _init_f_removeAt_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_removeAt_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsAnchorLayout *)cls)->removeAt (arg1);
}


// void QGraphicsAnchorLayout::setGeometry(const QRectF &rect)


static void _init_f_setGeometry_1862 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rect");
  decl->add_arg<const QRectF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setGeometry_1862 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRectF &arg1 = gsi::arg_reader<const QRectF & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsAnchorLayout *)cls)->setGeometry (arg1);
}


// void QGraphicsAnchorLayout::setHorizontalSpacing(double spacing)


static void _init_f_setHorizontalSpacing_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("spacing");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setHorizontalSpacing_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsAnchorLayout *)cls)->setHorizontalSpacing (arg1);
}


// void QGraphicsAnchorLayout::setSpacing(double spacing)


static void _init_f_setSpacing_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("spacing");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSpacing_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsAnchorLayout *)cls)->setSpacing (arg1);
}


// void QGraphicsAnchorLayout::setVerticalSpacing(double spacing)


static void _init_f_setVerticalSpacing_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("spacing");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setVerticalSpacing_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsAnchorLayout *)cls)->setVerticalSpacing (arg1);
}


// double QGraphicsAnchorLayout::verticalSpacing()


static void _init_f_verticalSpacing_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_verticalSpacing_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QGraphicsAnchorLayout *)cls)->verticalSpacing ());
}


namespace gsi
{

static gsi::Methods methods_QGraphicsAnchorLayout () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("addAnchor", "@brief Method QGraphicsAnchor *QGraphicsAnchorLayout::addAnchor(QGraphicsLayoutItem *firstItem, Qt::AnchorPoint firstEdge, QGraphicsLayoutItem *secondItem, Qt::AnchorPoint secondEdge)\n", false, &_init_f_addAnchor_8538, &_call_f_addAnchor_8538);
  methods += new qt_gsi::GenericMethod ("addAnchors", "@brief Method void QGraphicsAnchorLayout::addAnchors(QGraphicsLayoutItem *firstItem, QGraphicsLayoutItem *secondItem, QFlags<Qt::Orientation> orientations)\n", false, &_init_f_addAnchors_7507, &_call_f_addAnchors_7507);
  methods += new qt_gsi::GenericMethod ("addCornerAnchors", "@brief Method void QGraphicsAnchorLayout::addCornerAnchors(QGraphicsLayoutItem *firstItem, Qt::Corner firstCorner, QGraphicsLayoutItem *secondItem, Qt::Corner secondCorner)\n", false, &_init_f_addCornerAnchors_7522, &_call_f_addCornerAnchors_7522);
  methods += new qt_gsi::GenericMethod ("anchor", "@brief Method QGraphicsAnchor *QGraphicsAnchorLayout::anchor(QGraphicsLayoutItem *firstItem, Qt::AnchorPoint firstEdge, QGraphicsLayoutItem *secondItem, Qt::AnchorPoint secondEdge)\n", false, &_init_f_anchor_8538, &_call_f_anchor_8538);
  methods += new qt_gsi::GenericMethod ("count", "@brief Method int QGraphicsAnchorLayout::count()\nThis is a reimplementation of QGraphicsLayout::count", true, &_init_f_count_c0, &_call_f_count_c0);
  methods += new qt_gsi::GenericMethod (":horizontalSpacing", "@brief Method double QGraphicsAnchorLayout::horizontalSpacing()\n", true, &_init_f_horizontalSpacing_c0, &_call_f_horizontalSpacing_c0);
  methods += new qt_gsi::GenericMethod ("invalidate", "@brief Method void QGraphicsAnchorLayout::invalidate()\nThis is a reimplementation of QGraphicsLayout::invalidate", false, &_init_f_invalidate_0, &_call_f_invalidate_0);
  methods += new qt_gsi::GenericMethod ("itemAt", "@brief Method QGraphicsLayoutItem *QGraphicsAnchorLayout::itemAt(int index)\nThis is a reimplementation of QGraphicsLayout::itemAt", true, &_init_f_itemAt_c767, &_call_f_itemAt_c767);
  methods += new qt_gsi::GenericMethod ("removeAt", "@brief Method void QGraphicsAnchorLayout::removeAt(int index)\nThis is a reimplementation of QGraphicsLayout::removeAt", false, &_init_f_removeAt_767, &_call_f_removeAt_767);
  methods += new qt_gsi::GenericMethod ("setGeometry|geometry=", "@brief Method void QGraphicsAnchorLayout::setGeometry(const QRectF &rect)\nThis is a reimplementation of QGraphicsLayoutItem::setGeometry", false, &_init_f_setGeometry_1862, &_call_f_setGeometry_1862);
  methods += new qt_gsi::GenericMethod ("setHorizontalSpacing|horizontalSpacing=", "@brief Method void QGraphicsAnchorLayout::setHorizontalSpacing(double spacing)\n", false, &_init_f_setHorizontalSpacing_1071, &_call_f_setHorizontalSpacing_1071);
  methods += new qt_gsi::GenericMethod ("setSpacing", "@brief Method void QGraphicsAnchorLayout::setSpacing(double spacing)\n", false, &_init_f_setSpacing_1071, &_call_f_setSpacing_1071);
  methods += new qt_gsi::GenericMethod ("setVerticalSpacing|verticalSpacing=", "@brief Method void QGraphicsAnchorLayout::setVerticalSpacing(double spacing)\n", false, &_init_f_setVerticalSpacing_1071, &_call_f_setVerticalSpacing_1071);
  methods += new qt_gsi::GenericMethod (":verticalSpacing", "@brief Method double QGraphicsAnchorLayout::verticalSpacing()\n", true, &_init_f_verticalSpacing_c0, &_call_f_verticalSpacing_c0);
  return methods;
}

gsi::Class<QGraphicsLayout> &qtdecl_QGraphicsLayout ();

gsi::Class<QGraphicsAnchorLayout> decl_QGraphicsAnchorLayout (qtdecl_QGraphicsLayout (), "QtWidgets", "QGraphicsAnchorLayout_Native",
  methods_QGraphicsAnchorLayout (),
  "@hide\n@alias QGraphicsAnchorLayout");

GSI_QTWIDGETS_PUBLIC gsi::Class<QGraphicsAnchorLayout> &qtdecl_QGraphicsAnchorLayout () { return decl_QGraphicsAnchorLayout; }

}


class QGraphicsAnchorLayout_Adaptor : public QGraphicsAnchorLayout, public qt_gsi::QtObjectBase
{
public:

  virtual ~QGraphicsAnchorLayout_Adaptor();

  //  [adaptor ctor] QGraphicsAnchorLayout::QGraphicsAnchorLayout(QGraphicsLayoutItem *parent)
  QGraphicsAnchorLayout_Adaptor() : QGraphicsAnchorLayout()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QGraphicsAnchorLayout::QGraphicsAnchorLayout(QGraphicsLayoutItem *parent)
  QGraphicsAnchorLayout_Adaptor(QGraphicsLayoutItem *parent) : QGraphicsAnchorLayout(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] void QGraphicsAnchorLayout::addChildLayoutItem(QGraphicsLayoutItem *layoutItem)
  void fp_QGraphicsAnchorLayout_addChildLayoutItem_2557 (QGraphicsLayoutItem *layoutItem) {
    QGraphicsAnchorLayout::addChildLayoutItem(layoutItem);
  }

  //  [expose] void QGraphicsAnchorLayout::setGraphicsItem(QGraphicsItem *item)
  void fp_QGraphicsAnchorLayout_setGraphicsItem_1919 (QGraphicsItem *item) {
    QGraphicsAnchorLayout::setGraphicsItem(item);
  }

  //  [expose] void QGraphicsAnchorLayout::setOwnedByLayout(bool ownedByLayout)
  void fp_QGraphicsAnchorLayout_setOwnedByLayout_864 (bool ownedByLayout) {
    QGraphicsAnchorLayout::setOwnedByLayout(ownedByLayout);
  }

  //  [adaptor impl] int QGraphicsAnchorLayout::count()
  int cbs_count_c0_0() const
  {
    return QGraphicsAnchorLayout::count();
  }

  virtual int count() const
  {
    if (cb_count_c0_0.can_issue()) {
      return cb_count_c0_0.issue<QGraphicsAnchorLayout_Adaptor, int>(&QGraphicsAnchorLayout_Adaptor::cbs_count_c0_0);
    } else {
      return QGraphicsAnchorLayout::count();
    }
  }

  //  [adaptor impl] void QGraphicsAnchorLayout::getContentsMargins(double *left, double *top, double *right, double *bottom)
  void cbs_getContentsMargins_c4704_0(double *left, double *top, double *right, double *bottom) const
  {
    QGraphicsAnchorLayout::getContentsMargins(left, top, right, bottom);
  }

  virtual void getContentsMargins(double *left, double *top, double *right, double *bottom) const
  {
    if (cb_getContentsMargins_c4704_0.can_issue()) {
      cb_getContentsMargins_c4704_0.issue<QGraphicsAnchorLayout_Adaptor, double *, double *, double *, double *>(&QGraphicsAnchorLayout_Adaptor::cbs_getContentsMargins_c4704_0, left, top, right, bottom);
    } else {
      QGraphicsAnchorLayout::getContentsMargins(left, top, right, bottom);
    }
  }

  //  [adaptor impl] void QGraphicsAnchorLayout::invalidate()
  void cbs_invalidate_0_0()
  {
    QGraphicsAnchorLayout::invalidate();
  }

  virtual void invalidate()
  {
    if (cb_invalidate_0_0.can_issue()) {
      cb_invalidate_0_0.issue<QGraphicsAnchorLayout_Adaptor>(&QGraphicsAnchorLayout_Adaptor::cbs_invalidate_0_0);
    } else {
      QGraphicsAnchorLayout::invalidate();
    }
  }

  //  [adaptor impl] bool QGraphicsAnchorLayout::isEmpty()
  bool cbs_isEmpty_c0_0() const
  {
    return QGraphicsAnchorLayout::isEmpty();
  }

  virtual bool isEmpty() const
  {
    if (cb_isEmpty_c0_0.can_issue()) {
      return cb_isEmpty_c0_0.issue<QGraphicsAnchorLayout_Adaptor, bool>(&QGraphicsAnchorLayout_Adaptor::cbs_isEmpty_c0_0);
    } else {
      return QGraphicsAnchorLayout::isEmpty();
    }
  }

  //  [adaptor impl] QGraphicsLayoutItem *QGraphicsAnchorLayout::itemAt(int index)
  QGraphicsLayoutItem * cbs_itemAt_c767_0(int index) const
  {
    return QGraphicsAnchorLayout::itemAt(index);
  }

  virtual QGraphicsLayoutItem * itemAt(int index) const
  {
    if (cb_itemAt_c767_0.can_issue()) {
      return cb_itemAt_c767_0.issue<QGraphicsAnchorLayout_Adaptor, QGraphicsLayoutItem *, int>(&QGraphicsAnchorLayout_Adaptor::cbs_itemAt_c767_0, index);
    } else {
      return QGraphicsAnchorLayout::itemAt(index);
    }
  }

  //  [adaptor impl] void QGraphicsAnchorLayout::removeAt(int index)
  void cbs_removeAt_767_0(int index)
  {
    QGraphicsAnchorLayout::removeAt(index);
  }

  virtual void removeAt(int index)
  {
    if (cb_removeAt_767_0.can_issue()) {
      cb_removeAt_767_0.issue<QGraphicsAnchorLayout_Adaptor, int>(&QGraphicsAnchorLayout_Adaptor::cbs_removeAt_767_0, index);
    } else {
      QGraphicsAnchorLayout::removeAt(index);
    }
  }

  //  [adaptor impl] void QGraphicsAnchorLayout::setGeometry(const QRectF &rect)
  void cbs_setGeometry_1862_0(const QRectF &rect)
  {
    QGraphicsAnchorLayout::setGeometry(rect);
  }

  virtual void setGeometry(const QRectF &rect)
  {
    if (cb_setGeometry_1862_0.can_issue()) {
      cb_setGeometry_1862_0.issue<QGraphicsAnchorLayout_Adaptor, const QRectF &>(&QGraphicsAnchorLayout_Adaptor::cbs_setGeometry_1862_0, rect);
    } else {
      QGraphicsAnchorLayout::setGeometry(rect);
    }
  }

  //  [adaptor impl] void QGraphicsAnchorLayout::updateGeometry()
  void cbs_updateGeometry_0_0()
  {
    QGraphicsAnchorLayout::updateGeometry();
  }

  virtual void updateGeometry()
  {
    if (cb_updateGeometry_0_0.can_issue()) {
      cb_updateGeometry_0_0.issue<QGraphicsAnchorLayout_Adaptor>(&QGraphicsAnchorLayout_Adaptor::cbs_updateGeometry_0_0);
    } else {
      QGraphicsAnchorLayout::updateGeometry();
    }
  }

  //  [adaptor impl] void QGraphicsAnchorLayout::widgetEvent(QEvent *e)
  void cbs_widgetEvent_1217_0(QEvent *e)
  {
    QGraphicsAnchorLayout::widgetEvent(e);
  }

  virtual void widgetEvent(QEvent *e)
  {
    if (cb_widgetEvent_1217_0.can_issue()) {
      cb_widgetEvent_1217_0.issue<QGraphicsAnchorLayout_Adaptor, QEvent *>(&QGraphicsAnchorLayout_Adaptor::cbs_widgetEvent_1217_0, e);
    } else {
      QGraphicsAnchorLayout::widgetEvent(e);
    }
  }

  //  [adaptor impl] QSizeF QGraphicsAnchorLayout::sizeHint(Qt::SizeHint which, const QSizeF &constraint)
  QSizeF cbs_sizeHint_c3330_1(const qt_gsi::Converter<Qt::SizeHint>::target_type & which, const QSizeF &constraint) const
  {
    return QGraphicsAnchorLayout::sizeHint(qt_gsi::QtToCppAdaptor<Qt::SizeHint>(which).cref(), constraint);
  }

  virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF &constraint) const
  {
    if (cb_sizeHint_c3330_1.can_issue()) {
      return cb_sizeHint_c3330_1.issue<QGraphicsAnchorLayout_Adaptor, QSizeF, const qt_gsi::Converter<Qt::SizeHint>::target_type &, const QSizeF &>(&QGraphicsAnchorLayout_Adaptor::cbs_sizeHint_c3330_1, qt_gsi::CppToQtAdaptor<Qt::SizeHint>(which), constraint);
    } else {
      return QGraphicsAnchorLayout::sizeHint(which, constraint);
    }
  }

  gsi::Callback cb_count_c0_0;
  gsi::Callback cb_getContentsMargins_c4704_0;
  gsi::Callback cb_invalidate_0_0;
  gsi::Callback cb_isEmpty_c0_0;
  gsi::Callback cb_itemAt_c767_0;
  gsi::Callback cb_removeAt_767_0;
  gsi::Callback cb_setGeometry_1862_0;
  gsi::Callback cb_updateGeometry_0_0;
  gsi::Callback cb_widgetEvent_1217_0;
  gsi::Callback cb_sizeHint_c3330_1;
};

QGraphicsAnchorLayout_Adaptor::~QGraphicsAnchorLayout_Adaptor() { }

//  Constructor QGraphicsAnchorLayout::QGraphicsAnchorLayout(QGraphicsLayoutItem *parent) (adaptor class)

static void _init_ctor_QGraphicsAnchorLayout_Adaptor_2557 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "nullptr");
  decl->add_arg<QGraphicsLayoutItem * > (argspec_0);
  decl->set_return_new<QGraphicsAnchorLayout_Adaptor> ();
}

static void _call_ctor_QGraphicsAnchorLayout_Adaptor_2557 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QGraphicsLayoutItem *arg1 = args ? gsi::arg_reader<QGraphicsLayoutItem * >() (args, heap) : gsi::arg_maker<QGraphicsLayoutItem * >() (nullptr, heap);
  ret.write<QGraphicsAnchorLayout_Adaptor *> (new QGraphicsAnchorLayout_Adaptor (arg1));
}


// exposed void QGraphicsAnchorLayout::addChildLayoutItem(QGraphicsLayoutItem *layoutItem)

static void _init_fp_addChildLayoutItem_2557 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("layoutItem");
  decl->add_arg<QGraphicsLayoutItem * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_fp_addChildLayoutItem_2557 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QGraphicsLayoutItem *arg1 = gsi::arg_reader<QGraphicsLayoutItem * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsAnchorLayout_Adaptor *)cls)->fp_QGraphicsAnchorLayout_addChildLayoutItem_2557 (arg1);
}


// int QGraphicsAnchorLayout::count()

static void _init_cbs_count_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_cbs_count_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QGraphicsAnchorLayout_Adaptor *)cls)->cbs_count_c0_0 ());
}

static void _set_callback_cbs_count_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsAnchorLayout_Adaptor *)cls)->cb_count_c0_0 = cb;
}


// void QGraphicsAnchorLayout::getContentsMargins(double *left, double *top, double *right, double *bottom)

static void _init_cbs_getContentsMargins_c4704_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("left");
  decl->add_arg<double * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("top");
  decl->add_arg<double * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("right");
  decl->add_arg<double * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("bottom");
  decl->add_arg<double * > (argspec_3);
  decl->set_return<void > ();
}

static void _call_cbs_getContentsMargins_c4704_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double *arg1 = args.read<double * > (heap);
  double *arg2 = args.read<double * > (heap);
  double *arg3 = args.read<double * > (heap);
  double *arg4 = args.read<double * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsAnchorLayout_Adaptor *)cls)->cbs_getContentsMargins_c4704_0 (arg1, arg2, arg3, arg4);
}

static void _set_callback_cbs_getContentsMargins_c4704_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsAnchorLayout_Adaptor *)cls)->cb_getContentsMargins_c4704_0 = cb;
}


// void QGraphicsAnchorLayout::invalidate()

static void _init_cbs_invalidate_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_invalidate_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsAnchorLayout_Adaptor *)cls)->cbs_invalidate_0_0 ();
}

static void _set_callback_cbs_invalidate_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsAnchorLayout_Adaptor *)cls)->cb_invalidate_0_0 = cb;
}


// bool QGraphicsAnchorLayout::isEmpty()

static void _init_cbs_isEmpty_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isEmpty_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QGraphicsAnchorLayout_Adaptor *)cls)->cbs_isEmpty_c0_0 ());
}

static void _set_callback_cbs_isEmpty_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsAnchorLayout_Adaptor *)cls)->cb_isEmpty_c0_0 = cb;
}


// QGraphicsLayoutItem *QGraphicsAnchorLayout::itemAt(int index)

static void _init_cbs_itemAt_c767_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QGraphicsLayoutItem * > ();
}

static void _call_cbs_itemAt_c767_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QGraphicsLayoutItem * > ((QGraphicsLayoutItem *)((QGraphicsAnchorLayout_Adaptor *)cls)->cbs_itemAt_c767_0 (arg1));
}

static void _set_callback_cbs_itemAt_c767_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsAnchorLayout_Adaptor *)cls)->cb_itemAt_c767_0 = cb;
}


// void QGraphicsAnchorLayout::removeAt(int index)

static void _init_cbs_removeAt_767_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("index");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_removeAt_767_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsAnchorLayout_Adaptor *)cls)->cbs_removeAt_767_0 (arg1);
}

static void _set_callback_cbs_removeAt_767_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsAnchorLayout_Adaptor *)cls)->cb_removeAt_767_0 = cb;
}


// void QGraphicsAnchorLayout::setGeometry(const QRectF &rect)

static void _init_cbs_setGeometry_1862_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rect");
  decl->add_arg<const QRectF & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setGeometry_1862_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRectF &arg1 = args.read<const QRectF & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsAnchorLayout_Adaptor *)cls)->cbs_setGeometry_1862_0 (arg1);
}

static void _set_callback_cbs_setGeometry_1862_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsAnchorLayout_Adaptor *)cls)->cb_setGeometry_1862_0 = cb;
}


// exposed void QGraphicsAnchorLayout::setGraphicsItem(QGraphicsItem *item)

static void _init_fp_setGraphicsItem_1919 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("item");
  decl->add_arg<QGraphicsItem * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_fp_setGraphicsItem_1919 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QGraphicsItem *arg1 = gsi::arg_reader<QGraphicsItem * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsAnchorLayout_Adaptor *)cls)->fp_QGraphicsAnchorLayout_setGraphicsItem_1919 (arg1);
}


// exposed void QGraphicsAnchorLayout::setOwnedByLayout(bool ownedByLayout)

static void _init_fp_setOwnedByLayout_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ownedByLayout");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_fp_setOwnedByLayout_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsAnchorLayout_Adaptor *)cls)->fp_QGraphicsAnchorLayout_setOwnedByLayout_864 (arg1);
}


// QSizeF QGraphicsAnchorLayout::sizeHint(Qt::SizeHint which, const QSizeF &constraint)

static void _init_cbs_sizeHint_c3330_1 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("which");
  decl->add_arg<const qt_gsi::Converter<Qt::SizeHint>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("constraint");
  decl->add_arg<const QSizeF & > (argspec_1);
  decl->set_return<QSizeF > ();
}

static void _call_cbs_sizeHint_c3330_1 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::SizeHint>::target_type & arg1 = args.read<const qt_gsi::Converter<Qt::SizeHint>::target_type & > (heap);
  const QSizeF &arg2 = args.read<const QSizeF & > (heap);
  ret.write<QSizeF > ((QSizeF)((QGraphicsAnchorLayout_Adaptor *)cls)->cbs_sizeHint_c3330_1 (arg1, arg2));
}

static void _set_callback_cbs_sizeHint_c3330_1 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsAnchorLayout_Adaptor *)cls)->cb_sizeHint_c3330_1 = cb;
}


// void QGraphicsAnchorLayout::updateGeometry()

static void _init_cbs_updateGeometry_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_updateGeometry_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsAnchorLayout_Adaptor *)cls)->cbs_updateGeometry_0_0 ();
}

static void _set_callback_cbs_updateGeometry_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsAnchorLayout_Adaptor *)cls)->cb_updateGeometry_0_0 = cb;
}


// void QGraphicsAnchorLayout::widgetEvent(QEvent *e)

static void _init_cbs_widgetEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("e");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_widgetEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGraphicsAnchorLayout_Adaptor *)cls)->cbs_widgetEvent_1217_0 (arg1);
}

static void _set_callback_cbs_widgetEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QGraphicsAnchorLayout_Adaptor *)cls)->cb_widgetEvent_1217_0 = cb;
}


namespace gsi
{

gsi::Class<QGraphicsAnchorLayout> &qtdecl_QGraphicsAnchorLayout ();

static gsi::Methods methods_QGraphicsAnchorLayout_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGraphicsAnchorLayout::QGraphicsAnchorLayout(QGraphicsLayoutItem *parent)\nThis method creates an object of class QGraphicsAnchorLayout.", &_init_ctor_QGraphicsAnchorLayout_Adaptor_2557, &_call_ctor_QGraphicsAnchorLayout_Adaptor_2557);
  methods += new qt_gsi::GenericMethod ("*addChildLayoutItem", "@brief Method void QGraphicsAnchorLayout::addChildLayoutItem(QGraphicsLayoutItem *layoutItem)\nThis method is protected and can only be called from inside a derived class.", false, &_init_fp_addChildLayoutItem_2557, &_call_fp_addChildLayoutItem_2557);
  methods += new qt_gsi::GenericMethod ("count", "@brief Virtual method int QGraphicsAnchorLayout::count()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_count_c0_0, &_call_cbs_count_c0_0);
  methods += new qt_gsi::GenericMethod ("count", "@hide", true, &_init_cbs_count_c0_0, &_call_cbs_count_c0_0, &_set_callback_cbs_count_c0_0);
  methods += new qt_gsi::GenericMethod ("getContentsMargins", "@brief Virtual method void QGraphicsAnchorLayout::getContentsMargins(double *left, double *top, double *right, double *bottom)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_getContentsMargins_c4704_0, &_call_cbs_getContentsMargins_c4704_0);
  methods += new qt_gsi::GenericMethod ("getContentsMargins", "@hide", true, &_init_cbs_getContentsMargins_c4704_0, &_call_cbs_getContentsMargins_c4704_0, &_set_callback_cbs_getContentsMargins_c4704_0);
  methods += new qt_gsi::GenericMethod ("invalidate", "@brief Virtual method void QGraphicsAnchorLayout::invalidate()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_invalidate_0_0, &_call_cbs_invalidate_0_0);
  methods += new qt_gsi::GenericMethod ("invalidate", "@hide", false, &_init_cbs_invalidate_0_0, &_call_cbs_invalidate_0_0, &_set_callback_cbs_invalidate_0_0);
  methods += new qt_gsi::GenericMethod ("isEmpty", "@brief Virtual method bool QGraphicsAnchorLayout::isEmpty()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isEmpty_c0_0, &_call_cbs_isEmpty_c0_0);
  methods += new qt_gsi::GenericMethod ("isEmpty", "@hide", true, &_init_cbs_isEmpty_c0_0, &_call_cbs_isEmpty_c0_0, &_set_callback_cbs_isEmpty_c0_0);
  methods += new qt_gsi::GenericMethod ("itemAt", "@brief Virtual method QGraphicsLayoutItem *QGraphicsAnchorLayout::itemAt(int index)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_itemAt_c767_0, &_call_cbs_itemAt_c767_0);
  methods += new qt_gsi::GenericMethod ("itemAt", "@hide", true, &_init_cbs_itemAt_c767_0, &_call_cbs_itemAt_c767_0, &_set_callback_cbs_itemAt_c767_0);
  methods += new qt_gsi::GenericMethod ("removeAt", "@brief Virtual method void QGraphicsAnchorLayout::removeAt(int index)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_removeAt_767_0, &_call_cbs_removeAt_767_0);
  methods += new qt_gsi::GenericMethod ("removeAt", "@hide", false, &_init_cbs_removeAt_767_0, &_call_cbs_removeAt_767_0, &_set_callback_cbs_removeAt_767_0);
  methods += new qt_gsi::GenericMethod ("setGeometry", "@brief Virtual method void QGraphicsAnchorLayout::setGeometry(const QRectF &rect)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setGeometry_1862_0, &_call_cbs_setGeometry_1862_0);
  methods += new qt_gsi::GenericMethod ("setGeometry", "@hide", false, &_init_cbs_setGeometry_1862_0, &_call_cbs_setGeometry_1862_0, &_set_callback_cbs_setGeometry_1862_0);
  methods += new qt_gsi::GenericMethod ("*setGraphicsItem", "@brief Method void QGraphicsAnchorLayout::setGraphicsItem(QGraphicsItem *item)\nThis method is protected and can only be called from inside a derived class.", false, &_init_fp_setGraphicsItem_1919, &_call_fp_setGraphicsItem_1919);
  methods += new qt_gsi::GenericMethod ("*setOwnedByLayout", "@brief Method void QGraphicsAnchorLayout::setOwnedByLayout(bool ownedByLayout)\nThis method is protected and can only be called from inside a derived class.", false, &_init_fp_setOwnedByLayout_864, &_call_fp_setOwnedByLayout_864);
  methods += new qt_gsi::GenericMethod ("*sizeHint", "@brief Virtual method QSizeF QGraphicsAnchorLayout::sizeHint(Qt::SizeHint which, const QSizeF &constraint)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_sizeHint_c3330_1, &_call_cbs_sizeHint_c3330_1);
  methods += new qt_gsi::GenericMethod ("*sizeHint", "@hide", true, &_init_cbs_sizeHint_c3330_1, &_call_cbs_sizeHint_c3330_1, &_set_callback_cbs_sizeHint_c3330_1);
  methods += new qt_gsi::GenericMethod ("updateGeometry", "@brief Virtual method void QGraphicsAnchorLayout::updateGeometry()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_updateGeometry_0_0, &_call_cbs_updateGeometry_0_0);
  methods += new qt_gsi::GenericMethod ("updateGeometry", "@hide", false, &_init_cbs_updateGeometry_0_0, &_call_cbs_updateGeometry_0_0, &_set_callback_cbs_updateGeometry_0_0);
  methods += new qt_gsi::GenericMethod ("widgetEvent", "@brief Virtual method void QGraphicsAnchorLayout::widgetEvent(QEvent *e)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_widgetEvent_1217_0, &_call_cbs_widgetEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("widgetEvent", "@hide", false, &_init_cbs_widgetEvent_1217_0, &_call_cbs_widgetEvent_1217_0, &_set_callback_cbs_widgetEvent_1217_0);
  return methods;
}

gsi::Class<QGraphicsAnchorLayout_Adaptor> decl_QGraphicsAnchorLayout_Adaptor (qtdecl_QGraphicsAnchorLayout (), "QtWidgets", "QGraphicsAnchorLayout",
  methods_QGraphicsAnchorLayout_Adaptor (),
  "@qt\n@brief Binding of QGraphicsAnchorLayout");

}
