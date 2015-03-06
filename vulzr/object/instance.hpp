////////////////////////////////////////////////////////////////////////////////
/// Vulkanizer
///
/// Copyright (c) 2015 Thibault Schueller
/// This file is distributed under the MIT License
///
/// @file instance.hpp
/// @author Thibault Schueller <ryp.sqrt@gmail.com>
////////////////////////////////////////////////////////////////////////////////

#ifndef VULZR_INSTANCE_INCLUDED
#define VULZR_INSTANCE_INCLUDED

namespace vulzr
{
    class Instance
    {
    public:
        Instance() = default;
        ~Instance() = default;

        Instance(const Instance& other) = delete;
        Instance& operator=(const Instance& other) = delete;

    public:
        void    enumerateGpus(); // TODO use spec prototype
    };
}

#include "instance.inl"

#endif // VULZR_INSTANCE_INCLUDED
