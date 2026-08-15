#pragma once
// IWYU pragma private; include "GlobalNamespace/CastableOutcome.hpp"
#include "GlobalNamespace/zzzz__PropGroup_impl.hpp"
#include "GlobalNamespace/zzzz__CastableOutcome_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPose_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CastableOutcome.MatchesConditions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CastableOutcome::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::CastableOutcome::MatchesConditions)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18045a7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CastableOutcome>(),
                        {"MatchesConditions", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::CastableOutcome::MatchesConditions(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CastableOutcome>(),
                        {"MatchesConditions", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, playerCharacter);
}
// Ctor Parameters [CppParam { name: "playerPose", ty: "::UnityW<::GlobalNamespace::PlayerPose>", modifiers: "", def_value: Some("{}") }, CppParam { name: "propHome", ty: "::UnityW<::GlobalNamespace::PropHome>", modifiers: "", def_value: Some("{}") }, CppParam { name: "peckSwitch", ty: "::UnityW<::GlobalNamespace::PeckSwitch>", modifiers: "", def_value: Some("{}") }, CppParam { name: "needsKey", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "keyType", ty: "::GlobalNamespace::PropGroup", modifiers: "", def_value: Some("{}") }, CppParam { name: "needsPocketProp", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "pocketPropGroup", ty: "::GlobalNamespace::PropGroup", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CastableOutcome::CastableOutcome(::UnityW<::GlobalNamespace::PlayerPose>  playerPose, ::UnityW<::GlobalNamespace::PropHome>  propHome, ::UnityW<::GlobalNamespace::PeckSwitch>  peckSwitch, bool  needsKey, ::GlobalNamespace::PropGroup  keyType, bool  needsPocketProp, ::GlobalNamespace::PropGroup  pocketPropGroup) noexcept  {
this->playerPose = playerPose;
this->propHome = propHome;
this->peckSwitch = peckSwitch;
this->needsKey = needsKey;
this->keyType = keyType;
this->needsPocketProp = needsPocketProp;
this->pocketPropGroup = pocketPropGroup;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CastableOutcome::CastableOutcome()   {
}
