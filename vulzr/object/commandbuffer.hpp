////////////////////////////////////////////////////////////////////////////////
/// Vulkanizer
///
/// Copyright (c) 2015 Thibault Schueller
/// This file is distributed under the MIT License
///
/// @file commandbuffer.hpp
/// @author Thibault Schueller <ryp.sqrt@gmail.com>
////////////////////////////////////////////////////////////////////////////////

#ifndef VULZR_COMMANDBUFFER_INCLUDED
#define VULZR_COMMANDBUFFER_INCLUDED

namespace vulzr
{
    class CommandBuffer
    {
    public:
        CommandBuffer() = default;
        ~CommandBuffer() = default;

        CommandBuffer(const CommandBuffer& other) = delete;
        CommandBuffer& operator=(const CommandBuffer& other) = delete;

    public:
        void    begin();
        void    end();
        void    cmdBindDescriptorSet(); // TODO use spec prototype
        void    cmdPipelineBarrier(); // TODO use spec prototype
        void    cmdCopyBufferToImage(); // TODO use spec prototype
        void    cmdDbgMarkerBegin(); // TODO use spec prototype
        void    cmdDbgMarkerEnd(); // TODO use spec prototype
    };
}

#include "commandbuffer.inl"

#endif // VULZR_COMMANDBUFFER_INCLUDED
