/*
 *  Cosmos Core module
 *          -highlander
 * 
 */


//#ifndef __COSMOS_H__
//#define __COSMOS_H__

#include "trezor/crypto/bip32.h"

#include <stdint.h>
#include <stdbool.h>

typedef struct _CosmosSignTx CosmosSignTx;
typedef struct _CosmosTxAck CosmosTxAck;
//typedef struct _CosmosSignMessage CosmosSignMessage;
//typedef struct _CosmosVerifyMessage CosmosVerifyMessage;
typedef struct _CosmosMessageSignature CosmosMessageSignature;
typedef struct _TokenType TokenType;
typedef struct _CoinType CoinType;

void cosmos_signing_init(CosmosSignTx *msg, const HDNode *node, bool needs_confirm);
void cosmos_signing_abort(void);
void cosmos_signing_txack(CosmosTxAck *msg);
//void format_cosmos_address(const uint8_t *to, char *destination_str,
//                             uint32_t destination_str_len);

/**
 * \brief Get the number of decimals associated with an erc20 token
 * \param   token_shorcut String corresponding to a token_shortcut in coins table in coins.c
 * \returns uint32_t      The number of decimals to interpret the token with
 */
uint32_t cosmos_get_decimal(const char *token_shortcut);

//void cosmos_message_sign(const CosmosSignMessage *msg, const HDNode *node, CosmosMessageSignature *resp);
//int cosmos_message_verify(const CosmosVerifyMessage *msg);

void cosmosFormatAmount(const bignum256 *amnt, const TokenType *token, uint32_t chain_id, char *buf, int buflen);
