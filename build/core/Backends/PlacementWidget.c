/* PlacementWidget.c generated by valac 0.24.0, the Vala compiler
 * generated from PlacementWidget.vala, do not modify */

/* -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-*/
/*-
 * Copyright (c) 2013 Maya Developers (https://launchpad.net/maya)
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * Authored by: Corentin Noël <tintou@mailoo.org>
 */
/* This is needed in order to have good placement for widgets*/

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>
#include <glib/gi18n-lib.h>
#include <float.h>
#include <math.h>


#define MAYA_TYPE_PLACEMENT_WIDGET (maya_placement_widget_get_type ())
#define MAYA_PLACEMENT_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MAYA_TYPE_PLACEMENT_WIDGET, MayaPlacementWidget))
#define MAYA_PLACEMENT_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), MAYA_TYPE_PLACEMENT_WIDGET, MayaPlacementWidgetClass))
#define MAYA_IS_PLACEMENT_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MAYA_TYPE_PLACEMENT_WIDGET))
#define MAYA_IS_PLACEMENT_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), MAYA_TYPE_PLACEMENT_WIDGET))
#define MAYA_PLACEMENT_WIDGET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), MAYA_TYPE_PLACEMENT_WIDGET, MayaPlacementWidgetClass))

typedef struct _MayaPlacementWidget MayaPlacementWidget;
typedef struct _MayaPlacementWidgetClass MayaPlacementWidgetClass;
typedef struct _MayaPlacementWidgetPrivate MayaPlacementWidgetPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _MayaPlacementWidget {
	GObject parent_instance;
	MayaPlacementWidgetPrivate * priv;
	GtkWidget* widget;
	gint row;
	gint column;
	gchar* ref_name;
	gboolean needed;
};

struct _MayaPlacementWidgetClass {
	GObjectClass parent_class;
};


static gpointer maya_placement_widget_parent_class = NULL;

GType maya_placement_widget_get_type (void) G_GNUC_CONST;
enum  {
	MAYA_PLACEMENT_WIDGET_DUMMY_PROPERTY
};
MayaPlacementWidget* maya_placement_widget_new (void);
MayaPlacementWidget* maya_placement_widget_construct (GType object_type);
static void maya_placement_widget_finalize (GObject* obj);
GeeLinkedList* maya_default_placement_widgets_get_user (gint row, gboolean needed, const gchar* entry_text, const gchar* ph_text);
GeeLinkedList* maya_default_placement_widgets_get_email (gint row, gboolean needed, const gchar* entry_text, const gchar* ph_text);
MayaPlacementWidget* maya_default_placement_widgets_get_keep_copy (gint row, gboolean default_value);


MayaPlacementWidget* maya_placement_widget_construct (GType object_type) {
	MayaPlacementWidget * self = NULL;
#line 24 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	self = (MayaPlacementWidget*) g_object_new (object_type, NULL);
#line 24 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	return self;
#line 87 "PlacementWidget.c"
}


MayaPlacementWidget* maya_placement_widget_new (void) {
#line 24 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	return maya_placement_widget_construct (MAYA_TYPE_PLACEMENT_WIDGET);
#line 94 "PlacementWidget.c"
}


static void maya_placement_widget_class_init (MayaPlacementWidgetClass * klass) {
#line 24 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	maya_placement_widget_parent_class = g_type_class_peek_parent (klass);
#line 24 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	G_OBJECT_CLASS (klass)->finalize = maya_placement_widget_finalize;
#line 103 "PlacementWidget.c"
}


static void maya_placement_widget_instance_init (MayaPlacementWidget * self) {
#line 27 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	self->row = 0;
#line 28 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	self->column = 0;
#line 30 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	self->needed = FALSE;
#line 114 "PlacementWidget.c"
}


static void maya_placement_widget_finalize (GObject* obj) {
	MayaPlacementWidget * self;
#line 24 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, MAYA_TYPE_PLACEMENT_WIDGET, MayaPlacementWidget);
#line 26 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_g_object_unref0 (self->widget);
#line 29 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_g_free0 (self->ref_name);
#line 24 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	G_OBJECT_CLASS (maya_placement_widget_parent_class)->finalize (obj);
#line 128 "PlacementWidget.c"
}


GType maya_placement_widget_get_type (void) {
	static volatile gsize maya_placement_widget_type_id__volatile = 0;
	if (g_once_init_enter (&maya_placement_widget_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (MayaPlacementWidgetClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) maya_placement_widget_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (MayaPlacementWidget), 0, (GInstanceInitFunc) maya_placement_widget_instance_init, NULL };
		GType maya_placement_widget_type_id;
		maya_placement_widget_type_id = g_type_register_static (G_TYPE_OBJECT, "MayaPlacementWidget", &g_define_type_info, 0);
		g_once_init_leave (&maya_placement_widget_type_id__volatile, maya_placement_widget_type_id);
	}
	return maya_placement_widget_type_id__volatile;
}


