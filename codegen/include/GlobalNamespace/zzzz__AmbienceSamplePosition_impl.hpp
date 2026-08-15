#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbienceSamplePosition.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AmbienceSamplePosition_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AmbienceSamplePosition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AmbienceSamplePosition::*)(::UnityEngine::Vector3, int32_t)>(&::GlobalNamespace::AmbienceSamplePosition::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803223e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSamplePosition>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AmbienceSamplePosition::_ctor(::UnityEngine::Vector3  position, int32_t  dataIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AmbienceSamplePosition>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, dataIndex);
}
// Ctor Parameters [CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "DataIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AmbienceSamplePosition::AmbienceSamplePosition(::UnityEngine::Vector3  Position, int32_t  DataIndex) noexcept  {
this->Position = Position;
this->DataIndex = DataIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AmbienceSamplePosition::AmbienceSamplePosition()   {
}
