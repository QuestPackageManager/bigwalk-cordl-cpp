#pragma once
// IWYU pragma private; include "MA/Flora/PackedChunkUploadHeader.hpp"
#include "MA/Flora/zzzz__PackedChunkUploadHeader_def.hpp"
#include "MA/Flora/zzzz__ChunkIndex_def.hpp"
//  Writing Method size for method: ::MA::Flora::PackedChunkUploadHeader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::PackedChunkUploadHeader::*)(::MA::Flora::ChunkIndex)>(&::MA::Flora::PackedChunkUploadHeader::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814546b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PackedChunkUploadHeader>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::PackedChunkUploadHeader::_ctor(::MA::Flora::ChunkIndex  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PackedChunkUploadHeader>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::ChunkIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chunk);
}
// Ctor Parameters [CppParam { name: "batchDomainIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packedStartCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::PackedChunkUploadHeader::PackedChunkUploadHeader(uint32_t  batchDomainIndex, uint32_t  packedStartCount) noexcept  {
this->batchDomainIndex = batchDomainIndex;
this->packedStartCount = packedStartCount;
}
// Ctor Parameters []
constexpr ::MA::Flora::PackedChunkUploadHeader::PackedChunkUploadHeader()   {
}
