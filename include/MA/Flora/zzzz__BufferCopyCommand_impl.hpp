#pragma once
// IWYU pragma private; include "MA/Flora/BufferCopyCommand.hpp"
#include "MA/Flora/zzzz__BufferCopyCommand_def.hpp"
// Ctor Parameters [CppParam { name: "srcAddress", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dstAddress", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stride", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::BufferCopyCommand::BufferCopyCommand(uint32_t  srcAddress, uint32_t  dstAddress, uint32_t  stride, uint32_t  count) noexcept  {
this->srcAddress = srcAddress;
this->dstAddress = dstAddress;
this->stride = stride;
this->count = count;
}
// Ctor Parameters []
constexpr ::MA::Flora::BufferCopyCommand::BufferCopyCommand()   {
}
