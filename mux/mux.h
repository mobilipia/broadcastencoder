/*****************************************************************************
 * mux.h : OBE muxing headers
 *****************************************************************************
 * Copyright (C) 2010 Open Broadcast Systems Ltd.
 *
 * Authors: Kieran Kunhya <kieran@kunhya.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02111, USA.
 *
 *****************************************************************************/

#ifndef OBE_MUX_H
#define OBE_MUX_H

typedef struct
{
    void* (*open_muxer)( void *ptr );
} obe_mux_func_t;

typedef struct
{
    obe_t *h;
    obe_device_t *device;
    int num_output_streams;
    obe_output_stream_t *output_streams;
} obe_mux_params_t;

extern const obe_mux_func_t ts_muxer;

#endif
