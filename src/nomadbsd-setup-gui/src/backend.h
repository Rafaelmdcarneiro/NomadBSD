//-
// Copyright (c) 2019 The NomadBSD Project. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
#include "defs.h"

#define BACKEND_GET_LOCALES	     PATH_NOMADBSD_SETUP " locales"
#define BACKEND_GET_KBDLAYOUTS	     PATH_NOMADBSD_SETUP " kbdlayouts"
#define BACKEND_GET_KBDLAYOUTS_LATIN PATH_NOMADBSD_SETUP " kbdlayouts -l"
#define BACKEND_GET_KBDVARIANTS	     PATH_NOMADBSD_SETUP " kbdvariants"
#define BACKEND_GET_TIMEZONES	     PATH_NOMADBSD_SETUP " timezones"
#define BACKEND_GET_SHELLS	     PATH_NOMADBSD_SETUP " shells"
#define BACKEND_GET_EDITORS	     PATH_NOMADBSD_SETUP " editors"
#define BACKEND_GET_BROWSERS	     PATH_NOMADBSD_SETUP " browsers"
#define BACKEND_GET_EMAILCLIENTS     PATH_NOMADBSD_SETUP " emailclients"
#define BACKEND_GET_GUIEDITORS	     PATH_NOMADBSD_SETUP " guieditors"
#define BACKEND_GET_FILEMANAGERS     PATH_NOMADBSD_SETUP " filemanagers"
#define BACKEND_COMMIT		     PATH_NOMADBSD_SETUP " commit"

