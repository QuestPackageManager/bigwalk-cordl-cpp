#pragma once
// IWYU pragma private; include "MA/Flora/CullingChunkUpdatePacket.hpp"
#include "MA/Flora/zzzz__CullingChunkUpdatePacket_def.hpp"
#include "MA/Flora/zzzz__CellIndex_def.hpp"
#include "MA/Flora/zzzz__CullingChunkIndex_def.hpp"
#include "MA/Flora/zzzz__PackedCullingChunkBatch_def.hpp"
#include "MA/Flora/zzzz__PackedCullingChunkInfo_def.hpp"
//  Writing Method size for method: ::MA::Flora::CullingChunkUpdatePacket.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CullingChunkUpdatePacket (*)(::MA::Flora::CullingChunkIndex, ::MA::Flora::CellIndex, ::MA::Flora::PackedCullingChunkBatch, ::MA::Flora::PackedCullingChunkInfo)>(&::MA::Flora::CullingChunkUpdatePacket::Create)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814b1610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingChunkUpdatePacket>(),
                        {"Create", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::MA::Flora::CellIndex>(), ::i2c::type_of<::MA::Flora::PackedCullingChunkBatch>(), ::i2c::type_of<::MA::Flora::PackedCullingChunkInfo>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::CullingChunkUpdatePacket MA::Flora::CullingChunkUpdatePacket::Create(::MA::Flora::CullingChunkIndex  chunk, ::MA::Flora::CellIndex  cell, ::MA::Flora::PackedCullingChunkBatch  batch, ::MA::Flora::PackedCullingChunkInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::CullingChunkUpdatePacket>(),
                        {"Create", {}, {::i2c::type_of<::MA::Flora::CullingChunkIndex>(), ::i2c::type_of<::MA::Flora::CellIndex>(), ::i2c::type_of<::MA::Flora::PackedCullingChunkBatch>(), ::i2c::type_of<::MA::Flora::PackedCullingChunkInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CullingChunkUpdatePacket>(nullptr, ___internal_method, chunk, cell, batch, info);
}
// Ctor Parameters [CppParam { name: "chunkIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cellIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packedInfo", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packedBatch", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingChunkUpdatePacket::CullingChunkUpdatePacket(uint32_t  chunkIndex, uint32_t  cellIndex, uint32_t  packedInfo, uint32_t  packedBatch) noexcept  {
this->chunkIndex = chunkIndex;
this->cellIndex = cellIndex;
this->packedInfo = packedInfo;
this->packedBatch = packedBatch;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingChunkUpdatePacket::CullingChunkUpdatePacket()   {
}
