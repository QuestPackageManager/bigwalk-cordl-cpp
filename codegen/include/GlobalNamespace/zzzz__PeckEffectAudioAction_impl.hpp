#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectAudioAction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectAudioAction_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectAudioAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType::PeckEffectAudioAction_PeckEffectAudioActionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType::PeckEffectAudioAction_PeckEffectAudioActionType()   {
}
constexpr ::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType  GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType::Play{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType  GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType::Stop{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAudioAction_ActionItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAudioAction_ActionItem::*)()>(&::GlobalNamespace::PeckEffectAudioAction_ActionItem::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudioAction_ActionItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType& GlobalNamespace::PeckEffectAudioAction_ActionItem::__cordl_internal_get_ActionType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActionType;
}
constexpr ::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType const& GlobalNamespace::PeckEffectAudioAction_ActionItem::__cordl_internal_get_ActionType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActionType;
}
constexpr void GlobalNamespace::PeckEffectAudioAction_ActionItem::__cordl_internal_set_ActionType(::GlobalNamespace::PeckEffectAudioAction_PeckEffectAudioActionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActionType = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PeckEffectAudioAction_ActionItem::__cordl_internal_get_Asset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Asset;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PeckEffectAudioAction_ActionItem::__cordl_internal_get_Asset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Asset;
}
constexpr void GlobalNamespace::PeckEffectAudioAction_ActionItem::__cordl_internal_set_Asset(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Asset = value;
}
constexpr bool& GlobalNamespace::PeckEffectAudioAction_ActionItem::__cordl_internal_get_ForceAudioEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceAudioEvent;
}
constexpr bool const& GlobalNamespace::PeckEffectAudioAction_ActionItem::__cordl_internal_get_ForceAudioEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceAudioEvent;
}
constexpr void GlobalNamespace::PeckEffectAudioAction_ActionItem::__cordl_internal_set_ForceAudioEvent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ForceAudioEvent = value;
}
constexpr float_t& GlobalNamespace::PeckEffectAudioAction_ActionItem::__cordl_internal_get_Delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delay;
}
constexpr float_t const& GlobalNamespace::PeckEffectAudioAction_ActionItem::__cordl_internal_get_Delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delay;
}
constexpr void GlobalNamespace::PeckEffectAudioAction_ActionItem::__cordl_internal_set_Delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Delay = value;
}
inline void GlobalNamespace::PeckEffectAudioAction_ActionItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudioAction_ActionItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectAudioAction_ActionItem* GlobalNamespace::PeckEffectAudioAction_ActionItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectAudioAction_ActionItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectAudioAction_ActionItem::PeckEffectAudioAction_ActionItem()   {
}
//  Writing Method size for method: ::GlobalNamespace::PeckEffectAudioAction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectAudioAction::*)()>(&::GlobalNamespace::PeckEffectAudioAction::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudioAction*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::PeckEffectAudioAction_ActionItem*>& GlobalNamespace::PeckEffectAudioAction::__cordl_internal_get_Actions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Actions;
}
constexpr ::ArrayW<::GlobalNamespace::PeckEffectAudioAction_ActionItem*> const& GlobalNamespace::PeckEffectAudioAction::__cordl_internal_get_Actions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Actions;
}
constexpr void GlobalNamespace::PeckEffectAudioAction::__cordl_internal_set_Actions(::ArrayW<::GlobalNamespace::PeckEffectAudioAction_ActionItem*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Actions = value;
}
inline void GlobalNamespace::PeckEffectAudioAction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectAudioAction*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckEffectAudioAction* GlobalNamespace::PeckEffectAudioAction::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectAudioAction*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectAudioAction::PeckEffectAudioAction()   {
}
