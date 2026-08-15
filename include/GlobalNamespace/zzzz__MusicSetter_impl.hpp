#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicSetter.hpp"
#include "GlobalNamespace/zzzz__SavableSystem_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MusicSetter_def.hpp"
#include "GlobalNamespace/zzzz__MusicGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MusicSetter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MusicSetter::*)()>(&::GlobalNamespace::MusicSetter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSetter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MusicGroup>& GlobalNamespace::MusicSetter::__cordl_internal_get_musicGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicGroup;
}
constexpr ::UnityW<::GlobalNamespace::MusicGroup> const& GlobalNamespace::MusicSetter::__cordl_internal_get_musicGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicGroup;
}
constexpr void GlobalNamespace::MusicSetter::__cordl_internal_set_musicGroup(::UnityW<::GlobalNamespace::MusicGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___musicGroup = value;
}
constexpr ::GlobalNamespace::SavableSystem& GlobalNamespace::MusicSetter::__cordl_internal_get_saveName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveName;
}
constexpr ::GlobalNamespace::SavableSystem const& GlobalNamespace::MusicSetter::__cordl_internal_get_saveName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveName;
}
constexpr void GlobalNamespace::MusicSetter::__cordl_internal_set_saveName(::GlobalNamespace::SavableSystem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveName = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MusicSetter::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MusicSetter::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void GlobalNamespace::MusicSetter::__cordl_internal_set_color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
inline void GlobalNamespace::MusicSetter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MusicSetter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MusicSetter* GlobalNamespace::MusicSetter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MusicSetter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MusicSetter::MusicSetter()   {
}
