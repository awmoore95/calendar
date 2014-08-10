/* MultiDayEventButton.c generated by valac 0.24.0, the Vala compiler
 * generated from MultiDayEventButton.vala, do not modify */

/**/
/*  Copyright (C) 2012 Niels Avonds <niels.avonds@gmail.com>*/
/**/
/*  This program is free software: you can redistribute it and/or modify*/
/*  it under the terms of the GNU General Public License as published by*/
/*  the Free Software Foundation, either version 3 of the License, or*/
/*  (at your option) any later version.*/
/**/
/*  This program is distributed in the hope that it will be useful,*/
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of*/
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the*/
/*  GNU General Public License for more details.*/
/**/
/*  You should have received a copy of the GNU General Public License*/
/*  along with this program.  If not, see <http://www.gnu.org/licenses/>.*/
/**/

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <libecal/libecal.h>
#include <stdlib.h>
#include <string.h>
#include <pango/pango.h>
#include <float.h>
#include <math.h>


#define MAYA_VIEW_TYPE_EVENT_BUTTON (maya_view_event_button_get_type ())
#define MAYA_VIEW_EVENT_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MAYA_VIEW_TYPE_EVENT_BUTTON, MayaViewEventButton))
#define MAYA_VIEW_EVENT_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), MAYA_VIEW_TYPE_EVENT_BUTTON, MayaViewEventButtonClass))
#define MAYA_VIEW_IS_EVENT_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MAYA_VIEW_TYPE_EVENT_BUTTON))
#define MAYA_VIEW_IS_EVENT_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), MAYA_VIEW_TYPE_EVENT_BUTTON))
#define MAYA_VIEW_EVENT_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), MAYA_VIEW_TYPE_EVENT_BUTTON, MayaViewEventButtonClass))

typedef struct _MayaViewEventButton MayaViewEventButton;
typedef struct _MayaViewEventButtonClass MayaViewEventButtonClass;
typedef struct _MayaViewEventButtonPrivate MayaViewEventButtonPrivate;

#define MAYA_VIEW_TYPE_MULTI_DAY_EVENT_BUTTON (maya_view_multi_day_event_button_get_type ())
#define MAYA_VIEW_MULTI_DAY_EVENT_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MAYA_VIEW_TYPE_MULTI_DAY_EVENT_BUTTON, MayaViewMultiDayEventButton))
#define MAYA_VIEW_MULTI_DAY_EVENT_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), MAYA_VIEW_TYPE_MULTI_DAY_EVENT_BUTTON, MayaViewMultiDayEventButtonClass))
#define MAYA_VIEW_IS_MULTI_DAY_EVENT_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MAYA_VIEW_TYPE_MULTI_DAY_EVENT_BUTTON))
#define MAYA_VIEW_IS_MULTI_DAY_EVENT_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), MAYA_VIEW_TYPE_MULTI_DAY_EVENT_BUTTON))
#define MAYA_VIEW_MULTI_DAY_EVENT_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), MAYA_VIEW_TYPE_MULTI_DAY_EVENT_BUTTON, MayaViewMultiDayEventButtonClass))

typedef struct _MayaViewMultiDayEventButton MayaViewMultiDayEventButton;
typedef struct _MayaViewMultiDayEventButtonClass MayaViewMultiDayEventButtonClass;
typedef struct _MayaViewMultiDayEventButtonPrivate MayaViewMultiDayEventButtonPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _MayaViewEventButton {
	GtkGrid parent_instance;
	MayaViewEventButtonPrivate * priv;
};

struct _MayaViewEventButtonClass {
	GtkGridClass parent_class;
};

struct _MayaViewMultiDayEventButton {
	MayaViewEventButton parent_instance;
	MayaViewMultiDayEventButtonPrivate * priv;
};

struct _MayaViewMultiDayEventButtonClass {
	MayaViewEventButtonClass parent_class;
};

struct _MayaViewMultiDayEventButtonPrivate {
	GtkLabel* label;
};


static gpointer maya_view_multi_day_event_button_parent_class = NULL;

GType maya_view_event_button_get_type (void) G_GNUC_CONST;
GType maya_view_multi_day_event_button_get_type (void) G_GNUC_CONST;
#define MAYA_VIEW_MULTI_DAY_EVENT_BUTTON_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), MAYA_VIEW_TYPE_MULTI_DAY_EVENT_BUTTON, MayaViewMultiDayEventButtonPrivate))
enum  {
	MAYA_VIEW_MULTI_DAY_EVENT_BUTTON_DUMMY_PROPERTY
};
MayaViewMultiDayEventButton* maya_view_multi_day_event_button_new (ECalComponent* comp);
MayaViewMultiDayEventButton* maya_view_multi_day_event_button_construct (GType object_type, ECalComponent* comp);
MayaViewEventButton* maya_view_event_button_new (ECalComponent* comp);
MayaViewEventButton* maya_view_event_button_construct (GType object_type, ECalComponent* comp);
gchar* maya_view_event_button_get_summary (MayaViewEventButton* self);
static void maya_view_multi_day_event_button_finalize (GObject* obj);


