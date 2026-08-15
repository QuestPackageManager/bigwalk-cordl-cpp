#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckPlayerReference.hpp"
#include "GlobalNamespace/zzzz__PeckPlayerReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckPlayerReference_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPose_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckPlayerReference_ReferenceType::PeckPlayerReference_ReferenceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckPlayerReference_ReferenceType::PeckPlayerReference_ReferenceType()   {
}
constexpr ::GlobalNamespace::PeckPlayerReference_ReferenceType  GlobalNamespace::PeckPlayerReference_ReferenceType::ContextPlayer{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckPlayerReference_ReferenceType  GlobalNamespace::PeckPlayerReference_ReferenceType::SpecificPlayer{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PeckPlayerReference_ReferenceType  GlobalNamespace::PeckPlayerReference_ReferenceType::Pose{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::PeckPlayerReference.GetPlayerCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerCharacter> (::GlobalNamespace::PeckPlayerReference::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckPlayerReference::GetPlayerCharacter)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180452ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckPlayerReference>(),
                        {"GetPlayerCharacter", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::GlobalNamespace::PlayerCharacter> GlobalNamespace::PeckPlayerReference::GetPlayerCharacter(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckPlayerReference>(),
                        {"GetPlayerCharacter", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerCharacter>>(*this, ___internal_method, peckContext);
}
// Ctor Parameters [CppParam { name: "referenceType", ty: "::GlobalNamespace::PeckPlayerReference_ReferenceType", modifiers: "", def_value: Some("{}") }, CppParam { name: "specificPlayer", ty: "::UnityW<::GlobalNamespace::PlayerCharacter>", modifiers: "", def_value: Some("{}") }, CppParam { name: "pose", ty: "::UnityW<::GlobalNamespace::PlayerPose>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckPlayerReference::PeckPlayerReference(::GlobalNamespace::PeckPlayerReference_ReferenceType  referenceType, ::UnityW<::GlobalNamespace::PlayerCharacter>  specificPlayer, ::UnityW<::GlobalNamespace::PlayerPose>  pose) noexcept  {
this->referenceType = referenceType;
this->specificPlayer = specificPlayer;
this->pose = pose;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckPlayerReference::PeckPlayerReference()   {
}
