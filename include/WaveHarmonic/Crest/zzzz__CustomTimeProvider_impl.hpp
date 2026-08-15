#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CustomTimeProvider.hpp"
#include "WaveHarmonic/Crest/zzzz__TimeProvider_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__CustomTimeProvider_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DefaultTimeProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::CustomTimeProvider.get_DeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::CustomTimeProvider::*)()>(&::WaveHarmonic::Crest::CustomTimeProvider::get_DeltaTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"get_DeltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CustomTimeProvider.set_DeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CustomTimeProvider::*)(float_t)>(&::WaveHarmonic::Crest::CustomTimeProvider::set_DeltaTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"set_DeltaTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CustomTimeProvider.get_OverrideDeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::CustomTimeProvider::*)()>(&::WaveHarmonic::Crest::CustomTimeProvider::get_OverrideDeltaTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803151e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"get_OverrideDeltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CustomTimeProvider.set_OverrideDeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CustomTimeProvider::*)(bool)>(&::WaveHarmonic::Crest::CustomTimeProvider::set_OverrideDeltaTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803de5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"set_OverrideDeltaTime", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CustomTimeProvider.get_OverrideTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::CustomTimeProvider::*)()>(&::WaveHarmonic::Crest::CustomTimeProvider::get_OverrideTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18164bcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"get_OverrideTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CustomTimeProvider.set_OverrideTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CustomTimeProvider::*)(bool)>(&::WaveHarmonic::Crest::CustomTimeProvider::set_OverrideTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18258ba10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"set_OverrideTime", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CustomTimeProvider.get_Paused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::CustomTimeProvider::*)()>(&::WaveHarmonic::Crest::CustomTimeProvider::get_Paused)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"get_Paused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CustomTimeProvider.set_Paused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CustomTimeProvider::*)(bool)>(&::WaveHarmonic::Crest::CustomTimeProvider::set_Paused)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"set_Paused", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CustomTimeProvider.get_TimeOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::CustomTimeProvider::*)()>(&::WaveHarmonic::Crest::CustomTimeProvider::get_TimeOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180315260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"get_TimeOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CustomTimeProvider.set_TimeOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CustomTimeProvider::*)(float_t)>(&::WaveHarmonic::Crest::CustomTimeProvider::set_TimeOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803dccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"set_TimeOverride", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CustomTimeProvider.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CustomTimeProvider::*)()>(&::WaveHarmonic::Crest::CustomTimeProvider::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18258b860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CustomTimeProvider.get_OnUpdateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* (::WaveHarmonic::Crest::CustomTimeProvider::*)()>(&::WaveHarmonic::Crest::CustomTimeProvider::get_OnUpdateMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18258b980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CustomTimeProvider.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CustomTimeProvider::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::CustomTimeProvider::OnUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18258b870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CustomTimeProvider.get_Time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::CustomTimeProvider::*)()>(&::WaveHarmonic::Crest::CustomTimeProvider::get_Time)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18258b9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CustomTimeProvider.get_Delta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::CustomTimeProvider::*)()>(&::WaveHarmonic::Crest::CustomTimeProvider::get_Delta)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18258b920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CustomTimeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CustomTimeProvider::*)()>(&::WaveHarmonic::Crest::CustomTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18258b8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_get__Paused()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Paused;
}
constexpr bool const& WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_get__Paused() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Paused;
}
constexpr void WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_set__Paused(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Paused = value;
}
constexpr bool& WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_get__OverrideTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideTime;
}
constexpr bool const& WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_get__OverrideTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideTime;
}
constexpr void WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_set__OverrideTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideTime = value;
}
constexpr float_t& WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_get__Time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Time;
}
constexpr float_t const& WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_get__Time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Time;
}
constexpr void WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_set__Time(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Time = value;
}
constexpr bool& WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_get__OverrideDeltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideDeltaTime;
}
constexpr bool const& WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_get__OverrideDeltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideDeltaTime;
}
constexpr void WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_set__OverrideDeltaTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideDeltaTime = value;
}
constexpr float_t& WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_get__DeltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeltaTime;
}
constexpr float_t const& WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_get__DeltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeltaTime;
}
constexpr void WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_set__DeltaTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DeltaTime = value;
}
constexpr ::WaveHarmonic::Crest::DefaultTimeProvider*& WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_get__DefaultTimeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultTimeProvider;
}
constexpr ::WaveHarmonic::Crest::DefaultTimeProvider* const& WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_get__DefaultTimeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultTimeProvider;
}
constexpr void WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_set__DefaultTimeProvider(::WaveHarmonic::Crest::DefaultTimeProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DefaultTimeProvider = value;
}
constexpr float_t& WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_get__TimeInternal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeInternal;
}
constexpr float_t const& WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_get__TimeInternal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeInternal;
}
constexpr void WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_set__TimeInternal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeInternal = value;
}
constexpr bool& WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_get__FirstUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FirstUpdate;
}
constexpr bool const& WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_get__FirstUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FirstUpdate;
}
constexpr void WaveHarmonic::Crest::CustomTimeProvider::__cordl_internal_set__FirstUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FirstUpdate = value;
}
inline float_t WaveHarmonic::Crest::CustomTimeProvider::get_DeltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"get_DeltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CustomTimeProvider::set_DeltaTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"set_DeltaTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::CustomTimeProvider::get_OverrideDeltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"get_OverrideDeltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CustomTimeProvider::set_OverrideDeltaTime(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"set_OverrideDeltaTime", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::CustomTimeProvider::get_OverrideTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"get_OverrideTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CustomTimeProvider::set_OverrideTime(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"set_OverrideTime", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::CustomTimeProvider::get_Paused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"get_Paused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CustomTimeProvider::set_Paused(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"set_Paused", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::CustomTimeProvider::get_TimeOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"get_TimeOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CustomTimeProvider::set_TimeOverride(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"set_TimeOverride", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::CustomTimeProvider::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* WaveHarmonic::Crest::CustomTimeProvider::get_OnUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CustomTimeProvider::OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline float_t WaveHarmonic::Crest::CustomTimeProvider::get_Time()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::CustomTimeProvider::get_Delta()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CustomTimeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CustomTimeProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::CustomTimeProvider* WaveHarmonic::Crest::CustomTimeProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::CustomTimeProvider*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::CustomTimeProvider::CustomTimeProvider()   {
}
