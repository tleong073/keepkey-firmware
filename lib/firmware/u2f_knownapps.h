/*
 * This file is part of the TREZOR project, https://trezor.io/
 *
 * Copyright (C) 2016 Jochen Hoenicke <hoenicke@gmail.com>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __U2F_KNOWNAPPS_H_INCLUDED__
#define __U2F_KNOWNAPPS_H_INCLUDED__

#include "keepkey/board/u2f.h"

#include <stdint.h>

typedef struct {
	const uint8_t appid[U2F_APPID_SIZE];
	const char *appname;
} U2FWellKnown;

#if DEBUG_LINK
static const U2FWellKnown u2f_localhost = {
	// https://localhost:8888
	{ 0x4e, 0x35, 0x95, 0x9c, 0x1a, 0xbb, 0x68, 0xa0, 0x9a, 0x85, 0xd5, 0x61, 0x6d, 0x3f, 0xec, 0x97, 0xf1, 0xf7, 0xae, 0xc2, 0x7, 0x53, 0xcf, 0x5, 0x72, 0x8b, 0xee, 0x5a, 0xdf, 0x59, 0x78, 0xc2},
	"localhost (dev)"
};
#endif

static const U2FWellKnown u2f_well_known[] = {
	{
		// shapeshift.com
		{ 0x9F, 0x8A, 0xC5, 0xD5, 0x07, 0xD2, 0x0E, 0x96, 0xDF, 0xF1, 0x3C, 0xFB, 0x20, 0xC2, 0x42, 0xB8, 0xD4, 0xA4, 0xCC, 0x61, 0x5E, 0x37, 0x0F, 0xF6, 0x8E, 0xC7, 0x2E, 0x54, 0x61, 0x6D, 0xFB, 0x51 },
		"ShapeShift",
		#define U2F_SHAPESHIFT_COM (&u2f_well_known[0])
	},
	{
		// shapeshift.io
		{ 0x6D, 0x89, 0xD6, 0x67, 0x6A, 0xC1, 0xE1, 0xEF, 0x90, 0x8F, 0xCA, 0x25, 0xEB, 0x68, 0xBF, 0x5C, 0x3F, 0x18, 0x8B, 0xFF, 0x46, 0x0C, 0x86, 0xAC, 0x7D, 0xDA, 0x5E, 0x91, 0xCB, 0x3A, 0xB5, 0x52 },
		"ShapeShift",
		#define U2F_SHAPESHIFT_IO (&u2f_well_known[1])
	},
	{
		// shapeshift.com staging
		{ 0x7D, 0x0C, 0xBA, 0x5C, 0x58, 0xE1, 0x4A, 0x6B, 0x41, 0xFA, 0xFB, 0x85, 0xD1, 0x4A, 0x52, 0x21, 0xF2, 0xE6, 0x4D, 0x64, 0x19, 0x15, 0x7F, 0xD0, 0xBF, 0xC0, 0xFB, 0x57, 0x7A, 0x98, 0xD5, 0x4E },
		"ShapeShift (staging)",
		#define U2F_SHAPESHIFT_COM_STG (&u2f_well_known[2])
	},
	{
		// shapeshift.io staging
		{ 0xC7, 0x6E, 0xBA, 0x1A, 0xF1, 0x0A, 0x48, 0xA4, 0xFD, 0xA9, 0x63, 0xBB, 0x5B, 0x9F, 0x17, 0x42, 0xE5, 0x78, 0x4F, 0x75, 0xDF, 0x3E, 0xDC, 0xED, 0x23, 0x73, 0xF0, 0x16, 0x20, 0x0F, 0xF8, 0x24 },
		"ShapeShift (staging)",
		#define U2F_SHAPESHIFT_IO_STG (&u2f_well_known[3])
	},
	{
		// shapeshift.com dev
		{ 0x19, 0xB8, 0xF9, 0x8C, 0xAD, 0x0C, 0xED, 0x18, 0x9F, 0x2F, 0x0F, 0x37, 0xC7, 0x14, 0xAD, 0xF8, 0x61, 0xDE, 0xA1, 0x94, 0xB5, 0xF9, 0x4D, 0x5A, 0xA6, 0xFF, 0xA7, 0xDC, 0xC3, 0x82, 0xA3, 0x0F },
		"ShapeShift (dev)",
		#define U2F_SHAPESHIFT_COM_DEV (&u2f_well_known[4])
	},
	{
		// shapeshift.io dev
		{ 0xC7, 0x44, 0xFD, 0x93, 0x8B, 0xDE, 0x8E, 0x5B, 0xFD, 0x26, 0xFF, 0x22, 0xE3, 0xB3, 0xF0, 0x40, 0xE2, 0xC3, 0x33, 0x45, 0xD9, 0x3E, 0xC2, 0x7A, 0xD8, 0x7E, 0x5B, 0x3C, 0x33, 0x25, 0xA9, 0x97 },
		"ShapeShift (dev)"
		#define U2F_SHAPESHIFT_IO_DEV (&u2f_well_known[5])
	},
	{
		// https://www.gstatic.com/securitykey/origins.json
		{ 0xa5, 0x46, 0x72, 0xb2, 0x22, 0xc4, 0xcf, 0x95,
		  0xe1, 0x51, 0xed, 0x8d, 0x4d, 0x3c, 0x76, 0x7a,
		  0x6c, 0xc3, 0x49, 0x43, 0x59, 0x43, 0x79, 0x4e,
		  0x88, 0x4f, 0x3d, 0x02, 0x3a, 0x82, 0x29, 0xfd },
		"Google",
	},
	{
		// https://github.com/u2f/trusted_facets
		{ 0x70, 0x61, 0x7d, 0xfe, 0xd0, 0x65, 0x86, 0x3a,
		  0xf4, 0x7c, 0x15, 0x55, 0x6c, 0x91, 0x79, 0x88,
		  0x80, 0x82, 0x8c, 0xc4, 0x07, 0xfd, 0xf7, 0x0a,
		  0xe8, 0x50, 0x11, 0x56, 0x94, 0x65, 0xa0, 0x75 },
		"GitHub",
	},
	{
		// https://www.dropbox.com/u2f-app-id.json
		{ 0xc5, 0x0f, 0x8a, 0x7b, 0x70, 0x8e, 0x92, 0xf8,
		  0x2e, 0x7a, 0x50, 0xe2, 0xbd, 0xc5, 0x5d, 0x8f,
		  0xd9, 0x1a, 0x22, 0xfe, 0x6b, 0x29, 0xc0, 0xcd,
		  0xf7, 0x80, 0x55, 0x30, 0x84, 0x2a, 0xf5, 0x81 },
		"Dropbox",
	},
	{
		// https://slushpool.com/static/security/u2f.json
		{ 0x08, 0xb2, 0xa3, 0xd4, 0x19, 0x39, 0xaa, 0x31,
		  0x66, 0x84, 0x93, 0xcb, 0x36, 0xcd, 0xcc, 0x4f,
		  0x16, 0xc4, 0xd9, 0xb4, 0xc8, 0x23, 0x8b, 0x73,
		  0xc2, 0xf6, 0x72, 0xc0, 0x33, 0x00, 0x71, 0x97 },
		"Slush Pool",
	},
	{
		// https://bitbucket.org
		{ 0x12, 0x74, 0x3b, 0x92, 0x12, 0x97, 0xb7, 0x7f,
		  0x11, 0x35, 0xe4, 0x1f, 0xde, 0xdd, 0x4a, 0x84,
		  0x6a, 0xfe, 0x82, 0xe1, 0xf3, 0x69, 0x32, 0xa9,
		  0x91, 0x2f, 0x3b, 0x0d, 0x8d, 0xfb, 0x7d, 0x0e },
		"Bitbucket",
	},
	{
		// https://gitlab.com
		{ 0xe7, 0xbe, 0x96, 0xa5, 0x1b, 0xd0, 0x19, 0x2a,
		  0x72, 0x84, 0x0d, 0x2e, 0x59, 0x09, 0xf7, 0x2b,
		  0xa8, 0x2a, 0x2f, 0xe9, 0x3f, 0xaa, 0x62, 0x4f,
		  0x03, 0x39, 0x6b, 0x30, 0xe4, 0x94, 0xc8, 0x04 },
		"GitLab",
	},
	{
		// https://www.fastmail.com
		{ 0x69, 0x66, 0xab, 0xe3, 0x67, 0x4e, 0xa2, 0xf5,
		  0x30, 0x79, 0xeb, 0x71, 0x01, 0x97, 0x84, 0x8c,
		  0x9b, 0xe6, 0xf3, 0x63, 0x99, 0x2f, 0xd0, 0x29,
		  0xe9, 0x89, 0x84, 0x47, 0xcb, 0x9f, 0x00, 0x84 },
		"FastMail",
	},
	{
		// https://account.gandi.net/api/u2f/trusted_facets.json
		{ 0xa4, 0xe2, 0x2d, 0xca, 0xfe, 0xa7, 0xe9, 0x0e,
		  0x12, 0x89, 0x50, 0x11, 0x39, 0x89, 0xfc, 0x45,
		  0x97, 0x8d, 0xc9, 0xfb, 0x87, 0x76, 0x75, 0x60,
		  0x51, 0x6c, 0x1c, 0x69, 0xdf, 0xdf, 0xd1, 0x96 },
		"Gandi",
	},
	{
		// https://www.bitfinex.com
		{ 0x30, 0x2f, 0xd5, 0xb4, 0x49, 0x2a, 0x07, 0xb9,
		  0xfe, 0xbb, 0x30, 0xe7, 0x32, 0x69, 0xec, 0xa5,
		  0x01, 0x20, 0x5c, 0xcf, 0xe0, 0xc2, 0x0b, 0xf7,
		  0xb4, 0x72, 0xfa, 0x2d, 0x31, 0xe2, 0x1e, 0x63 },
		"Bitfinex",
	},
	{
		// https://demo.yubico.com
		{ 0x55, 0x67, 0x3b, 0x51, 0x38, 0xcc, 0x90, 0xd3,
		  0xb7, 0xf3, 0x2b, 0xfd, 0xad, 0x6a, 0x38, 0xa8,
		  0xed, 0xd7, 0xb3, 0x55, 0xb7, 0x7a, 0xb9, 0x79,
		  0x21, 0x96, 0xf1, 0x06, 0xd1, 0x6c, 0xa3, 0x12 },
		"Yubico U2F Demo",
	},
	{
		// https://u2f.bin.coffee
		{
		  0x1b, 0x3c, 0x16, 0xdd, 0x2f, 0x7c, 0x46, 0xe2,
		  0xb4, 0xc2, 0x89, 0xdc, 0x16, 0x74, 0x6b, 0xcc,
		  0x60, 0xdf, 0xcf, 0x0f, 0xb8, 0x18, 0xe1, 0x32,
		  0x15, 0x52, 0x6e, 0x14, 0x08, 0xe7, 0xf4, 0x68 },
		"u2f.bin.coffee",
	}
};

#endif // U2F_KNOWNAPPS_INCLUDED
