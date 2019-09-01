/*
 * This file is part of the TREZOR project, https://trezor.io/
 *
 * Copyright (C) 2016 Alex Beregszaszi <alex@rtfs.hu>
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

//#ifndef __COSMOS_H__
//#define __COSMOS_H__

#include <stdint.h>
#include <stdbool.h>
#include "bip32.h"
#include "messages.pb.h"

void cosmos_signing_init(CosmosSignTx *msg, const HDNode *node);
void cosmos_signing_abort(void);
void cosmos_signing_txack(CosmosTxAck *msg);

//void cosmos_message_sign(CosmosSignMessage *msg, const HDNode *node, CosmosMessageSignature *resp);
//int cosmos_message_verify(CosmosVerifyMessage *msg);



#endif