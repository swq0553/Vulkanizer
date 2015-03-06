////////////////////////////////////////////////////////////////////////////////
/// Vulkanizer
///
/// Copyright (c) 2015 Thibault Schueller
/// This file is distributed under the MIT License
///
/// @file image.hpp
/// @author Thibault Schueller <ryp.sqrt@gmail.com>
////////////////////////////////////////////////////////////////////////////////

#ifndef VULZR_IMAGE_INCLUDED
#define VULZR_IMAGE_INCLUDED

namespace vulzr
{
    class Image
    {
    public:
        Image() = default;
        ~Image() = default;

        Image(const Image& other) = delete;
        Image& operator=(const Image& other) = delete;
    };
}

#include "image.inl"

#endif // VULZR_IMAGE_INCLUDED
