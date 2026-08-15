#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderSounds.hpp"
#include "GlobalNamespace/zzzz__ButtonSounds_impl.hpp"
#include "GlobalNamespace/zzzz__SliderSounds_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "UnityEngine/UI/zzzz__Slider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderSounds.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderSounds::*)()>(&::GlobalNamespace::SliderSounds::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803deaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SliderSounds*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderSounds.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderSounds::*)()>(&::GlobalNamespace::SliderSounds::OnEnable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803deb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SliderSounds*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderSounds.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderSounds::*)()>(&::GlobalNamespace::SliderSounds::OnDisable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803deaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SliderSounds*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderSounds.OnValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderSounds::*)(float_t)>(&::GlobalNamespace::SliderSounds::OnValueChanged)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803dec00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SliderSounds*>(),
                        {"OnValueChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderSounds._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderSounds::*)()>(&::GlobalNamespace::SliderSounds::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SliderSounds*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Slider>& GlobalNamespace::SliderSounds::__cordl_internal_get_Slider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Slider;
}
constexpr ::UnityW<::UnityEngine::UI::Slider> const& GlobalNamespace::SliderSounds::__cordl_internal_get_Slider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Slider;
}
constexpr void GlobalNamespace::SliderSounds::__cordl_internal_set_Slider(::UnityW<::UnityEngine::UI::Slider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Slider = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::SliderSounds::__cordl_internal_get_Change()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Change;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::SliderSounds::__cordl_internal_get_Change() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Change;
}
constexpr void GlobalNamespace::SliderSounds::__cordl_internal_set_Change(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Change = value;
}
constexpr bool& GlobalNamespace::SliderSounds::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& GlobalNamespace::SliderSounds::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void GlobalNamespace::SliderSounds::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
inline void GlobalNamespace::SliderSounds::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SliderSounds*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderSounds::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SliderSounds*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderSounds::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SliderSounds*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderSounds::OnValueChanged(float_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SliderSounds*>(),
                        {"OnValueChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void GlobalNamespace::SliderSounds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SliderSounds*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderSounds* GlobalNamespace::SliderSounds::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SliderSounds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderSounds::SliderSounds()   {
}
