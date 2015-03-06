////////////////////////////////////////////////////////////////////////////////
/// Vulkanizer
///
/// Copyright (c) 2015 Thibault Schueller
/// This file is distributed under the MIT License
///
/// @file device.hpp
/// @author Thibault Schueller <ryp.sqrt@gmail.com>
////////////////////////////////////////////////////////////////////////////////

#ifndef VULZR_DEVICE_INCLUDED
#define VULZR_DEVICE_INCLUDED

namespace vulzr
{
    class Device
    {
    public:
        Device() = default;
        ~Device() = default;

        Device(const Device& other) = delete;
        Device& operator=(const Device& other) = delete;
    };
}

#include "device.inl"

#endif // VULZR_DEVICE_INCLUDED
