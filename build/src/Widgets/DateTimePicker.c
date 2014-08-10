/* DateTimePicker.c generated by valac 0.24.0, the Vala compiler
 * generated from DateTimePicker.vala, do not modify */

/**/
/*  Copyright (C) 2011-2012 Maxwell Barvian*/
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
#include <granite.h>
#include <float.h>
#include <math.h>


#define MAYA_VIEW_WIDGETS_TYPE_DATE_TIME_PICKER (maya_view_widgets_date_time_picker_get_type ())
#define MAYA_VIEW_WIDGETS_DATE_TIME_PICKER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MAYA_VIEW_WIDGETS_TYPE_DATE_TIME_PICKER, MayaViewWidgetsDateTimePicker))
#define MAYA_VIEW_WIDGETS_DATE_TIME_PICKER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), MAYA_VIEW_WIDGETS_TYPE_DATE_TIME_PICKER, MayaViewWidgetsDateTimePickerClass))
#define MAYA_VIEW_WIDGETS_IS_DATE_TIME_PICKER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MAYA_VIEW_WIDGETS_TYPE_DATE_TIME_PICKER))
#define MAYA_VIEW_WIDGETS_IS_DATE_TIME_PICKER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), MAYA_VIEW_WIDGETS_TYPE_DATE_TIME_PICKER))
#define MAYA_VIEW_WIDGETS_DATE_TIME_PICKER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), MAYA_VIEW_WIDGETS_TYPE_DATE_TIME_PICKER, MayaViewWidgetsDateTimePickerClass))

typedef struct _MayaViewWidgetsDateTimePicker MayaViewWidgetsDateTimePicker;
typedef struct _MayaViewWidgetsDateTimePickerClass MayaViewWidgetsDateTimePickerClass;
typedef struct _MayaViewWidgetsDateTimePickerPrivate MayaViewWidgetsDateTimePickerPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _MayaViewWidgetsDateTimePicker {
	GtkGrid parent_instance;
	MayaViewWidgetsDateTimePickerPrivate * priv;
};

struct _MayaViewWidgetsDateTimePickerClass {
	GtkGridClass parent_class;
};

struct _MayaViewWidgetsDateTimePickerPrivate {
	GraniteWidgetsDatePicker* _date_picker;
	GraniteWidgetsTimePicker* _time_picker;
};


static gpointer maya_view_widgets_date_time_picker_parent_class = NULL;

GType maya_view_widgets_date_time_picker_get_type (void) G_GNUC_CONST;
#define MAYA_VIEW_WIDGETS_DATE_TIME_PICKER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), MAYA_VIEW_WIDGETS_TYPE_DATE_TIME_PICKER, MayaViewWidgetsDateTimePickerPrivate))
enum  {
	MAYA_VIEW_WIDGETS_DATE_TIME_PICKER_DUMMY_PROPERTY,
	MAYA_VIEW_WIDGETS_DATE_TIME_PICKER_DATE_TIME,
	MAYA_VIEW_WIDGETS_DATE_TIME_PICKER_DATE_PICKER,
	MAYA_VIEW_WIDGETS_DATE_TIME_PICKER_TIME_PICKER
};
MayaViewWidgetsDateTimePicker* maya_view_widgets_date_time_picker_new (void);
MayaViewWidgetsDateTimePicker* maya_view_widgets_date_time_picker_construct (GType object_type);
static void maya_view_widgets_date_time_picker_set_date_picker (MayaViewWidgetsDateTimePicker* self, GraniteWidgetsDatePicker* value);
static void maya_view_widgets_date_time_picker_set_time_picker (MayaViewWidgetsDateTimePicker* self, GraniteWidgetsTimePicker* value);
GraniteWidgetsDatePicker* maya_view_widgets_date_time_picker_get_date_picker (MayaViewWidgetsDateTimePicker* self);
GraniteWidgetsTimePicker* maya_view_widgets_date_time_picker_get_time_picker (MayaViewWidgetsDateTimePicker* self);
GDateTime* maya_view_widgets_date_time_picker_get_date_time (MayaViewWidgetsDateTimePicker* self);
static void maya_view_widgets_date_time_picker_finalize (GObject* obj);
static void _vala_maya_view_widgets_date_time_picker_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_maya_view_widgets_date_time_picker_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


