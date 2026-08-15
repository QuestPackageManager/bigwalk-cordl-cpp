#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CutsceneTimeProvider.hpp"
#include "WaveHarmonic/Crest/zzzz__TimeProvider_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__CutsceneTimeProvider_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DefaultTimeProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::CutsceneTimeProvider.get_AssignToWaterComponentOnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::CutsceneTimeProvider::*)()>(&::WaveHarmonic::Crest::CutsceneTimeProvider::get_AssignToWaterComponentOnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e09d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {"get_AssignToWaterComponentOnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CutsceneTimeProvider.set_AssignToWaterComponentOnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CutsceneTimeProvider::*)(bool)>(&::WaveHarmonic::Crest::CutsceneTimeProvider::set_AssignToWaterComponentOnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {"set_AssignToWaterComponentOnEnable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CutsceneTimeProvider.get_PlayableDirector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Playables::PlayableDirector> (::WaveHarmonic::Crest::CutsceneTimeProvider::*)()>(&::WaveHarmonic::Crest::CutsceneTimeProvider::get_PlayableDirector)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {"get_PlayableDirector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CutsceneTimeProvider.set_PlayableDirector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CutsceneTimeProvider::*)(::UnityEngine::Playables::PlayableDirector*)>(&::WaveHarmonic::Crest::CutsceneTimeProvider::set_PlayableDirector)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180308de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {"set_PlayableDirector", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableDirector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CutsceneTimeProvider.get_RestorePreviousTimeProviderOnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::CutsceneTimeProvider::*)()>(&::WaveHarmonic::Crest::CutsceneTimeProvider::get_RestorePreviousTimeProviderOnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e09e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {"get_RestorePreviousTimeProviderOnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CutsceneTimeProvider.set_RestorePreviousTimeProviderOnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CutsceneTimeProvider::*)(bool)>(&::WaveHarmonic::Crest::CutsceneTimeProvider::set_RestorePreviousTimeProviderOnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {"set_RestorePreviousTimeProviderOnDisable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CutsceneTimeProvider.get_TimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::CutsceneTimeProvider::*)()>(&::WaveHarmonic::Crest::CutsceneTimeProvider::get_TimeOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046faf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {"get_TimeOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CutsceneTimeProvider.set_TimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CutsceneTimeProvider::*)(float_t)>(&::WaveHarmonic::Crest::CutsceneTimeProvider::set_TimeOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {"set_TimeOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CutsceneTimeProvider.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CutsceneTimeProvider::*)()>(&::WaveHarmonic::Crest::CutsceneTimeProvider::OnDisable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18258ba90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CutsceneTimeProvider.get_OnEnableMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* (::WaveHarmonic::Crest::CutsceneTimeProvider::*)()>(&::WaveHarmonic::Crest::CutsceneTimeProvider::get_OnEnableMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18258bba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CutsceneTimeProvider.Attach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CutsceneTimeProvider::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::CutsceneTimeProvider::Attach)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18258ba20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {"Attach", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CutsceneTimeProvider.get_Time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::CutsceneTimeProvider::*)()>(&::WaveHarmonic::Crest::CutsceneTimeProvider::get_Time)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18258bbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CutsceneTimeProvider.get_Delta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::CutsceneTimeProvider::*)()>(&::WaveHarmonic::Crest::CutsceneTimeProvider::get_Delta)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182127910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CutsceneTimeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CutsceneTimeProvider::*)()>(&::WaveHarmonic::Crest::CutsceneTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18258bb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& WaveHarmonic::Crest::CutsceneTimeProvider::__cordl_internal_get__PlayableDirector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayableDirector;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& WaveHarmonic::Crest::CutsceneTimeProvider::__cordl_internal_get__PlayableDirector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayableDirector;
}
constexpr void WaveHarmonic::Crest::CutsceneTimeProvider::__cordl_internal_set__PlayableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayableDirector = value;
}
constexpr float_t& WaveHarmonic::Crest::CutsceneTimeProvider::__cordl_internal_get__TimeOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeOffset;
}
constexpr float_t const& WaveHarmonic::Crest::CutsceneTimeProvider::__cordl_internal_get__TimeOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeOffset;
}
constexpr void WaveHarmonic::Crest::CutsceneTimeProvider::__cordl_internal_set__TimeOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeOffset = value;
}
constexpr bool& WaveHarmonic::Crest::CutsceneTimeProvider::__cordl_internal_get__AssignToWaterComponentOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AssignToWaterComponentOnEnable;
}
constexpr bool const& WaveHarmonic::Crest::CutsceneTimeProvider::__cordl_internal_get__AssignToWaterComponentOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AssignToWaterComponentOnEnable;
}
constexpr void WaveHarmonic::Crest::CutsceneTimeProvider::__cordl_internal_set__AssignToWaterComponentOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AssignToWaterComponentOnEnable = value;
}
constexpr bool& WaveHarmonic::Crest::CutsceneTimeProvider::__cordl_internal_get__RestorePreviousTimeProviderOnDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RestorePreviousTimeProviderOnDisable;
}
constexpr bool const& WaveHarmonic::Crest::CutsceneTimeProvider::__cordl_internal_get__RestorePreviousTimeProviderOnDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RestorePreviousTimeProviderOnDisable;
}
constexpr void WaveHarmonic::Crest::CutsceneTimeProvider::__cordl_internal_set__RestorePreviousTimeProviderOnDisable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RestorePreviousTimeProviderOnDisable = value;
}
constexpr ::WaveHarmonic::Crest::DefaultTimeProvider*& WaveHarmonic::Crest::CutsceneTimeProvider::__cordl_internal_get__FallbackTimeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FallbackTimeProvider;
}
constexpr ::WaveHarmonic::Crest::DefaultTimeProvider* const& WaveHarmonic::Crest::CutsceneTimeProvider::__cordl_internal_get__FallbackTimeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FallbackTimeProvider;
}
constexpr void WaveHarmonic::Crest::CutsceneTimeProvider::__cordl_internal_set__FallbackTimeProvider(::WaveHarmonic::Crest::DefaultTimeProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FallbackTimeProvider = value;
}
constexpr bool& WaveHarmonic::Crest::CutsceneTimeProvider::__cordl_internal_get__Attached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Attached;
}
constexpr bool const& WaveHarmonic::Crest::CutsceneTimeProvider::__cordl_internal_get__Attached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Attached;
}
constexpr void WaveHarmonic::Crest::CutsceneTimeProvider::__cordl_internal_set__Attached(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Attached = value;
}
inline bool WaveHarmonic::Crest::CutsceneTimeProvider::get_AssignToWaterComponentOnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {"get_AssignToWaterComponentOnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CutsceneTimeProvider::set_AssignToWaterComponentOnEnable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {"set_AssignToWaterComponentOnEnable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Playables::PlayableDirector> WaveHarmonic::Crest::CutsceneTimeProvider::get_PlayableDirector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {"get_PlayableDirector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Playables::PlayableDirector>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CutsceneTimeProvider::set_PlayableDirector(::UnityEngine::Playables::PlayableDirector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {"set_PlayableDirector", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableDirector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::CutsceneTimeProvider::get_RestorePreviousTimeProviderOnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {"get_RestorePreviousTimeProviderOnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CutsceneTimeProvider::set_RestorePreviousTimeProviderOnDisable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {"set_RestorePreviousTimeProviderOnDisable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::CutsceneTimeProvider::get_TimeOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {"get_TimeOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CutsceneTimeProvider::set_TimeOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {"set_TimeOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::CutsceneTimeProvider::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* WaveHarmonic::Crest::CutsceneTimeProvider::get_OnEnableMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CutsceneTimeProvider::Attach(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {"Attach", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline float_t WaveHarmonic::Crest::CutsceneTimeProvider::get_Time()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::CutsceneTimeProvider::get_Delta()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CutsceneTimeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CutsceneTimeProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::CutsceneTimeProvider* WaveHarmonic::Crest::CutsceneTimeProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::CutsceneTimeProvider*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::CutsceneTimeProvider::CutsceneTimeProvider()   {
}
