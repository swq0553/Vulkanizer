////////////////////////////////////////////////////////////////////////////////
/// Vulkanizer
///
/// Copyright (c) 2015 Thibault Schueller
/// This file is distributed under the MIT License
///
/// @file functions.hpp
/// @author Thibault Schueller <ryp.sqrt@gmail.com>
////////////////////////////////////////////////////////////////////////////////

#ifndef VULZR_FUNCTIONS_INCLUDED
#define VULZR_FUNCTIONS_INCLUDED

namespace vulzr
{
    namespace vk
    {
//         void    CmdBindDescriptorSet(cmdBuffer, VK_PIPELINE_BIND_POINT_GRAPHICS, textureDescriptorSet[0], 0);
//         void    QueueSubmit(graphicsQueue, 1, &cmdBuffer, 0, 0, fence);
//         void    MapMemory(staticUniformBufferMemory, 0, (void **)&data);
//         void    UnmapMemory(staticUniformBufferMemory);
        void    CmdBindDescriptorSet();
        void    BeginCommandBuffer();
        void    CmdDbgMarkerBegin();
        void    CmdPipelineBarrier();
        void    CmdPipelineBarrier();
        void    EndCommandBuffer();
        void    CreateFence();
        void    BeginCommandBuffer();
        void    CmdDbgMarkerBegin();
        void    CreateBuffer();
        void    GetObjectInfo();
        void    QueueSubmit();
        void    AllocMemory();
        void    BindObjectMemory();
        void    MapMemory();
        void    UnmapMemory();
        void    CmdPipelineBarrier();
        void    CmdCopyBufferToImage();
        void    CmdPipelineBarrier();
        void    CmdDbgMarkerEnd();
    }
}

#include "functions.inl"

#endif // VULZR_FUNCTIONS_INCLUDED
