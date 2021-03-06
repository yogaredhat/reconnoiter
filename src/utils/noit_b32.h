/*
 * Copyright (c) 2005-2007, OmniTI Computer Consulting, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *    * Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *    * Redistributions in binary form must reproduce the above
 *      copyright notice, this list of conditions and the following
 *      disclaimer in the documentation and/or other materials provided
 *      with the distribution.
 *    * Neither the name OmniTI Computer Consulting, Inc. nor the names
 *      of its contributors may be used to endorse or promote products
 *      derived from this software without specific prior written
 *      permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _NOIT_B32_H
#define _NOIT_B32_H

/*!  \file noit_b32.h

     Interface to the noit base32 encoding and decoding routines.
 */

#include "noit_config.h"
#include "noit_defines.h"

/*! \fn int noit_b32_decode(const char *src, size_t src_len, unsigned char *dest, size_t dest_len)
    \brief Decode a base32 encoded input buffer into the provided output buffer.
    \param src The buffer containing the encoded content.
    \param src_len The size (in bytes) of the encoded data.
    \param dest The destination buffer to which the function will produce.
    \param dest_len The size of the destination buffer.
    \return The size of the decoded output.  Returns zero is dest_len is too small.
    
    noit_b32_decode decodes input until an the entire input is consumed or until an invalid base32 character is encountered.
 */
API_EXPORT(int) noit_b32_decode(const char *, size_t, unsigned char *, size_t);
/*! \fn int noit_b32_encode(const unsigned char *src, size_t src_len, char *dest, size_t dest_len)
    \brief Encode raw data as base32 encoded output into the provided buffer.
    \param src The buffer containing the raw data.
    \param src_len The size (in bytes) of the raw data.
    \param dest The destination buffer to which the function will produce.
    \param dest_len The size of the destination buffer.
    \return The size of the encoded output.  Returns zero is out_sz is too small.
 */
API_EXPORT(int) noit_b32_encode(const unsigned char *, size_t, char *, size_t);

#endif
