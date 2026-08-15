#pragma once
// IWYU pragma private; include "GlobalNamespace/TeachingHud.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TeachingHud_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TeachingHud.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeachingHud::*)(bool)>(&::GlobalNamespace::TeachingHud::SetState)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180440290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeachingHud*>(),
                        {"SetState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeachingHud.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeachingHud::*)()>(&::GlobalNamespace::TeachingHud::Update)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180440460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeachingHud*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TeachingHud._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TeachingHud::*)()>(&::GlobalNamespace::TeachingHud::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeachingHud*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::TeachingHud::__cordl_internal_get_fadeDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeDuration;
}
constexpr float_t const& GlobalNamespace::TeachingHud::__cordl_internal_get_fadeDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeDuration;
}
constexpr void GlobalNamespace::TeachingHud::__cordl_internal_set_fadeDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeDuration = value;
}
constexpr float_t& GlobalNamespace::TeachingHud::__cordl_internal_get__fadeValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeValue;
}
constexpr float_t const& GlobalNamespace::TeachingHud::__cordl_internal_get__fadeValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeValue;
}
constexpr void GlobalNamespace::TeachingHud::__cordl_internal_set__fadeValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeValue = value;
}
constexpr float_t& GlobalNamespace::TeachingHud::__cordl_internal_get__fadeAim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeAim;
}
constexpr float_t const& GlobalNamespace::TeachingHud::__cordl_internal_get__fadeAim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeAim;
}
constexpr void GlobalNamespace::TeachingHud::__cordl_internal_set__fadeAim(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeAim = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::TeachingHud::__cordl_internal_get_localizedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localizedText;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::TeachingHud::__cordl_internal_get_localizedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localizedText;
}
constexpr void GlobalNamespace::TeachingHud::__cordl_internal_set_localizedText(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localizedText = value;
}
inline void GlobalNamespace::TeachingHud::SetState(bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeachingHud*>(),
                        {"SetState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isActive);
}
inline void GlobalNamespace::TeachingHud::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeachingHud*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TeachingHud::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TeachingHud*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TeachingHud* GlobalNamespace::TeachingHud::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TeachingHud*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TeachingHud::TeachingHud()   {
}