MayaViewWidgetsDateTimePicker* maya_view_widgets_date_time_picker_construct (GType object_type) {
	MayaViewWidgetsDateTimePicker * self = NULL;
	GraniteWidgetsDatePicker* _tmp0_ = NULL;
	GraniteWidgetsDatePicker* _tmp1_ = NULL;
	GraniteWidgetsTimePicker* _tmp2_ = NULL;
	GraniteWidgetsTimePicker* _tmp3_ = NULL;
	GraniteWidgetsDatePicker* _tmp4_ = NULL;
	GraniteWidgetsTimePicker* _tmp5_ = NULL;
#line 31 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	self = (MayaViewWidgetsDateTimePicker*) g_object_new (object_type, NULL);
#line 33 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp0_ = granite_widgets_date_picker_new ();
#line 33 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	g_object_ref_sink (_tmp0_);
#line 33 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp1_ = _tmp0_;
#line 33 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	maya_view_widgets_date_time_picker_set_date_picker (self, _tmp1_);
#line 33 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_g_object_unref0 (_tmp1_);
#line 34 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp2_ = granite_widgets_time_picker_new ();
#line 34 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	g_object_ref_sink (_tmp2_);
#line 34 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp3_ = _tmp2_;
#line 34 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	maya_view_widgets_date_time_picker_set_time_picker (self, _tmp3_);
#line 34 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_g_object_unref0 (_tmp3_);
#line 37 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	gtk_grid_set_column_spacing ((GtkGrid*) self, (guint) 10);
#line 38 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	gtk_grid_set_column_homogeneous ((GtkGrid*) self, FALSE);
#line 40 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp4_ = self->priv->_date_picker;
#line 40 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	gtk_grid_attach ((GtkGrid*) self, (GtkWidget*) _tmp4_, 0, 0, 1, 1);
#line 41 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp5_ = self->priv->_time_picker;
#line 41 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	gtk_grid_attach ((GtkGrid*) self, (GtkWidget*) _tmp5_, 1, 0, 1, 1);
#line 31 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	return self;
#line 123 "DateTimePicker.c"
}


MayaViewWidgetsDateTimePicker* maya_view_widgets_date_time_picker_new (void) {
#line 31 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	return maya_view_widgets_date_time_picker_construct (MAYA_VIEW_WIDGETS_TYPE_DATE_TIME_PICKER);
#line 130 "DateTimePicker.c"
}


GDateTime* maya_view_widgets_date_time_picker_get_date_time (MayaViewWidgetsDateTimePicker* self) {
	GDateTime* result;
	GraniteWidgetsDatePicker* _tmp0_ = NULL;
	GDateTime* _tmp1_ = NULL;
	GDateTime* _tmp2_ = NULL;
	gint _tmp3_ = 0;
	GraniteWidgetsDatePicker* _tmp4_ = NULL;
	GDateTime* _tmp5_ = NULL;
	GDateTime* _tmp6_ = NULL;
	gint _tmp7_ = 0;
	GraniteWidgetsDatePicker* _tmp8_ = NULL;
	GDateTime* _tmp9_ = NULL;
	GDateTime* _tmp10_ = NULL;
	gint _tmp11_ = 0;
	GraniteWidgetsTimePicker* _tmp12_ = NULL;
	GDateTime* _tmp13_ = NULL;
	GDateTime* _tmp14_ = NULL;
	gint _tmp15_ = 0;
	GraniteWidgetsTimePicker* _tmp16_ = NULL;
	GDateTime* _tmp17_ = NULL;
	GDateTime* _tmp18_ = NULL;
	gint _tmp19_ = 0;
	GraniteWidgetsTimePicker* _tmp20_ = NULL;
	GDateTime* _tmp21_ = NULL;
	GDateTime* _tmp22_ = NULL;
	gint _tmp23_ = 0;
	GDateTime* _tmp24_ = NULL;
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp0_ = self->priv->_date_picker;
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp1_ = granite_widgets_date_picker_get_date (_tmp0_);
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp2_ = _tmp1_;
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp3_ = g_date_time_get_year (_tmp2_);
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp4_ = self->priv->_date_picker;
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp5_ = granite_widgets_date_picker_get_date (_tmp4_);
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp6_ = _tmp5_;
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp7_ = g_date_time_get_month (_tmp6_);
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp8_ = self->priv->_date_picker;
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp9_ = granite_widgets_date_picker_get_date (_tmp8_);
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp10_ = _tmp9_;
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp11_ = g_date_time_get_day_of_month (_tmp10_);
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp12_ = self->priv->_time_picker;
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp13_ = granite_widgets_time_picker_get_time (_tmp12_);
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp14_ = _tmp13_;
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp15_ = g_date_time_get_hour (_tmp14_);
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp16_ = self->priv->_time_picker;
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp17_ = granite_widgets_time_picker_get_time (_tmp16_);
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp18_ = _tmp17_;
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp19_ = g_date_time_get_minute (_tmp18_);
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp20_ = self->priv->_time_picker;
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp21_ = granite_widgets_time_picker_get_time (_tmp20_);
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp22_ = _tmp21_;
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp23_ = g_date_time_get_second (_tmp22_);
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp24_ = g_date_time_new_local (_tmp3_, _tmp7_, _tmp11_, _tmp15_, _tmp19_, (gdouble) _tmp23_);
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	result = _tmp24_;
#line 23 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	return result;
#line 217 "DateTimePicker.c"
}