GeeLinkedList* maya_default_placement_widgets_get_user (gint row, gboolean needed, const gchar* entry_text, const gchar* ph_text) {
	GeeLinkedList* result = NULL;
	GeeLinkedList* collection = NULL;
	GeeLinkedList* _tmp0_ = NULL;
	MayaPlacementWidget* user_label = NULL;
	MayaPlacementWidget* _tmp1_ = NULL;
	MayaPlacementWidget* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	GtkLabel* _tmp4_ = NULL;
	MayaPlacementWidget* _tmp5_ = NULL;
	GtkWidget* _tmp6_ = NULL;
	MayaPlacementWidget* _tmp7_ = NULL;
	gint _tmp8_ = 0;
	MayaPlacementWidget* _tmp9_ = NULL;
	MayaPlacementWidget* _tmp10_ = NULL;
	gchar* _tmp11_ = NULL;
	GeeLinkedList* _tmp12_ = NULL;
	MayaPlacementWidget* _tmp13_ = NULL;
	MayaPlacementWidget* user_entry = NULL;
	MayaPlacementWidget* _tmp14_ = NULL;
	MayaPlacementWidget* _tmp15_ = NULL;
	GtkEntry* _tmp16_ = NULL;
	const gchar* _tmp17_ = NULL;
	const gchar* _tmp18_ = NULL;
	MayaPlacementWidget* _tmp20_ = NULL;
	GtkWidget* _tmp21_ = NULL;
	MayaPlacementWidget* _tmp22_ = NULL;
	gint _tmp23_ = 0;
	MayaPlacementWidget* _tmp24_ = NULL;
	MayaPlacementWidget* _tmp25_ = NULL;
	gchar* _tmp26_ = NULL;
	MayaPlacementWidget* _tmp27_ = NULL;
	gboolean _tmp28_ = FALSE;
	MayaPlacementWidget* _tmp29_ = NULL;
	GtkWidget* _tmp30_ = NULL;
	const gchar* _tmp31_ = NULL;
	GeeLinkedList* _tmp32_ = NULL;
	MayaPlacementWidget* _tmp33_ = NULL;
#line 34 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	g_return_val_if_fail (entry_text != NULL, NULL);
#line 35 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp0_ = gee_linked_list_new (MAYA_TYPE_PLACEMENT_WIDGET, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL);
#line 35 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	collection = _tmp0_;
#line 36 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp1_ = maya_placement_widget_new ();
#line 36 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	user_label = _tmp1_;
#line 37 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp2_ = user_label;
#line 37 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp3_ = _ ("User:");
#line 37 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp4_ = (GtkLabel*) gtk_label_new (_tmp3_);
#line 37 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	g_object_ref_sink (_tmp4_);
#line 37 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_g_object_unref0 (_tmp2_->widget);
#line 37 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp2_->widget = (GtkWidget*) _tmp4_;
#line 38 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp5_ = user_label;
#line 38 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp6_ = _tmp5_->widget;
#line 38 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	g_object_set ((GtkMisc*) G_TYPE_CHECK_INSTANCE_CAST (_tmp6_, GTK_TYPE_LABEL, GtkLabel), "xalign", (gfloat) 1, NULL);
#line 39 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp7_ = user_label;
#line 39 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp8_ = row;
#line 39 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp7_->row = _tmp8_;
#line 40 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp9_ = user_label;
#line 40 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp9_->column = 0;
#line 41 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp10_ = user_label;
#line 41 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp11_ = g_strdup ("user_label");
#line 41 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_g_free0 (_tmp10_->ref_name);
#line 41 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp10_->ref_name = _tmp11_;
#line 42 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp12_ = collection;
#line 42 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp13_ = user_label;
#line 42 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp12_, _tmp13_);
#line 44 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp14_ = maya_placement_widget_new ();
#line 44 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	user_entry = _tmp14_;
#line 45 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp15_ = user_entry;
#line 45 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp16_ = (GtkEntry*) gtk_entry_new ();
#line 45 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	g_object_ref_sink (_tmp16_);
#line 45 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_g_object_unref0 (_tmp15_->widget);
#line 45 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp15_->widget = (GtkWidget*) _tmp16_;
#line 46 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp18_ = ph_text;
#line 46 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp17_ = _tmp18_;
#line 46 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	if (_tmp17_ == NULL) {
#line 254 "PlacementWidget.c"
		const gchar* _tmp19_ = NULL;
#line 46 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
		_tmp19_ = _ ("user.name");
#line 46 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
		_tmp17_ = _tmp19_;
#line 260 "PlacementWidget.c"
	}
