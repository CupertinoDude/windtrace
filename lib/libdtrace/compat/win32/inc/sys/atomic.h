/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */

/*++

Copyright (c) Microsoft Corporation

Module Name:

    atomic.h

Abstract:

    This file implements atomic operations for the DTrace/NT compatibility
    layer.

--*/

#pragma once

#define atomic_inc_32(i)    InterlockedIncrement((volatile LONG*)(i))
#define atomic_dec_32(i)    InterlockedDecrement((volatile LONG*)(i))
#define atomic_add_32(i, v) InterlockedAdd((volatile LONG*)(i), (v))