GraniteWidgetsDatePicker* maya_view_widgets_date_time_picker_get_date_picker (MayaViewWidgetsDateTimePicker* self) {
	GraniteWidgetsDatePicker* result;
	GraniteWidgetsDatePicker* _tmp0_ = NULL;
#line 28 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 28 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp0_ = self->priv->_date_picker;
#line 28 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	result = _tmp0_;
#line 28 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	return result;
#line 232 "DateTimePicker.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 28 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	return self ? g_object_ref (self) : NULL;
#line 239 "DateTimePicker.c"
}


static void maya_view_widgets_date_time_picker_set_date_picker (MayaViewWidgetsDateTimePicker* self, GraniteWidgetsDatePicker* value) {
	GraniteWidgetsDatePicker* _tmp0_ = NULL;
	GraniteWidgetsDatePicker* _tmp1_ = NULL;
#line 28 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	g_return_if_fail (self != NULL);
#line 28 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp0_ = value;
#line 28 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 28 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_g_object_unref0 (self->priv->_date_picker);
#line 28 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	self->priv->_date_picker = _tmp1_;
#line 28 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	g_object_notify ((GObject *) self, "date-picker");
#line 258 "DateTimePicker.c"
}


GraniteWidgetsTimePicker* maya_view_widgets_date_time_picker_get_time_picker (MayaViewWidgetsDateTimePicker* self) {
	GraniteWidgetsTimePicker* result;
	GraniteWidgetsTimePicker* _tmp0_ = NULL;
#line 29 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 29 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp0_ = self->priv->_time_picker;
#line 29 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	result = _tmp0_;
#line 29 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	return result;
#line 273 "DateTimePicker.c"
}


static void maya_view_widgets_date_time_picker_set_time_picker (MayaViewWidgetsDateTimePicker* self, GraniteWidgetsTimePicker* value) {
	GraniteWidgetsTimePicker* _tmp0_ = NULL;
	GraniteWidgetsTimePicker* _tmp1_ = NULL;
#line 29 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	g_return_if_fail (self != NULL);
#line 29 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp0_ = value;
#line 29 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 29 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_g_object_unref0 (self->priv->_time_picker);
#line 29 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	self->priv->_time_picker = _tmp1_;
#line 29 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	g_object_notify ((GObject *) self, "time-picker");
#line 292 "DateTimePicker.c"
}


static void maya_view_widgets_date_time_picker_class_init (MayaViewWidgetsDateTimePickerClass * klass) {
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	maya_view_widgets_date_time_picker_parent_class = g_type_class_peek_parent (klass);
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	g_type_class_add_private (klass, sizeof (MayaViewWidgetsDateTimePickerPrivate));
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_maya_view_widgets_date_time_picker_get_property;
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_maya_view_widgets_date_time_picker_set_property;
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	G_OBJECT_CLASS (klass)->finalize = maya_view_widgets_date_time_picker_finalize;
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), MAYA_VIEW_WIDGETS_DATE_TIME_PICKER_DATE_TIME, g_param_spec_boxed ("date-time", "date-time", "date-time", G_TYPE_DATE_TIME, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), MAYA_VIEW_WIDGETS_DATE_TIME_PICKER_DATE_PICKER, g_param_spec_object ("date-picker", "date-picker", "date-picker", GRANITE_WIDGETS_TYPE_DATE_PICKER, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), MAYA_VIEW_WIDGETS_DATE_TIME_PICKER_TIME_PICKER, g_param_spec_object ("time-picker", "time-picker", "time-picker", GRANITE_WIDGETS_TYPE_TIME_PICKER, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 313 "DateTimePicker.c"
}


