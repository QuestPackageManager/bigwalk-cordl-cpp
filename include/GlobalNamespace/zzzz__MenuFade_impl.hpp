#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuFade.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MenuFade_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MenuFade.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuFade::*)()>(&::GlobalNamespace::MenuFade::OnEnable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180424e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuFade*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuFade.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuFade::*)()>(&::GlobalNamespace::MenuFade::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180424e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuFade*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuFade.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuFade::*)()>(&::GlobalNamespace::MenuFade::Update)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180424fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuFade*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuFade.SetFadeAlpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuFade::*)(float_t)>(&::GlobalNamespace::MenuFade::SetFadeAlpha)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180424ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuFade*>(),
                        {"SetFadeAlpha", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuFade._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuFade::*)()>(&::GlobalNamespace::MenuFade::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuFade*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MenuFade::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::MenuFade::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::MenuFade::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::MenuFade::__cordl_internal_get_alphaCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alphaCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::MenuFade::__cordl_internal_get_alphaCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alphaCurve;
}
constexpr void GlobalNamespace::MenuFade::__cordl_internal_set_alphaCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alphaCurve = value;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& GlobalNamespace::MenuFade::__cordl_internal_get_fadeGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& GlobalNamespace::MenuFade::__cordl_internal_get_fadeGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeGroup;
}
constexpr void GlobalNamespace::MenuFade::__cordl_internal_set_fadeGroup(::UnityW<::UnityEngine::CanvasGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeGroup = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::MenuFade::__cordl_internal_get_fadeImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::MenuFade::__cordl_internal_get_fadeImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeImage;
}
constexpr void GlobalNamespace::MenuFade::__cordl_internal_set_fadeImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeImage = value;
}
constexpr float_t& GlobalNamespace::MenuFade::__cordl_internal_get__entryTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryTime;
}
constexpr float_t const& GlobalNamespace::MenuFade::__cordl_internal_get__entryTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryTime;
}
constexpr void GlobalNamespace::MenuFade::__cordl_internal_set__entryTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entryTime = value;
}
inline void GlobalNamespace::MenuFade::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuFade*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuFade::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuFade*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuFade::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuFade*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuFade::SetFadeAlpha(float_t  alpha)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuFade*>(),
                        {"SetFadeAlpha", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alpha);
}
inline void GlobalNamespace::MenuFade::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MenuFade*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuFade* GlobalNamespace::MenuFade::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuFade*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuFade::MenuFade()   {
}