#line 46 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp20_ = user_entry;
#line 46 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp21_ = _tmp20_->widget;
#line 46 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	gtk_entry_set_placeholder_text (G_TYPE_CHECK_INSTANCE_CAST (_tmp21_, GTK_TYPE_ENTRY, GtkEntry), _tmp17_);
#line 47 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp22_ = user_entry;
#line 47 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp23_ = row;
#line 47 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp22_->row = _tmp23_;
#line 48 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp24_ = user_entry;
#line 48 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp24_->column = 1;
#line 49 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp25_ = user_entry;
#line 49 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp26_ = g_strdup ("user_entry");
#line 49 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_g_free0 (_tmp25_->ref_name);
#line 49 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp25_->ref_name = _tmp26_;
#line 50 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp27_ = user_entry;
#line 50 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp28_ = needed;
#line 50 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp27_->needed = _tmp28_;
#line 51 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp29_ = user_entry;
#line 51 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp30_ = _tmp29_->widget;
#line 51 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp31_ = entry_text;
#line 51 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	gtk_entry_set_text (G_TYPE_CHECK_INSTANCE_CAST (_tmp30_, GTK_TYPE_ENTRY, GtkEntry), _tmp31_);
#line 52 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp32_ = collection;
#line 52 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp33_ = user_entry;
#line 52 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp32_, _tmp33_);
#line 53 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	result = collection;
#line 53 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_g_object_unref0 (user_entry);
#line 53 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_g_object_unref0 (user_label);
#line 53 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	return result;
#line 314 "PlacementWidget.c"
}


GeeLinkedList* maya_default_placement_widgets_get_email (gint row, gboolean needed, const gchar* entry_text, const gchar* ph_text) {
	GeeLinkedList* result = NULL;
	GeeLinkedList* collection = NULL;
	GeeLinkedList* _tmp0_ = NULL;
	MayaPlacementWidget* user_label = NULL;
	MayaPlacementWidget* _tmp1_ = NULL;
	MayaPlacementWidget* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	GtkLabel* _tmp4_ = NULL;
	MayaPlacementWidget* _tmp5_ = NULL;
	GtkWidget* _tmp6_ = NULL;
	MayaPlacementWidget* _tmp7_ = NULL;
	gint _tmp8_ = 0;
	MayaPlacementWidget* _tmp9_ = NULL;
	MayaPlacementWidget* _tmp10_ = NULL;
	gchar* _tmp11_ = NULL;
	GeeLinkedList* _tmp12_ = NULL;
	MayaPlacementWidget* _tmp13_ = NULL;
	MayaPlacementWidget* user_entry = NULL;
	MayaPlacementWidget* _tmp14_ = NULL;
	MayaPlacementWidget* _tmp15_ = NULL;
	GtkEntry* _tmp16_ = NULL;
	const gchar* _tmp17_ = NULL;
	const gchar* _tmp18_ = NULL;
	MayaPlacementWidget* _tmp20_ = NULL;
	GtkWidget* _tmp21_ = NULL;
	MayaPlacementWidget* _tmp22_ = NULL;
	gint _tmp23_ = 0;
	MayaPlacementWidget* _tmp24_ = NULL;
	MayaPlacementWidget* _tmp25_ = NULL;
	gchar* _tmp26_ = NULL;
	MayaPlacementWidget* _tmp27_ = NULL;
	gboolean _tmp28_ = FALSE;
	MayaPlacementWidget* _tmp29_ = NULL;
	GtkWidget* _tmp30_ = NULL;
	const gchar* _tmp31_ = NULL;
	GeeLinkedList* _tmp32_ = NULL;
	MayaPlacementWidget* _tmp33_ = NULL;
#line 56 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	g_return_val_if_fail (entry_text != NULL, NULL);
#line 57 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp0_ = gee_linked_list_new (MAYA_TYPE_PLACEMENT_WIDGET, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL);
#line 57 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	collection = _tmp0_;
#line 58 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp1_ = maya_placement_widget_new ();
#line 58 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	user_label = _tmp1_;
#line 59 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp2_ = user_label;
#line 59 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp3_ = _ ("Email:");
#line 59 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp4_ = (GtkLabel*) gtk_label_new (_tmp3_);
#line 59 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	g_object_ref_sink (_tmp4_);
#line 59 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_g_object_unref0 (_tmp2_->widget);
#line 59 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp2_->widget = (GtkWidget*) _tmp4_;
#line 60 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp5_ = user_label;
#line 60 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp6_ = _tmp5_->widget;
#line 60 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	g_object_set ((GtkMisc*) G_TYPE_CHECK_INSTANCE_CAST (_tmp6_, GTK_TYPE_LABEL, GtkLabel), "xalign", (gfloat) 1, NULL);
#line 61 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp7_ = user_label;
#line 61 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp8_ = row;
#line 61 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp7_->row = _tmp8_;
#line 62 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp9_ = user_label;
#line 62 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp9_->column = 0;
#line 63 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp10_ = user_label;
#line 63 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp11_ = g_strdup ("email_label");
#line 63 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_g_free0 (_tmp10_->ref_name);
#line 63 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp10_->ref_name = _tmp11_;
#line 64 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp12_ = collection;
#line 64 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp13_ = user_label;
#line 64 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp12_, _tmp13_);
#line 66 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp14_ = maya_placement_widget_new ();
#line 66 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	user_entry = _tmp14_;
#line 67 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp15_ = user_entry;
#line 67 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp16_ = (GtkEntry*) gtk_entry_new ();
#line 67 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	g_object_ref_sink (_tmp16_);
#line 67 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_g_object_unref0 (_tmp15_->widget);
#line 67 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp15_->widget = (GtkWidget*) _tmp16_;
#line 68 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp18_ = ph_text;
#line 68 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp17_ = _tmp18_;
#line 68 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	if (_tmp17_ == NULL) {
#line 428 "PlacementWidget.c"
		const gchar* _tmp19_ = NULL;
#line 68 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
		_tmp19_ = _ ("john@doe.com");
#line 68 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
		_tmp17_ = _tmp19_;
#line 434 "PlacementWidget.c"
	}