static void maya_view_widgets_date_time_picker_instance_init (MayaViewWidgetsDateTimePicker * self) {
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	self->priv = MAYA_VIEW_WIDGETS_DATE_TIME_PICKER_GET_PRIVATE (self);
#line 320 "DateTimePicker.c"
}


static void maya_view_widgets_date_time_picker_finalize (GObject* obj) {
	MayaViewWidgetsDateTimePicker * self;
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, MAYA_VIEW_WIDGETS_TYPE_DATE_TIME_PICKER, MayaViewWidgetsDateTimePicker);
#line 28 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_g_object_unref0 (self->priv->_date_picker);
#line 29 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	_g_object_unref0 (self->priv->_time_picker);
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	G_OBJECT_CLASS (maya_view_widgets_date_time_picker_parent_class)->finalize (obj);
#line 334 "DateTimePicker.c"
}


GType maya_view_widgets_date_time_picker_get_type (void) {
	static volatile gsize maya_view_widgets_date_time_picker_type_id__volatile = 0;
	if (g_once_init_enter (&maya_view_widgets_date_time_picker_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (MayaViewWidgetsDateTimePickerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) maya_view_widgets_date_time_picker_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (MayaViewWidgetsDateTimePicker), 0, (GInstanceInitFunc) maya_view_widgets_date_time_picker_instance_init, NULL };
		GType maya_view_widgets_date_time_picker_type_id;
		maya_view_widgets_date_time_picker_type_id = g_type_register_static (GTK_TYPE_GRID, "MayaViewWidgetsDateTimePicker", &g_define_type_info, 0);
		g_once_init_leave (&maya_view_widgets_date_time_picker_type_id__volatile, maya_view_widgets_date_time_picker_type_id);
	}
	return maya_view_widgets_date_time_picker_type_id__volatile;
}


static void _vala_maya_view_widgets_date_time_picker_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	MayaViewWidgetsDateTimePicker * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, MAYA_VIEW_WIDGETS_TYPE_DATE_TIME_PICKER, MayaViewWidgetsDateTimePicker);
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	switch (property_id) {
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		case MAYA_VIEW_WIDGETS_DATE_TIME_PICKER_DATE_TIME:
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		g_value_take_boxed (value, maya_view_widgets_date_time_picker_get_date_time (self));
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		break;
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		case MAYA_VIEW_WIDGETS_DATE_TIME_PICKER_DATE_PICKER:
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		g_value_set_object (value, maya_view_widgets_date_time_picker_get_date_picker (self));
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		break;
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		case MAYA_VIEW_WIDGETS_DATE_TIME_PICKER_TIME_PICKER:
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		g_value_set_object (value, maya_view_widgets_date_time_picker_get_time_picker (self));
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		break;
#line 373 "DateTimePicker.c"
		default:
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		break;
#line 379 "DateTimePicker.c"
	}
}


static void _vala_maya_view_widgets_date_time_picker_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	MayaViewWidgetsDateTimePicker * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, MAYA_VIEW_WIDGETS_TYPE_DATE_TIME_PICKER, MayaViewWidgetsDateTimePicker);
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
	switch (property_id) {
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		case MAYA_VIEW_WIDGETS_DATE_TIME_PICKER_DATE_PICKER:
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		maya_view_widgets_date_time_picker_set_date_picker (self, g_value_get_object (value));
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		break;
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		case MAYA_VIEW_WIDGETS_DATE_TIME_PICKER_TIME_PICKER:
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		maya_view_widgets_date_time_picker_set_time_picker (self, g_value_get_object (value));
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		break;
#line 401 "DateTimePicker.c"
		default:
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 20 "/home/phillip/maya/fix-1329550/src/Widgets/DateTimePicker.vala"
		break;
#line 407 "DateTimePicker.c"
	}
}



