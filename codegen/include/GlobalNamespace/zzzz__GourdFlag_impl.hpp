#pragma once
// IWYU pragma private; include "GlobalNamespace/GourdFlag.hpp"
#include "GlobalNamespace/zzzz__GourdMapReference_impl.hpp"
#include "GlobalNamespace/zzzz__SaveablePropName_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GourdFlag_def.hpp"
#include "GlobalNamespace/zzzz__GourdFlag_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GourdFlag_GourdState::GourdFlag_GourdState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GourdFlag_GourdState::GourdFlag_GourdState()   {
}
constexpr ::GlobalNamespace::GourdFlag_GourdState  GlobalNamespace::GourdFlag_GourdState::Locked{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GourdFlag_GourdState  GlobalNamespace::GourdFlag_GourdState::Loose{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GourdFlag_GourdState  GlobalNamespace::GourdFlag_GourdState::Stashed{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GourdFlag_GourdState  GlobalNamespace::GourdFlag_GourdState::Hidden{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::GourdFlag.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GourdFlag::*)(::GlobalNamespace::GourdFlag_GourdState)>(&::GlobalNamespace::GourdFlag::SetState)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803fe360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdFlag*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GourdFlag_GourdState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GourdFlag._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GourdFlag::*)()>(&::GlobalNamespace::GourdFlag::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdFlag*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GourdFlag_GourdState& GlobalNamespace::GourdFlag::__cordl_internal_get_gourdState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gourdState;
}
constexpr ::GlobalNamespace::GourdFlag_GourdState const& GlobalNamespace::GourdFlag::__cordl_internal_get_gourdState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gourdState;
}
constexpr void GlobalNamespace::GourdFlag::__cordl_internal_set_gourdState(::GlobalNamespace::GourdFlag_GourdState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gourdState = value;
}
constexpr ::GlobalNamespace::SaveablePropName& GlobalNamespace::GourdFlag::__cordl_internal_get_saveablePropName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveablePropName;
}
constexpr ::GlobalNamespace::SaveablePropName const& GlobalNamespace::GourdFlag::__cordl_internal_get_saveablePropName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveablePropName;
}
constexpr void GlobalNamespace::GourdFlag::__cordl_internal_set_saveablePropName(::GlobalNamespace::SaveablePropName  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveablePropName = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GourdFlag::__cordl_internal_get_lockedMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedMarker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GourdFlag::__cordl_internal_get_lockedMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedMarker;
}
constexpr void GlobalNamespace::GourdFlag::__cordl_internal_set_lockedMarker(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockedMarker = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GourdFlag::__cordl_internal_get_stashedMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stashedMarker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GourdFlag::__cordl_internal_get_stashedMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stashedMarker;
}
constexpr void GlobalNamespace::GourdFlag::__cordl_internal_set_stashedMarker(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stashedMarker = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GourdFlag::__cordl_internal_get_looseMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___looseMarker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GourdFlag::__cordl_internal_get_looseMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___looseMarker;
}
constexpr void GlobalNamespace::GourdFlag::__cordl_internal_set_looseMarker(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___looseMarker = value;
}
constexpr ::GlobalNamespace::GourdMapReference& GlobalNamespace::GourdFlag::__cordl_internal_get_gourdMapReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gourdMapReference;
}
constexpr ::GlobalNamespace::GourdMapReference const& GlobalNamespace::GourdFlag::__cordl_internal_get_gourdMapReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gourdMapReference;
}
constexpr void GlobalNamespace::GourdFlag::__cordl_internal_set_gourdMapReference(::GlobalNamespace::GourdMapReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gourdMapReference = value;
}
inline void GlobalNamespace::GourdFlag::SetState(::GlobalNamespace::GourdFlag_GourdState  gourdState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdFlag*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GourdFlag_GourdState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gourdState);
}
inline void GlobalNamespace::GourdFlag::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdFlag*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GourdFlag* GlobalNamespace::GourdFlag::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GourdFlag*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GourdFlag::GourdFlag()   {
}
