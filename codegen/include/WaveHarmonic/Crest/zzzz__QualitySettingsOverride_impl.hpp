#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/QualitySettingsOverride.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TerrainQualityOverrides_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__QualitySettingsOverride_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::QualitySettingsOverride.get_LodBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::QualitySettingsOverride::*)()>(&::WaveHarmonic::Crest::QualitySettingsOverride::get_LodBias)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"get_LodBias", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QualitySettingsOverride.set_LodBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QualitySettingsOverride::*)(float_t)>(&::WaveHarmonic::Crest::QualitySettingsOverride::set_LodBias)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"set_LodBias", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QualitySettingsOverride.get_MaximumLodLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::QualitySettingsOverride::*)()>(&::WaveHarmonic::Crest::QualitySettingsOverride::get_MaximumLodLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"get_MaximumLodLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QualitySettingsOverride.set_MaximumLodLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QualitySettingsOverride::*)(int32_t)>(&::WaveHarmonic::Crest::QualitySettingsOverride::set_MaximumLodLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"set_MaximumLodLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QualitySettingsOverride.get_OverrideLodBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::QualitySettingsOverride::*)()>(&::WaveHarmonic::Crest::QualitySettingsOverride::get_OverrideLodBias)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"get_OverrideLodBias", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QualitySettingsOverride.set_OverrideLodBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QualitySettingsOverride::*)(bool)>(&::WaveHarmonic::Crest::QualitySettingsOverride::set_OverrideLodBias)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"set_OverrideLodBias", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QualitySettingsOverride.get_OverrideMaximumLodLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::QualitySettingsOverride::*)()>(&::WaveHarmonic::Crest::QualitySettingsOverride::get_OverrideMaximumLodLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"get_OverrideMaximumLodLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QualitySettingsOverride.set_OverrideMaximumLodLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QualitySettingsOverride::*)(bool)>(&::WaveHarmonic::Crest::QualitySettingsOverride::set_OverrideMaximumLodLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"set_OverrideMaximumLodLevel", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QualitySettingsOverride.get_OverrideTerrainPixelError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::QualitySettingsOverride::*)()>(&::WaveHarmonic::Crest::QualitySettingsOverride::get_OverrideTerrainPixelError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"get_OverrideTerrainPixelError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QualitySettingsOverride.set_OverrideTerrainPixelError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QualitySettingsOverride::*)(bool)>(&::WaveHarmonic::Crest::QualitySettingsOverride::set_OverrideTerrainPixelError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"set_OverrideTerrainPixelError", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QualitySettingsOverride.get_TerrainPixelError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::QualitySettingsOverride::*)()>(&::WaveHarmonic::Crest::QualitySettingsOverride::get_TerrainPixelError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"get_TerrainPixelError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QualitySettingsOverride.set_TerrainPixelError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QualitySettingsOverride::*)(float_t)>(&::WaveHarmonic::Crest::QualitySettingsOverride::set_TerrainPixelError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f81c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"set_TerrainPixelError", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QualitySettingsOverride.Override
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QualitySettingsOverride::*)()>(&::WaveHarmonic::Crest::QualitySettingsOverride::Override)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18258e510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"Override", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QualitySettingsOverride.Restore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QualitySettingsOverride::*)()>(&::WaveHarmonic::Crest::QualitySettingsOverride::Restore)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18258e590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"Restore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QualitySettingsOverride.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::QualitySettingsOverride::*)()>(&::WaveHarmonic::Crest::QualitySettingsOverride::GetHashCode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18258e480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QualitySettingsOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QualitySettingsOverride::*)()>(&::WaveHarmonic::Crest::QualitySettingsOverride::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__OverrideLodBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideLodBias;
}
constexpr bool const& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__OverrideLodBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideLodBias;
}
constexpr void WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_set__OverrideLodBias(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideLodBias = value;
}
constexpr float_t& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__LodBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LodBias;
}
constexpr float_t const& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__LodBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LodBias;
}
constexpr void WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_set__LodBias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LodBias = value;
}
constexpr bool& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__OverrideMaximumLodLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideMaximumLodLevel;
}
constexpr bool const& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__OverrideMaximumLodLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideMaximumLodLevel;
}
constexpr void WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_set__OverrideMaximumLodLevel(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideMaximumLodLevel = value;
}
constexpr int32_t& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__MaximumLodLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumLodLevel;
}
constexpr int32_t const& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__MaximumLodLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaximumLodLevel;
}
constexpr void WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_set__MaximumLodLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaximumLodLevel = value;
}
constexpr bool& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__OverrideTerrainPixelError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideTerrainPixelError;
}
constexpr bool const& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__OverrideTerrainPixelError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideTerrainPixelError;
}
constexpr void WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_set__OverrideTerrainPixelError(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideTerrainPixelError = value;
}
constexpr float_t& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__TerrainPixelError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TerrainPixelError;
}
constexpr float_t const& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__TerrainPixelError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TerrainPixelError;
}
constexpr void WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_set__TerrainPixelError(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TerrainPixelError = value;
}
constexpr float_t& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__OldLodBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OldLodBias;
}
constexpr float_t const& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__OldLodBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OldLodBias;
}
constexpr void WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_set__OldLodBias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OldLodBias = value;
}
constexpr int32_t& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__OldMaximumLodLevelOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OldMaximumLodLevelOverride;
}
constexpr int32_t const& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__OldMaximumLodLevelOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OldMaximumLodLevelOverride;
}
constexpr void WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_set__OldMaximumLodLevelOverride(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OldMaximumLodLevelOverride = value;
}
constexpr float_t& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__OldTerrainPixelError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OldTerrainPixelError;
}
constexpr float_t const& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__OldTerrainPixelError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OldTerrainPixelError;
}
constexpr void WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_set__OldTerrainPixelError(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OldTerrainPixelError = value;
}
constexpr ::UnityEngine::TerrainQualityOverrides& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__OldTerrainOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OldTerrainOverrides;
}
constexpr ::UnityEngine::TerrainQualityOverrides const& WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_get__OldTerrainOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OldTerrainOverrides;
}
constexpr void WaveHarmonic::Crest::QualitySettingsOverride::__cordl_internal_set__OldTerrainOverrides(::UnityEngine::TerrainQualityOverrides  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OldTerrainOverrides = value;
}
inline float_t WaveHarmonic::Crest::QualitySettingsOverride::get_LodBias()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"get_LodBias", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QualitySettingsOverride::set_LodBias(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"set_LodBias", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t WaveHarmonic::Crest::QualitySettingsOverride::get_MaximumLodLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"get_MaximumLodLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QualitySettingsOverride::set_MaximumLodLevel(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"set_MaximumLodLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::QualitySettingsOverride::get_OverrideLodBias()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"get_OverrideLodBias", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QualitySettingsOverride::set_OverrideLodBias(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"set_OverrideLodBias", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::QualitySettingsOverride::get_OverrideMaximumLodLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"get_OverrideMaximumLodLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QualitySettingsOverride::set_OverrideMaximumLodLevel(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"set_OverrideMaximumLodLevel", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::QualitySettingsOverride::get_OverrideTerrainPixelError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"get_OverrideTerrainPixelError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QualitySettingsOverride::set_OverrideTerrainPixelError(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"set_OverrideTerrainPixelError", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::QualitySettingsOverride::get_TerrainPixelError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"get_TerrainPixelError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QualitySettingsOverride::set_TerrainPixelError(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"set_TerrainPixelError", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::QualitySettingsOverride::Override()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"Override", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QualitySettingsOverride::Restore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {"Restore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::QualitySettingsOverride::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QualitySettingsOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QualitySettingsOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::QualitySettingsOverride* WaveHarmonic::Crest::QualitySettingsOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::QualitySettingsOverride*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::QualitySettingsOverride::QualitySettingsOverride()   {
}
