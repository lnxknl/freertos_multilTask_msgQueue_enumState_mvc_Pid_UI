/*******************************************************************************
 * Size: 30 px
 * Bpp: 2
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_FONT_SA_DIGITAL_NUMBER_30
#define LV_FONT_SA_DIGITAL_NUMBER_30 1
#endif

#if LV_FONT_SA_DIGITAL_NUMBER_30

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+002E "." */
    0xfe, 0xff, 0xff, 0xff,

    /* U+0030 "0" */
    0x1f, 0xff, 0xff, 0xf4, 0x47, 0xff, 0xff, 0xd1,
    0xa1, 0xff, 0xff, 0x4a, 0xb8, 0x0, 0x0, 0x2e,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbd, 0x0, 0x0, 0xbe,
    0xb4, 0x0, 0x0, 0x2e, 0x90, 0x0, 0x0, 0xa,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x90, 0x0, 0x0, 0x6, 0xb8, 0x0, 0x0, 0x2e,
    0xbd, 0x0, 0x0, 0x7e, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0x7e,
    0xbc, 0x0, 0x0, 0x2e, 0xa1, 0xff, 0xff, 0x4a,
    0x47, 0xff, 0xff, 0xd1, 0xf, 0xff, 0xff, 0xf4,

    /* U+0031 "1" */
    0x0, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0xa,
    0x0, 0x0, 0x0, 0x2e, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0x0, 0xa, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6,
    0x0, 0x0, 0x0, 0x1e, 0x0, 0x0, 0x0, 0x7e,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0x0, 0xe, 0x0, 0x0, 0x0, 0x1,
    0x0, 0x0, 0x0, 0x0,

    /* U+0032 "2" */
    0x1f, 0xff, 0xff, 0xf4, 0x7, 0xff, 0xff, 0xd1,
    0x1, 0xff, 0xff, 0x4a, 0x0, 0x0, 0x0, 0x2e,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0x7e,
    0x0, 0x0, 0x0, 0x1e, 0x2, 0xff, 0xff, 0x82,
    0xf, 0xff, 0xff, 0xf0, 0x43, 0xff, 0xff, 0xc0,
    0xb0, 0x0, 0x0, 0x0, 0xbc, 0x0, 0x0, 0x0,
    0xbe, 0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0,
    0xbe, 0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0,
    0xbe, 0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0,
    0xbe, 0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0,
    0xbc, 0x0, 0x0, 0x0, 0xa1, 0xff, 0xff, 0x40,
    0x7, 0xff, 0xff, 0xd0, 0xf, 0xff, 0xff, 0xf4,

    /* U+0033 "3" */
    0x3f, 0xff, 0xff, 0xd0, 0x7f, 0xff, 0xfd, 0x10,
    0x7f, 0xff, 0xd2, 0x80, 0x0, 0x0, 0x2e, 0x0,
    0x0, 0x2, 0xf8, 0x0, 0x0, 0xb, 0xe0, 0x0,
    0x0, 0x2f, 0x80, 0x0, 0x0, 0xbe, 0x0, 0x0,
    0x2, 0xf8, 0x0, 0x0, 0xb, 0xe0, 0x0, 0x0,
    0x2f, 0x80, 0x0, 0x0, 0x7e, 0x0, 0x0, 0x0,
    0x78, 0x2f, 0xff, 0xf8, 0x23, 0xff, 0xff, 0xfc,
    0x3, 0xff, 0xff, 0xc1, 0x0, 0x0, 0x0, 0x28,
    0x0, 0x0, 0x3, 0xe0, 0x0, 0x0, 0x1f, 0x80,
    0x0, 0x0, 0xbe, 0x0, 0x0, 0x2, 0xf8, 0x0,
    0x0, 0xb, 0xe0, 0x0, 0x0, 0x2f, 0x80, 0x0,
    0x0, 0xbe, 0x0, 0x0, 0x2, 0xf8, 0x0, 0x0,
    0x7, 0xe0, 0x0, 0x0, 0xb, 0x81, 0xff, 0xff,
    0x8a, 0xf, 0xff, 0xff, 0x40, 0xff, 0xff, 0xff,
    0x40,

    /* U+0034 "4" */
    0x0, 0x0, 0x0, 0x0, 0x90, 0x0, 0x0, 0x6,
    0xb8, 0x0, 0x0, 0x2e, 0xbd, 0x0, 0x0, 0x7e,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbc, 0x0, 0x0, 0x3e,
    0xa0, 0x0, 0x0, 0xe, 0x43, 0xff, 0xff, 0xc1,
    0xf, 0xff, 0xff, 0xf0, 0x2, 0xff, 0xff, 0x82,
    0x0, 0x0, 0x0, 0xe, 0x0, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0x7e,
    0x0, 0x0, 0x0, 0xe, 0x0, 0x0, 0x0, 0x2,
    0x0, 0x0, 0x0, 0x0,

    /* U+0035 "5" */
    0x1f, 0xff, 0xff, 0xf4, 0x47, 0xff, 0xff, 0xd0,
    0xa1, 0xff, 0xff, 0x40, 0xbc, 0x0, 0x0, 0x0,
    0xbe, 0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0,
    0xbe, 0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0,
    0xbe, 0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0,
    0xbe, 0x0, 0x0, 0x0, 0xbc, 0x0, 0x0, 0x0,
    0xb0, 0x0, 0x0, 0x0, 0x82, 0xff, 0xff, 0x80,
    0xf, 0xff, 0xff, 0xf0, 0x3, 0xff, 0xff, 0xc1,
    0x0, 0x0, 0x0, 0xa, 0x0, 0x0, 0x0, 0x3e,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0x7e,
    0x0, 0x0, 0x0, 0x2e, 0x1, 0xff, 0xff, 0x4a,
    0x7, 0xff, 0xff, 0xd0, 0xf, 0xff, 0xff, 0xf4,

    /* U+0036 "6" */
    0x1f, 0xff, 0xff, 0xf4, 0x47, 0xff, 0xff, 0xd0,
    0xa1, 0xff, 0xff, 0x40, 0xbc, 0x0, 0x0, 0x0,
    0xbe, 0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0,
    0xbe, 0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0,
    0xbe, 0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0,
    0xbe, 0x0, 0x0, 0x0, 0xbc, 0x0, 0x0, 0x0,
    0xb0, 0x0, 0x0, 0x0, 0x82, 0xff, 0xff, 0x80,
    0xf, 0xff, 0xff, 0xf0, 0x43, 0xff, 0xff, 0xc1,
    0xb0, 0x0, 0x0, 0xa, 0xbc, 0x0, 0x0, 0x3e,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0x7e,
    0xbc, 0x0, 0x0, 0x2e, 0xa1, 0xff, 0xff, 0x4a,
    0x7, 0xff, 0xff, 0xd0, 0xf, 0xff, 0xff, 0xf4,

    /* U+0037 "7" */
    0x3f, 0xff, 0xff, 0xd0, 0x3f, 0xff, 0xfd, 0x10,
    0x7f, 0xff, 0xe2, 0x80, 0x0, 0x0, 0x2e, 0x0,
    0x0, 0x1, 0xf8, 0x0, 0x0, 0xb, 0xe0, 0x0,
    0x0, 0x2f, 0x80, 0x0, 0x0, 0xbe, 0x0, 0x0,
    0x2, 0xf8, 0x0, 0x0, 0xb, 0xe0, 0x0, 0x0,
    0x2f, 0x80, 0x0, 0x0, 0x7e, 0x0, 0x0, 0x0,
    0xb8, 0x0, 0x0, 0x0, 0xa0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8,
    0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf, 0xc0,
    0x0, 0x0, 0x7f, 0x0, 0x0, 0x1, 0xfc, 0x0,
    0x0, 0x7, 0xf0, 0x0, 0x0, 0x1f, 0xc0, 0x0,
    0x0, 0x7f, 0x0, 0x0, 0x1, 0xfc, 0x0, 0x0,
    0x7, 0xf0, 0x0, 0x0, 0xf, 0xc0, 0x0, 0x0,
    0xf, 0x0, 0x0, 0x0, 0x8, 0x0, 0x0, 0x0,
    0x0,

    /* U+0038 "8" */
    0x1f, 0xff, 0xff, 0xf4, 0x47, 0xff, 0xff, 0xd1,
    0xa1, 0xff, 0xff, 0x4a, 0xbc, 0x0, 0x0, 0x2e,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbc, 0x0, 0x0, 0x7e,
    0xb0, 0x0, 0x0, 0x1e, 0x82, 0xff, 0xff, 0x82,
    0xf, 0xff, 0xff, 0xf0, 0x43, 0xff, 0xff, 0xc1,
    0xb0, 0x0, 0x0, 0xa, 0xbc, 0x0, 0x0, 0x3e,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0x7e,
    0xbc, 0x0, 0x0, 0x2e, 0xa1, 0xff, 0xff, 0x4a,
    0x7, 0xff, 0xff, 0xd0, 0xf, 0xff, 0xff, 0xf4,

    /* U+0039 "9" */
    0x1f, 0xff, 0xff, 0xf4, 0x47, 0xff, 0xff, 0xd1,
    0xa1, 0xff, 0xff, 0x4a, 0xb8, 0x0, 0x0, 0x2e,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbe, 0x0, 0x0, 0xbe, 0xbe, 0x0, 0x0, 0xbe,
    0xbc, 0x0, 0x0, 0x3e, 0xa0, 0x0, 0x0, 0xe,
    0x43, 0xff, 0xff, 0xc1, 0xf, 0xff, 0xff, 0xf0,
    0x2, 0xff, 0xff, 0x82, 0x0, 0x0, 0x0, 0xe,
    0x0, 0x0, 0x0, 0x3e, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0xbe, 0x0, 0x0, 0x0, 0xbe,
    0x0, 0x0, 0x0, 0x7e, 0x0, 0x0, 0x0, 0xe,
    0x0, 0x0, 0x0, 0x2, 0x0, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 48, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = -6},
    {.bitmap_index = 4, .adv_w = 384, .box_w = 16, .box_h = 30, .ofs_x = 4, .ofs_y = -6},
    {.bitmap_index = 124, .adv_w = 384, .box_w = 16, .box_h = 29, .ofs_x = 4, .ofs_y = -6},
    {.bitmap_index = 240, .adv_w = 384, .box_w = 16, .box_h = 30, .ofs_x = 4, .ofs_y = -6},
    {.bitmap_index = 360, .adv_w = 384, .box_w = 15, .box_h = 30, .ofs_x = 5, .ofs_y = -6},
    {.bitmap_index = 473, .adv_w = 384, .box_w = 16, .box_h = 29, .ofs_x = 4, .ofs_y = -6},
    {.bitmap_index = 589, .adv_w = 384, .box_w = 16, .box_h = 30, .ofs_x = 4, .ofs_y = -6},
    {.bitmap_index = 709, .adv_w = 384, .box_w = 16, .box_h = 30, .ofs_x = 4, .ofs_y = -6},
    {.bitmap_index = 829, .adv_w = 384, .box_w = 15, .box_h = 30, .ofs_x = 5, .ofs_y = -6},
    {.bitmap_index = 942, .adv_w = 384, .box_w = 16, .box_h = 30, .ofs_x = 4, .ofs_y = -6},
    {.bitmap_index = 1062, .adv_w = 384, .box_w = 16, .box_h = 30, .ofs_x = 4, .ofs_y = -6}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint8_t glyph_id_ofs_list_0[] = {
    0, 0, 1, 2, 3, 4, 5, 6,
    7, 8, 9, 10
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 46, .range_length = 12, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_0, .list_length = 12, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t lv_font_sa_digital_number_30 = {
#else
lv_font_t lv_font_sa_digital_number_30 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 30,          /*The maximum line height required by the font*/
    .base_line = 6,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -4,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if LV_FONT_SA_DIGITAL_NUMBER_30*/