MayaViewMultiDayEventButton* maya_view_multi_day_event_button_construct (GType object_type, ECalComponent* comp) {
	MayaViewMultiDayEventButton * self = NULL;
	ECalComponent* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	GtkLabel* _tmp3_ = NULL;
	GtkLabel* _tmp4_ = NULL;
	GtkLabel* _tmp5_ = NULL;
	GtkLabel* _tmp6_ = NULL;
	GtkLabel* _tmp7_ = NULL;
	GtkLabel* _tmp8_ = NULL;
	GtkLabel* _tmp9_ = NULL;
#line 27 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	g_return_val_if_fail (comp != NULL, NULL);
#line 28 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	_tmp0_ = comp;
#line 28 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	self = (MayaViewMultiDayEventButton*) maya_view_event_button_construct (object_type, _tmp0_);
#line 30 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	_tmp1_ = maya_view_event_button_get_summary ((MayaViewEventButton*) self);
#line 30 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	_tmp2_ = _tmp1_;
#line 30 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	_tmp3_ = (GtkLabel*) gtk_label_new (_tmp2_);
#line 30 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	g_object_ref_sink (_tmp3_);
#line 30 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	_g_object_unref0 (self->priv->label);
#line 30 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	self->priv->label = _tmp3_;
#line 30 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	_g_free0 (_tmp2_);
#line 31 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	_tmp4_ = self->priv->label;
#line 31 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	gtk_label_set_ellipsize (_tmp4_, PANGO_ELLIPSIZE_END);
#line 32 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	_tmp5_ = self->priv->label;
#line 32 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp5_);
#line 33 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	_tmp6_ = self->priv->label;
#line 33 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	gtk_widget_set_hexpand ((GtkWidget*) _tmp6_, TRUE);
#line 34 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	_tmp7_ = self->priv->label;
#line 34 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	g_object_set (_tmp7_, "wrap", FALSE, NULL);
#line 35 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	_tmp8_ = self->priv->label;
#line 35 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	g_object_set ((GtkMisc*) _tmp8_, "xalign", (gfloat) 0, NULL);
#line 36 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	_tmp9_ = self->priv->label;
#line 36 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	gtk_widget_show ((GtkWidget*) _tmp9_);
#line 27 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	return self;
#line 154 "MultiDayEventButton.c"
}


MayaViewMultiDayEventButton* maya_view_multi_day_event_button_new (ECalComponent* comp) {
#line 27 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	return maya_view_multi_day_event_button_construct (MAYA_VIEW_TYPE_MULTI_DAY_EVENT_BUTTON, comp);
#line 161 "MultiDayEventButton.c"
}


static void maya_view_multi_day_event_button_class_init (MayaViewMultiDayEventButtonClass * klass) {
#line 23 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	maya_view_multi_day_event_button_parent_class = g_type_class_peek_parent (klass);
#line 23 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	g_type_class_add_private (klass, sizeof (MayaViewMultiDayEventButtonPrivate));
#line 23 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	G_OBJECT_CLASS (klass)->finalize = maya_view_multi_day_event_button_finalize;
#line 172 "MultiDayEventButton.c"
}


static void maya_view_multi_day_event_button_instance_init (MayaViewMultiDayEventButton * self) {
#line 23 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	self->priv = MAYA_VIEW_MULTI_DAY_EVENT_BUTTON_GET_PRIVATE (self);
#line 179 "MultiDayEventButton.c"
}


static void maya_view_multi_day_event_button_finalize (GObject* obj) {
	MayaViewMultiDayEventButton * self;
#line 23 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, MAYA_VIEW_TYPE_MULTI_DAY_EVENT_BUTTON, MayaViewMultiDayEventButton);
#line 25 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	_g_object_unref0 (self->priv->label);
#line 23 "/home/phillip/maya/fix-1329550/src/Grid/EventButton/MultiDayEventButton.vala"
	G_OBJECT_CLASS (maya_view_multi_day_event_button_parent_class)->finalize (obj);
#line 191 "MultiDayEventButton.c"
}


/**
 * Represents a single event on the grid.
 */
GType maya_view_multi_day_event_button_get_type (void) {
	static volatile gsize maya_view_multi_day_event_button_type_id__volatile = 0;
	if (g_once_init_enter (&maya_view_multi_day_event_button_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (MayaViewMultiDayEventButtonClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) maya_view_multi_day_event_button_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (MayaViewMultiDayEventButton), 0, (GInstanceInitFunc) maya_view_multi_day_event_button_instance_init, NULL };
		GType maya_view_multi_day_event_button_type_id;
		maya_view_multi_day_event_button_type_id = g_type_register_static (MAYA_VIEW_TYPE_EVENT_BUTTON, "MayaViewMultiDayEventButton", &g_define_type_info, 0);
		g_once_init_leave (&maya_view_multi_day_event_button_type_id__volatile, maya_view_multi_day_event_button_type_id);
	}
	return maya_view_multi_day_event_button_type_id__volatile;
}



