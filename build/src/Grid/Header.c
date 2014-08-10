/* Header.c generated by valac 0.24.0, the Vala compiler
 * generated from Header.vala, do not modify */

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
#include <maya-calendar.h>
#include <cairo.h>
#include <float.h>
#include <math.h>


#define MAYA_VIEW_TYPE_HEADER (maya_view_header_get_type ())
#define MAYA_VIEW_HEADER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MAYA_VIEW_TYPE_HEADER, MayaViewHeader))
#define MAYA_VIEW_HEADER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), MAYA_VIEW_TYPE_HEADER, MayaViewHeaderClass))
#define MAYA_VIEW_IS_HEADER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MAYA_VIEW_TYPE_HEADER))
#define MAYA_VIEW_IS_HEADER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), MAYA_VIEW_TYPE_HEADER))
#define MAYA_VIEW_HEADER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), MAYA_VIEW_TYPE_HEADER, MayaViewHeaderClass))

typedef struct _MayaViewHeader MayaViewHeader;
typedef struct _MayaViewHeaderClass MayaViewHeaderClass;
typedef struct _MayaViewHeaderPrivate MayaViewHeaderPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_date_time_unref0(var) ((var == NULL) ? NULL : (var = (g_date_time_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _MayaViewHeader {
	GtkEventBox parent_instance;
	MayaViewHeaderPrivate * priv;
};

struct _MayaViewHeaderClass {
	GtkEventBoxClass parent_class;
};

struct _MayaViewHeaderPrivate {
	GtkGrid* header_grid;
	GtkLabel** labels;
	gint labels_length1;
	gint _labels_size_;
};


static gpointer maya_view_header_parent_class = NULL;

GType maya_view_header_get_type (void) G_GNUC_CONST;
#define MAYA_VIEW_HEADER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), MAYA_VIEW_TYPE_HEADER, MayaViewHeaderPrivate))
enum  {
	MAYA_VIEW_HEADER_DUMMY_PROPERTY
};
MayaViewHeader* maya_view_header_new (void);
MayaViewHeader* maya_view_header_construct (GType object_type);
static gboolean maya_view_header_on_draw (MayaViewHeader* self, GtkWidget* widget, cairo_t* cr);
static gboolean _maya_view_header_on_draw_gtk_widget_draw (GtkWidget* _sender, cairo_t* cr, gpointer self);
void maya_view_header_update_columns (MayaViewHeader* self, gint week_starts_on);
static void maya_view_header_finalize (GObject* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static gboolean _maya_view_header_on_draw_gtk_widget_draw (GtkWidget* _sender, cairo_t* cr, gpointer self) {
	gboolean result;
	result = maya_view_header_on_draw ((MayaViewHeader*) self, _sender, cr);
#line 50 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	return result;
#line 84 "Header.c"
}


MayaViewHeader* maya_view_header_construct (GType object_type) {
	MayaViewHeader * self = NULL;
	GtkGrid* _tmp0_ = NULL;
	GtkGrid* _tmp1_ = NULL;
	GtkGrid* _tmp2_ = NULL;
	GtkGrid* _tmp3_ = NULL;
	GtkGrid* _tmp4_ = NULL;
	GtkGrid* _tmp5_ = NULL;
	GtkGrid* _tmp6_ = NULL;
	GtkCssProvider* style_provider = NULL;
	GtkCssProvider* _tmp7_ = NULL;
	GtkStyleContext* _tmp8_ = NULL;
	GtkCssProvider* _tmp9_ = NULL;
	GtkStyleContext* _tmp10_ = NULL;
	GtkLabel** _tmp11_ = NULL;
	GtkGrid* _tmp33_ = NULL;
#line 28 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	self = (MayaViewHeader*) g_object_new (object_type, NULL);
#line 30 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp0_ = (GtkGrid*) gtk_grid_new ();
#line 30 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	g_object_ref_sink (_tmp0_);
#line 30 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_g_object_unref0 (self->priv->header_grid);
#line 30 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	self->priv->header_grid = _tmp0_;
#line 31 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp1_ = self->priv->header_grid;
#line 31 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	gtk_grid_insert_column (_tmp1_, 7);
#line 32 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp2_ = self->priv->header_grid;
#line 32 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	gtk_grid_insert_row (_tmp2_, 1);
#line 33 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp3_ = self->priv->header_grid;
#line 33 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	gtk_grid_set_column_homogeneous (_tmp3_, TRUE);
#line 34 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp4_ = self->priv->header_grid;
#line 34 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	gtk_grid_set_row_homogeneous (_tmp4_, TRUE);
#line 35 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp5_ = self->priv->header_grid;
#line 35 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	gtk_grid_set_column_spacing (_tmp5_, 0);
#line 36 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp6_ = self->priv->header_grid;
#line 36 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	gtk_grid_set_row_spacing (_tmp6_, 0);
#line 38 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp7_ = maya_util_css_get_css_provider ();
#line 38 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	style_provider = _tmp7_;
#line 41 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	gtk_event_box_set_visible_window ((GtkEventBox*) self, TRUE);
#line 42 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp8_ = gtk_widget_get_style_context ((GtkWidget*) self);
#line 42 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp9_ = style_provider;
#line 42 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	gtk_style_context_add_provider (_tmp8_, (GtkStyleProvider*) _tmp9_, (guint) 600);
#line 43 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp10_ = gtk_widget_get_style_context ((GtkWidget*) self);
#line 43 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	gtk_style_context_add_class (_tmp10_, "header");
#line 45 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp11_ = g_new0 (GtkLabel*, 7 + 1);
#line 45 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	self->priv->labels = (_vala_array_free (self->priv->labels, self->priv->labels_length1, (GDestroyNotify) g_object_unref), NULL);
#line 45 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	self->priv->labels = _tmp11_;
#line 45 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	self->priv->labels_length1 = 7;
#line 45 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	self->priv->_labels_size_ = self->priv->labels_length1;
#line 164 "Header.c"
	{
		gint c = 0;
#line 46 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
		c = 0;
#line 169 "Header.c"
		{
			gboolean _tmp12_ = FALSE;
#line 46 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
			_tmp12_ = TRUE;
#line 46 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
			while (TRUE) {
#line 176 "Header.c"
				gint _tmp14_ = 0;
				GtkLabel** _tmp15_ = NULL;
				gint _tmp15__length1 = 0;
				gint _tmp16_ = 0;
				GtkLabel* _tmp17_ = NULL;
				GtkLabel* _tmp18_ = NULL;
				GtkLabel** _tmp19_ = NULL;
				gint _tmp19__length1 = 0;
				gint _tmp20_ = 0;
				GtkLabel* _tmp21_ = NULL;
				GtkLabel** _tmp22_ = NULL;
				gint _tmp22__length1 = 0;
				gint _tmp23_ = 0;
				GtkLabel* _tmp24_ = NULL;
				GtkLabel** _tmp25_ = NULL;
				gint _tmp25__length1 = 0;
				gint _tmp26_ = 0;
				GtkLabel* _tmp27_ = NULL;
				GtkGrid* _tmp28_ = NULL;
				GtkLabel** _tmp29_ = NULL;
				gint _tmp29__length1 = 0;
				gint _tmp30_ = 0;
				GtkLabel* _tmp31_ = NULL;
				gint _tmp32_ = 0;
#line 46 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				if (!_tmp12_) {
#line 203 "Header.c"
					gint _tmp13_ = 0;
#line 46 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
					_tmp13_ = c;
#line 46 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
					c = _tmp13_ + 1;
#line 209 "Header.c"
				}
#line 46 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp12_ = FALSE;
#line 46 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp14_ = c;
#line 46 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				if (!(_tmp14_ < 7)) {
#line 46 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
					break;
#line 219 "Header.c"
				}
#line 47 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp15_ = self->priv->labels;
#line 47 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp15__length1 = self->priv->labels_length1;
#line 47 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp16_ = c;
#line 47 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp17_ = (GtkLabel*) gtk_label_new ("");
#line 47 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				g_object_ref_sink (_tmp17_);
#line 47 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_g_object_unref0 (_tmp15_[_tmp16_]);
#line 47 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp15_[_tmp16_] = _tmp17_;
#line 47 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp18_ = _tmp15_[_tmp16_];
#line 48 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp19_ = self->priv->labels;
#line 48 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp19__length1 = self->priv->labels_length1;
#line 48 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp20_ = c;
#line 48 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp21_ = _tmp19_[_tmp20_];
#line 48 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				gtk_widget_set_margin_top ((GtkWidget*) _tmp21_, 4);
#line 49 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp22_ = self->priv->labels;
#line 49 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp22__length1 = self->priv->labels_length1;
#line 49 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp23_ = c;
#line 49 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp24_ = _tmp22_[_tmp23_];
#line 49 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				gtk_widget_set_margin_bottom ((GtkWidget*) _tmp24_, 2);
#line 50 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp25_ = self->priv->labels;
#line 50 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp25__length1 = self->priv->labels_length1;
#line 50 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp26_ = c;
#line 50 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp27_ = _tmp25_[_tmp26_];
#line 50 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				g_signal_connect_object ((GtkWidget*) _tmp27_, "draw", (GCallback) _maya_view_header_on_draw_gtk_widget_draw, self, 0);
#line 51 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp28_ = self->priv->header_grid;
#line 51 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp29_ = self->priv->labels;
#line 51 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp29__length1 = self->priv->labels_length1;
#line 51 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp30_ = c;
#line 51 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp31_ = _tmp29_[_tmp30_];
#line 51 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp32_ = c;
#line 51 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				gtk_grid_attach (_tmp28_, (GtkWidget*) _tmp31_, _tmp32_, 0, 1, 1);
#line 281 "Header.c"
			}
		}
	}
#line 54 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp33_ = self->priv->header_grid;
#line 54 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp33_);
#line 28 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_g_object_unref0 (style_provider);
#line 28 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	return self;
#line 293 "Header.c"
}


MayaViewHeader* maya_view_header_new (void) {
#line 28 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	return maya_view_header_construct (MAYA_VIEW_TYPE_HEADER);
#line 300 "Header.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 61 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	return self ? g_object_ref (self) : NULL;
#line 307 "Header.c"
}


void maya_view_header_update_columns (MayaViewHeader* self, gint week_starts_on) {
	GDateTime* date = NULL;
	GDateTime* _tmp0_ = NULL;
	GDateTime* _tmp1_ = NULL;
	GDateTime* _tmp2_ = NULL;
	GDateTime* _tmp3_ = NULL;
	GDateTime* _tmp4_ = NULL;
	gint _tmp5_ = 0;
	GDateTime* _tmp6_ = NULL;
	gint _tmp7_ = 0;
	GDateTime* _tmp8_ = NULL;
	GtkLabel** _tmp9_ = NULL;
	gint _tmp9__length1 = 0;
#line 57 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	g_return_if_fail (self != NULL);
#line 59 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp0_ = g_date_time_new_now_local ();
#line 59 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp1_ = _tmp0_;
#line 59 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp2_ = maya_util_strip_time (_tmp1_);
#line 59 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp3_ = _tmp2_;
#line 59 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_g_date_time_unref0 (_tmp1_);
#line 59 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	date = _tmp3_;
#line 60 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp4_ = date;
#line 60 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp5_ = week_starts_on;
#line 60 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp6_ = date;
#line 60 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp7_ = g_date_time_get_day_of_week (_tmp6_);
#line 60 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp8_ = g_date_time_add_days (_tmp4_, _tmp5_ - _tmp7_);
#line 60 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_g_date_time_unref0 (date);
#line 60 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	date = _tmp8_;
#line 61 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp9_ = self->priv->labels;
#line 61 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp9__length1 = self->priv->labels_length1;
#line 356 "Header.c"
	{
		GtkLabel** label_collection = NULL;
		gint label_collection_length1 = 0;
		gint _label_collection_size_ = 0;
		gint label_it = 0;
#line 61 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
		label_collection = _tmp9_;
#line 61 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
		label_collection_length1 = _tmp9__length1;
#line 61 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
		for (label_it = 0; label_it < _tmp9__length1; label_it = label_it + 1) {
#line 368 "Header.c"
			GtkLabel* _tmp10_ = NULL;
			GtkLabel* label = NULL;
#line 61 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
			_tmp10_ = _g_object_ref0 (label_collection[label_it]);
#line 61 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
			label = _tmp10_;
#line 375 "Header.c"
			{
				GtkLabel* _tmp11_ = NULL;
				GDateTime* _tmp12_ = NULL;
				gchar* _tmp13_ = NULL;
				gchar* _tmp14_ = NULL;
				GDateTime* _tmp15_ = NULL;
				GDateTime* _tmp16_ = NULL;
#line 62 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp11_ = label;
#line 62 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp12_ = date;
#line 62 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp13_ = g_date_time_format (_tmp12_, "%a");
#line 62 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp14_ = _tmp13_;
#line 62 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				gtk_label_set_label (_tmp11_, _tmp14_);
#line 62 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_g_free0 (_tmp14_);
#line 63 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp15_ = date;
#line 63 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_tmp16_ = g_date_time_add_days (_tmp15_, 1);
#line 63 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_g_date_time_unref0 (date);
#line 63 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				date = _tmp16_;
#line 61 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
				_g_object_unref0 (label);
#line 405 "Header.c"
			}
		}
	}
#line 57 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_g_date_time_unref0 (date);
#line 411 "Header.c"
}


static gboolean maya_view_header_on_draw (MayaViewHeader* self, GtkWidget* widget, cairo_t* cr) {
	gboolean result = FALSE;
	GtkAllocation size = {0};
	GtkWidget* _tmp0_ = NULL;
	GtkAllocation _tmp1_ = {0};
	cairo_t* _tmp2_ = NULL;
	GtkAllocation _tmp3_ = {0};
	gint _tmp4_ = 0;
	cairo_t* _tmp5_ = NULL;
	cairo_t* _tmp6_ = NULL;
	cairo_t* _tmp7_ = NULL;
	cairo_t* _tmp8_ = NULL;
	cairo_t* _tmp9_ = NULL;
#line 67 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 67 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	g_return_val_if_fail (widget != NULL, FALSE);
#line 67 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	g_return_val_if_fail (cr != NULL, FALSE);
#line 70 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp0_ = widget;
#line 70 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	gtk_widget_get_allocation (_tmp0_, &_tmp1_);
#line 70 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	size = _tmp1_;
#line 73 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp2_ = cr;
#line 73 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp3_ = size;
#line 73 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp4_ = _tmp3_.height;
#line 73 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	cairo_move_to (_tmp2_, 0.5, (gdouble) (_tmp4_ + 2));
#line 74 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp5_ = cr;
#line 74 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	cairo_line_to (_tmp5_, 0.5, (gdouble) (-4));
#line 76 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp6_ = cr;
#line 76 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	cairo_set_source_rgba (_tmp6_, 0.0, 0.0, 0.0, 0.25);
#line 77 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp7_ = cr;
#line 77 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	cairo_set_line_width (_tmp7_, 1.0);
#line 78 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp8_ = cr;
#line 78 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	cairo_set_antialias (_tmp8_, CAIRO_ANTIALIAS_NONE);
#line 79 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_tmp9_ = cr;
#line 79 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	cairo_stroke (_tmp9_);
#line 81 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	result = FALSE;
#line 81 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	return result;
#line 472 "Header.c"
}


static void maya_view_header_class_init (MayaViewHeaderClass * klass) {
#line 23 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	maya_view_header_parent_class = g_type_class_peek_parent (klass);
#line 23 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	g_type_class_add_private (klass, sizeof (MayaViewHeaderPrivate));
#line 23 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	G_OBJECT_CLASS (klass)->finalize = maya_view_header_finalize;
#line 483 "Header.c"
}


static void maya_view_header_instance_init (MayaViewHeader * self) {
#line 23 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	self->priv = MAYA_VIEW_HEADER_GET_PRIVATE (self);
#line 490 "Header.c"
}


static void maya_view_header_finalize (GObject* obj) {
	MayaViewHeader * self;
#line 23 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, MAYA_VIEW_TYPE_HEADER, MayaViewHeader);
#line 25 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	_g_object_unref0 (self->priv->header_grid);
#line 26 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	self->priv->labels = (_vala_array_free (self->priv->labels, self->priv->labels_length1, (GDestroyNotify) g_object_unref), NULL);
#line 23 "/home/phillip/maya/fix-1329550/src/Grid/Header.vala"
	G_OBJECT_CLASS (maya_view_header_parent_class)->finalize (obj);
#line 504 "Header.c"
}


/**
 * Represents the header at the top of the calendar grid.
 */
GType maya_view_header_get_type (void) {
	static volatile gsize maya_view_header_type_id__volatile = 0;
	if (g_once_init_enter (&maya_view_header_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (MayaViewHeaderClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) maya_view_header_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (MayaViewHeader), 0, (GInstanceInitFunc) maya_view_header_instance_init, NULL };
		GType maya_view_header_type_id;
		maya_view_header_type_id = g_type_register_static (GTK_TYPE_EVENT_BOX, "MayaViewHeader", &g_define_type_info, 0);
		g_once_init_leave (&maya_view_header_type_id__volatile, maya_view_header_type_id);
	}
	return maya_view_header_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



