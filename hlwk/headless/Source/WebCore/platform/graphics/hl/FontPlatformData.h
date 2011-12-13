/*
 * Copyright (C) 2006 Kevin Ollivier  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer. 
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution. 
 * 3.  Neither the name of Apple Computer, Inc. ("Apple") nor the names of
 *     its contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission. 
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE AND ITS CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
 
#ifndef FontPlatformData_H
#define FontPlatformData_H

#include "FontDescription.h"
#include <wtf/RefPtr.h>

namespace WebCore {

class FontPlatformData {
public:
    enum FontState { UNINITIALIZED, DELETED, VALID };

    FontPlatformData(WTF::HashTableDeletedValueType)
    : m_fontState(DELETED)
    {
	m_size = -1;
    }

    ~FontPlatformData();

    FontPlatformData(const FontDescription&, const AtomicString&);
    FontPlatformData(float fSize, bool bold, bool italic)
    : m_fontState(VALID)
    , m_size(fSize), bold(bold), italic(italic)
    {
    }
    
    FontPlatformData() 
    : m_fontState(VALID)
    {
    }
    
    unsigned hash() const {
        switch (m_fontState) {
        case DELETED:
            return -1;
        case UNINITIALIZED:
            return 0;
        case VALID:
            return computeHash();              
        }
    }

    unsigned computeHash() const;

    bool operator==(const FontPlatformData& other) const
    { 
            return other.m_size == m_size && other.bold == bold && other.italic == italic;
    }

    bool isHashTableDeletedValue() const { return m_fontState == DELETED; }

    bool roundsGlyphAdvances() const { return false; }
    bool allowsLigatures() const { return false; }
    
    FontOrientation orientation() const { return Horizontal; } // FIXME: Implement.
    void setOrientation(FontOrientation) { } // FIXME: Implement.

    float size() const { return m_size; }
    FontWidthVariant widthVariant() const { return RegularWidth; }

    
#ifndef NDEBUG
    String description() const;
#endif

private:
    FontState m_fontState;

    float m_size;
    bool bold, italic;
};

}

#endif
