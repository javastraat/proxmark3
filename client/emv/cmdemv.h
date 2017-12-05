//-----------------------------------------------------------------------------
// Copyright (C) 2017 Merlok
// modified 2017 iceman
// This code is licensed to you under the terms of the GNU GPL, version 2 or,
// at your option, any later version. See the LICENSE.txt file for the text of
// the license.
//-----------------------------------------------------------------------------
// EMV commands
//-----------------------------------------------------------------------------

#ifndef CMDEMV_H__
#define CMDEMV_H__

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>
#include <ctype.h>
#include "proxmark3.h"
#include "ui.h"
#include "cmdparser.h"
#include "common.h"
#include "util.h"
#include "util_posix.h"
#include "cmdmain.h"
#include "emvcore.h"
#include "apduinfo.h"

#define TLV_ADD(tag, value)( tlvdb_add(tlvRoot, tlvdb_fixed(tag, sizeof(value) - 1, (const unsigned char *)value)) )

int CmdHFEMV(const char *Cmd);

extern int CmdHFEMVSelect(const char *cmd);
extern int CmdHFEMVSearch(const char *cmd);
extern int CmdHFEMVPPSE(const char *cmd);
extern int CmdHFEMVExec(const char *cmd);
extern int CmdHfEMVGetrng(const char *Cmd);
extern int CmdHfEMVList(const char *Cmd);

#endif