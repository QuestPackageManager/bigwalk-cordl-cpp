#pragma once
// IWYU pragma private; include "MA/Flora/PackedArchetypeData.hpp"
#include "MA/Flora/zzzz__PackedArchetypeData_def.hpp"
#include "MA/Flora/zzzz__ArchetypeIndex_def.hpp"
//  Writing Method size for method: ::MA::Flora::PackedArchetypeData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::PackedArchetypeData::*)(::MA::Flora::ArchetypeIndex)>(&::MA::Flora::PackedArchetypeData::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181460920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PackedArchetypeData>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::PackedArchetypeData::_ctor(::MA::Flora::ArchetypeIndex  archetype)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PackedArchetypeData>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::ArchetypeIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, archetype);
}
// Ctor Parameters [CppParam { name: "templateIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchDomainIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchInstanceOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxRenderDistance", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::PackedArchetypeData::PackedArchetypeData(uint32_t  templateIndex, uint32_t  batchDomainIndex, uint32_t  batchInstanceOffset, uint32_t  maxRenderDistance) noexcept  {
this->templateIndex = templateIndex;
this->batchDomainIndex = batchDomainIndex;
this->batchInstanceOffset = batchInstanceOffset;
this->maxRenderDistance = maxRenderDistance;
}
// Ctor Parameters []
constexpr ::MA::Flora::PackedArchetypeData::PackedArchetypeData()   {
}
