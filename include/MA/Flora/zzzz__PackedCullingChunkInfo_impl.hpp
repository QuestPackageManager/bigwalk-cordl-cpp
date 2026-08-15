#pragma once
// IWYU pragma private; include "MA/Flora/PackedCullingChunkInfo.hpp"
#include "MA/Flora/zzzz__PackedCullingChunkInfo_def.hpp"
#include "MA/Flora/zzzz__ArchetypeIndex_def.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_def.hpp"
//  Writing Method size for method: ::MA::Flora::PackedCullingChunkInfo.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::PackedCullingChunkInfo (*)(::MA::Flora::ArchetypeIndex, ::MA::Flora::BatchDomainIndex)>(&::MA::Flora::PackedCullingChunkInfo::Create)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814c0890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PackedCullingChunkInfo>(),
                        {"Create", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::PackedCullingChunkInfo MA::Flora::PackedCullingChunkInfo::Create(::MA::Flora::ArchetypeIndex  archetypeIndex, ::MA::Flora::BatchDomainIndex  batchDomainIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PackedCullingChunkInfo>(),
                        {"Create", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>(), ::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::PackedCullingChunkInfo>(nullptr, ___internal_method, archetypeIndex, batchDomainIndex);
}
// Ctor Parameters [CppParam { name: "data", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::PackedCullingChunkInfo::PackedCullingChunkInfo(uint32_t  data) noexcept  {
this->data = data;
}
// Ctor Parameters []
constexpr ::MA::Flora::PackedCullingChunkInfo::PackedCullingChunkInfo()   {
}
