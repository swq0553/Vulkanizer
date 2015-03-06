////////////////////////////////////////////////////////////////////////////////
/// Vulkanizer
///
/// Copyright (c) 2015 Thibault Schueller
/// This file is distributed under the MIT License
///
/// @file renderpass.hpp
/// @author Thibault Schueller <ryp.sqrt@gmail.com>
////////////////////////////////////////////////////////////////////////////////

#ifndef VULZR_RENDERPASS_INCLUDED
#define VULZR_RENDERPASS_INCLUDED

namespace vulzr
{
    class RenderPass
    {
    public:
        RenderPass() = default;
        ~RenderPass() = default;

        RenderPass(const RenderPass& other) = delete;
        RenderPass& operator=(const RenderPass& other) = delete;
    };
}

#include "renderpass.inl"

#endif // VULZR_RENDERPASS_INCLUDED