#line 68 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp20_ = user_entry;
#line 68 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp21_ = _tmp20_->widget;
#line 68 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	gtk_entry_set_placeholder_text (G_TYPE_CHECK_INSTANCE_CAST (_tmp21_, GTK_TYPE_ENTRY, GtkEntry), _tmp17_);
#line 69 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp22_ = user_entry;
#line 69 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp23_ = row;
#line 69 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp22_->row = _tmp23_;
#line 70 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp24_ = user_entry;
#line 70 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp24_->column = 1;
#line 71 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp25_ = user_entry;
#line 71 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp26_ = g_strdup ("email_entry");
#line 71 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_g_free0 (_tmp25_->ref_name);
#line 71 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp25_->ref_name = _tmp26_;
#line 72 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp27_ = user_entry;
#line 72 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp28_ = needed;
#line 72 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp27_->needed = _tmp28_;
#line 73 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp29_ = user_entry;
#line 73 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp30_ = _tmp29_->widget;
#line 73 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp31_ = entry_text;
#line 73 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	gtk_entry_set_text (G_TYPE_CHECK_INSTANCE_CAST (_tmp30_, GTK_TYPE_ENTRY, GtkEntry), _tmp31_);
#line 74 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp32_ = collection;
#line 74 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp33_ = user_entry;
#line 74 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp32_, _tmp33_);
#line 75 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	result = collection;
#line 75 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_g_object_unref0 (user_entry);
#line 75 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_g_object_unref0 (user_label);
#line 75 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	return result;
#line 488 "PlacementWidget.c"
}


MayaPlacementWidget* maya_default_placement_widgets_get_keep_copy (gint row, gboolean default_value) {
	MayaPlacementWidget* result = NULL;
	MayaPlacementWidget* keep_check = NULL;
	MayaPlacementWidget* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GtkCheckButton* _tmp2_ = NULL;
	GtkWidget* _tmp3_ = NULL;
	gboolean _tmp4_ = FALSE;
	gint _tmp5_ = 0;
	gchar* _tmp6_ = NULL;
#line 79 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp0_ = maya_placement_widget_new ();
#line 79 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	keep_check = _tmp0_;
#line 80 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp1_ = _ ("Keep a copy locally");
#line 80 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp2_ = (GtkCheckButton*) gtk_check_button_new_with_label (_tmp1_);
#line 80 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	g_object_ref_sink (_tmp2_);
#line 80 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_g_object_unref0 (keep_check->widget);
#line 80 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	keep_check->widget = (GtkWidget*) _tmp2_;
#line 81 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp3_ = keep_check->widget;
#line 81 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp4_ = default_value;
#line 81 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	gtk_toggle_button_set_active ((GtkToggleButton*) G_TYPE_CHECK_INSTANCE_CAST (_tmp3_, GTK_TYPE_CHECK_BUTTON, GtkCheckButton), _tmp4_);
#line 82 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp5_ = row;
#line 82 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	keep_check->row = _tmp5_;
#line 83 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	keep_check->column = 1;
#line 84 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_tmp6_ = g_strdup ("keep_copy");
#line 84 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	_g_free0 (keep_check->ref_name);
#line 84 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	keep_check->ref_name = _tmp6_;
#line 85 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	result = keep_check;
#line 85 "/home/phillip/maya/fix-1329550/core/Backends/PlacementWidget.vala"
	return result;
#line 538 "PlacementWidget.c"
}



