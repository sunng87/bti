/*
 * Copyright (C) 2010 Sun Ning <classicning@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#define _GNU_SOURCE

/* Colorfy print */
void colorfy_text(const char *text, char *colorfied);
void colorfy_print(xmlChar *name, xmlChar *text);
void colorfy_verbose_print(xmlChar *name, xmlChar *id, 
        xmlChar *created, xmlChar *text);

