#pragma once
// IWYU pragma private; include "GlobalNamespace/AlternativeInteriorAmb.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AlternativeInteriorAmb_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPCXProvider_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AlternativeInteriorAmb.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlternativeInteriorAmb::*)()>(&::GlobalNamespace::AlternativeInteriorAmb::OnEnable)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1803165d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AlternativeInteriorAmb*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlternativeInteriorAmb.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlternativeInteriorAmb::*)()>(&::GlobalNamespace::AlternativeInteriorAmb::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180316570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AlternativeInteriorAmb*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlternativeInteriorAmb.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlternativeInteriorAmb::*)()>(&::GlobalNamespace::AlternativeInteriorAmb::Update)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180316820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AlternativeInteriorAmb*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlternativeInteriorAmb.GetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AlternativeInteriorAmb::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::AlternativeInteriorAmb::GetX)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803164f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AlternativeInteriorAmb*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlternativeInteriorAmb._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlternativeInteriorAmb::*)()>(&::GlobalNamespace::AlternativeInteriorAmb::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AlternativeInteriorAmb*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlternativeInteriorAmb._OnEnable_g___clearRef_4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::AlternativeInteriorAmb*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::AlternativeInteriorAmb::_OnEnable_g___clearRef_4_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180316790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AlternativeInteriorAmb*>(),
                        {"<OnEnable>g___clearRef|4_0", {}, {::i2c::type_of<::GlobalNamespace::AlternativeInteriorAmb*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::AlternativeInteriorAmb::__cordl_internal_get_AmbienceSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AmbienceSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::AlternativeInteriorAmb::__cordl_internal_get_AmbienceSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AmbienceSound;
}
constexpr void GlobalNamespace::AlternativeInteriorAmb::__cordl_internal_set_AmbienceSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AmbienceSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider>& GlobalNamespace::AlternativeInteriorAmb::__cordl_internal_get_GenericAmbRTPCXProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GenericAmbRTPCXProvider;
}
constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider> const& GlobalNamespace::AlternativeInteriorAmb::__cordl_internal_get_GenericAmbRTPCXProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GenericAmbRTPCXProvider;
}
constexpr void GlobalNamespace::AlternativeInteriorAmb::__cordl_internal_set_GenericAmbRTPCXProvider(::UnityW<::GlobalNamespace::AudioRTPCXProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GenericAmbRTPCXProvider = value;
}
constexpr bool& GlobalNamespace::AlternativeInteriorAmb::__cordl_internal_get_SuperWet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SuperWet;
}
constexpr bool const& GlobalNamespace::AlternativeInteriorAmb::__cordl_internal_get_SuperWet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SuperWet;
}
constexpr void GlobalNamespace::AlternativeInteriorAmb::__cordl_internal_set_SuperWet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SuperWet = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::AlternativeInteriorAmb::__cordl_internal_get__asc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asc;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::AlternativeInteriorAmb::__cordl_internal_get__asc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asc;
}
constexpr void GlobalNamespace::AlternativeInteriorAmb::__cordl_internal_set__asc(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asc = value;
}
inline void GlobalNamespace::AlternativeInteriorAmb::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AlternativeInteriorAmb*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AlternativeInteriorAmb::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AlternativeInteriorAmb*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AlternativeInteriorAmb::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AlternativeInteriorAmb*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::AlternativeInteriorAmb::GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AlternativeInteriorAmb*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline void GlobalNamespace::AlternativeInteriorAmb::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AlternativeInteriorAmb*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AlternativeInteriorAmb::_OnEnable_g___clearRef_4_0(::GlobalNamespace::AlternativeInteriorAmb*  a, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AlternativeInteriorAmb*>(),
                        {"<OnEnable>g___clearRef|4_0", {}, {::i2c::type_of<::GlobalNamespace::AlternativeInteriorAmb*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, c);
}
inline ::GlobalNamespace::AlternativeInteriorAmb* GlobalNamespace::AlternativeInteriorAmb::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AlternativeInteriorAmb*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AlternativeInteriorAmb::AlternativeInteriorAmb()   {
}
