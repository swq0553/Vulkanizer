////////////////////////////////////////////////////////////////////////////////
/// Vulkanizer
///
/// Copyright (c) 2015 Thibault Schueller
/// This file is distributed under the MIT License
///
/// @file queue.hpp
/// @author Thibault Schueller <ryp.sqrt@gmail.com>
////////////////////////////////////////////////////////////////////////////////

#ifndef VULZR_QUEUE_INCLUDED
#define VULZR_QUEUE_INCLUDED

namespace vulzr
{
    class Queue
    {
    public:
        Queue() = default;
        ~Queue() = default;

        Queue(const Queue& other) = delete;
        Queue& operator=(const Queue& other) = delete;
    };
}

#include "queue.inl"

#endif // VULZR_QUEUE_INCLUDED
