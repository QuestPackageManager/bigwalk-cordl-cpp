#pragma once
// IWYU pragma private; include "MA/Flora/IndirectDrawChunk.hpp"
#include "MA/Flora/zzzz__IndirectDrawChunk_def.hpp"
#include "MA/Flora/zzzz__ArchetypeIndex_def.hpp"
#include "MA/Flora/zzzz__CullingChunkIndex_def.hpp"
//  Writing Method size for method: ::MA::Flora::IndirectDrawChunk._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IndirectDrawChunk::*)(::MA::Flora::ArchetypeIndex, ::MA::Flora::CullingChunkIndex, uint8_t, uint8_t, uint32_t)>(&::MA::Flora::IndirectDrawChunk::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814cdb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectDrawChunk>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::IndirectDrawChunk::_ctor(::MA::Flora::ArchetypeIndex  archetype, ::MA::Flora::CullingChunkIndex  chunk, uint8_t  splitMask, uint8_t  stateFlags, uint32_t  lightmapPartitionIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectDrawChunk>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, archetype, chunk, splitMask, stateFlags, lightmapPartitionIndex);
}
// Ctor Parameters [CppParam { name: "packedChunkAndSplit", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packedArchetypeAndState", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightmapPartitionIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "reserved", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::IndirectDrawChunk::IndirectDrawChunk(uint32_t  packedChunkAndSplit, uint32_t  packedArchetypeAndState, uint32_t  lightmapPartitionIndex, uint32_t  reserved) noexcept  {
this->packedChunkAndSplit = packedChunkAndSplit;
this->packedArchetypeAndState = packedArchetypeAndState;
this->lightmapPartitionIndex = lightmapPartitionIndex;
this->reserved = reserved;
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectDrawChunk::IndirectDrawChunk()   {
}
