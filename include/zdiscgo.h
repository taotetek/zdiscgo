/*  =========================================================================
    zdiscgo - ZeroMQ Syslog Normalizer

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of zdiscgo.                                      
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           
    =========================================================================
*/

#ifndef ZDISCGO_H_H_INCLUDED
#define ZDISCGO_H_H_INCLUDED

//  Include the project library file
#include "zdiscgo_library.h"

ZDISCGO_EXPORT void
zdiscgo_actor (zsock_t *pipe, void *args);

void
zdiscgo_test (bool verbose);

#endif
