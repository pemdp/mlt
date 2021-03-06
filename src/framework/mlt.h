/**
 * \file mlt.h
 * \brief header file for lazy client and implementation code :-)
 *
 * Copyright (C) 2003-2014 Meltytech, LLC
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef MLT_H
#define MLT_H

/** \mainpage MLT API Reference Documentation
 * \par
 * We recommend that you look in <a href="annotated.html"><b>Data Structures</b></a>
 * or <a href="files.html"><b>Files</b></a>.
 * \par
 * Additional documentation about MLT, in general, can be found on the
 * <a href="http://www.mltframework.org/bin/view/MLT/Documentation">MLT website</a>.
 */

#ifdef __cplusplus
extern "C"
{
#endif

#include "mlt_factory.h"
#include "mlt_frame.h"
#include "mlt_deque.h"
#include "mlt_multitrack.h"
#include "mlt_producer.h"
#include "mlt_transition.h"
#include "mlt_consumer.h"
#include "mlt_filter.h"
#include "mlt_playlist.h"
#include "mlt_properties.h"
#include "mlt_field.h"
#include "mlt_tractor.h"
#include "mlt_tokeniser.h"
#include "mlt_parser.h"
#include "mlt_geometry.h"
#include "mlt_profile.h"
#include "mlt_repository.h"
#include "mlt_log.h"
#include "mlt_cache.h"
#include "mlt_version.h"

#ifdef __cplusplus
}
#endif

#endif

