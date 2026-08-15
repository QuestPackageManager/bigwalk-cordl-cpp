#pragma once
// IWYU pragma private; include "GlobalNamespace/EndingFadeBlind.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EndingFadeBlind_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EndingFadeBlind.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EndingFadeBlind::*)()>(&::GlobalNamespace::EndingFadeBlind::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180420db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingFadeBlind*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndingFadeBlind.SetFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::EndingFadeBlind::SetFade)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x180420de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingFadeBlind*>(),
                        {"SetFade", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EndingFadeBlind._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EndingFadeBlind::*)()>(&::GlobalNamespace::EndingFadeBlind::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingFadeBlind*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Canvas>& GlobalNamespace::EndingFadeBlind::__cordl_internal_get_canvas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& GlobalNamespace::EndingFadeBlind::__cordl_internal_get_canvas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canvas;
}
constexpr void GlobalNamespace::EndingFadeBlind::__cordl_internal_set_canvas(::UnityW<::UnityEngine::Canvas>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canvas = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::EndingFadeBlind::__cordl_internal_get_fadeImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::EndingFadeBlind::__cordl_internal_get_fadeImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeImage;
}
constexpr void GlobalNamespace::EndingFadeBlind::__cordl_internal_set_fadeImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeImage = value;
}
inline void GlobalNamespace::EndingFadeBlind::setStaticF_Instance(::UnityW<::GlobalNamespace::EndingFadeBlind>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::EndingFadeBlind>, "Instance", ::GlobalNamespace::EndingFadeBlind*>(std::forward<::UnityW<::GlobalNamespace::EndingFadeBlind>>(value));
}
inline ::UnityW<::GlobalNamespace::EndingFadeBlind> GlobalNamespace::EndingFadeBlind::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::EndingFadeBlind>, "Instance", ::GlobalNamespace::EndingFadeBlind*>();
}
inline void GlobalNamespace::EndingFadeBlind::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingFadeBlind*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EndingFadeBlind::SetFade(float_t  fade01)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingFadeBlind*>(),
                        {"SetFade", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fade01);
}
inline void GlobalNamespace::EndingFadeBlind::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EndingFadeBlind*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EndingFadeBlind* GlobalNamespace::EndingFadeBlind::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EndingFadeBlind*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EndingFadeBlind::EndingFadeBlind()   {
}
