#pragma once
// IWYU pragma private; include "GlobalNamespace/CreditsScroller.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CreditsScroller_def.hpp"
#include "GlobalNamespace/zzzz__PeckEffectTimerNetworked_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CreditsScroller.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsScroller::*)()>(&::GlobalNamespace::CreditsScroller::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803fbdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreditsScroller*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsScroller.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsScroller::*)()>(&::GlobalNamespace::CreditsScroller::Update)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803fbe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreditsScroller*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsScroller.SetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RectTransform*, float_t)>(&::GlobalNamespace::CreditsScroller::SetTransform)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803fbe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreditsScroller*>(),
                        {"SetTransform", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsScroller._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsScroller::*)()>(&::GlobalNamespace::CreditsScroller::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreditsScroller*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CreditsScroller::__cordl_internal_get_warmupDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warmupDuration;
}
constexpr float_t const& GlobalNamespace::CreditsScroller::__cordl_internal_get_warmupDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warmupDuration;
}
constexpr void GlobalNamespace::CreditsScroller::__cordl_internal_set_warmupDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___warmupDuration = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::CreditsScroller::__cordl_internal_get_rectTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::CreditsScroller::__cordl_internal_get_rectTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rectTransform;
}
constexpr void GlobalNamespace::CreditsScroller::__cordl_internal_set_rectTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rectTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckEffectTimerNetworked>& GlobalNamespace::CreditsScroller::__cordl_internal_get_timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
constexpr ::UnityW<::GlobalNamespace::PeckEffectTimerNetworked> const& GlobalNamespace::CreditsScroller::__cordl_internal_get_timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
constexpr void GlobalNamespace::CreditsScroller::__cordl_internal_set_timer(::UnityW<::GlobalNamespace::PeckEffectTimerNetworked>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timer = value;
}
constexpr bool& GlobalNamespace::CreditsScroller::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::CreditsScroller::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::CreditsScroller::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::CreditsScroller::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreditsScroller*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CreditsScroller::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreditsScroller*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CreditsScroller::SetTransform(::UnityEngine::RectTransform*  rectTransform, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreditsScroller*>(),
                        {"SetTransform", {}, {::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rectTransform, normalizedTime);
}
inline void GlobalNamespace::CreditsScroller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreditsScroller*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CreditsScroller* GlobalNamespace::CreditsScroller::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreditsScroller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreditsScroller::CreditsScroller()   {
}
