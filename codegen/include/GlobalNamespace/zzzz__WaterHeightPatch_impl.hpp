#pragma once
// IWYU pragma private; include "GlobalNamespace/WaterHeightPatch.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "GlobalNamespace/zzzz__WaterHeightPatch_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WaterHeightPatch.get_Resolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::WaterHeightPatch::*)()>(&::GlobalNamespace::WaterHeightPatch::get_Resolution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterHeightPatch*>(),
                        {"get_Resolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterHeightPatch.set_Resolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterHeightPatch::*)(float_t)>(&::GlobalNamespace::WaterHeightPatch::set_Resolution)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803f6be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterHeightPatch*>(),
                        {"set_Resolution", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterHeightPatch.CacheResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterHeightPatch::*)()>(&::GlobalNamespace::WaterHeightPatch::CacheResolution)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803f6900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterHeightPatch*>(),
                        {"CacheResolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterHeightPatch.Sample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::WaterHeightPatch::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::WaterHeightPatch::Sample)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1803f69a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterHeightPatch*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterHeightPatch.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::WaterHeightPatch::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::WaterHeightPatch::Contains)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803f6950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterHeightPatch*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterHeightPatch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterHeightPatch::*)()>(&::GlobalNamespace::WaterHeightPatch::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f6bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterHeightPatch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::WaterHeightPatch::__cordl_internal_get_isRiver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRiver;
}
constexpr bool const& GlobalNamespace::WaterHeightPatch::__cordl_internal_get_isRiver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRiver;
}
constexpr void GlobalNamespace::WaterHeightPatch::__cordl_internal_set_isRiver(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRiver = value;
}
constexpr ::UnityEngine::Vector2Int& GlobalNamespace::WaterHeightPatch::__cordl_internal_get_worldMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldMin;
}
constexpr ::UnityEngine::Vector2Int const& GlobalNamespace::WaterHeightPatch::__cordl_internal_get_worldMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldMin;
}
constexpr void GlobalNamespace::WaterHeightPatch::__cordl_internal_set_worldMin(::UnityEngine::Vector2Int  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldMin = value;
}
constexpr ::UnityEngine::Vector2Int& GlobalNamespace::WaterHeightPatch::__cordl_internal_get_worldMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldMax;
}
constexpr ::UnityEngine::Vector2Int const& GlobalNamespace::WaterHeightPatch::__cordl_internal_get_worldMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldMax;
}
constexpr void GlobalNamespace::WaterHeightPatch::__cordl_internal_set_worldMax(::UnityEngine::Vector2Int  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldMax = value;
}
constexpr float_t& GlobalNamespace::WaterHeightPatch::__cordl_internal_get__resolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resolution;
}
constexpr float_t const& GlobalNamespace::WaterHeightPatch::__cordl_internal_get__resolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resolution;
}
constexpr void GlobalNamespace::WaterHeightPatch::__cordl_internal_set__resolution(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resolution = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::WaterHeightPatch::__cordl_internal_get_waterHeights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterHeights;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::WaterHeightPatch::__cordl_internal_get_waterHeights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterHeights;
}
constexpr void GlobalNamespace::WaterHeightPatch::__cordl_internal_set_waterHeights(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterHeights = value;
}
constexpr int32_t& GlobalNamespace::WaterHeightPatch::__cordl_internal_get__resX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resX;
}
constexpr int32_t const& GlobalNamespace::WaterHeightPatch::__cordl_internal_get__resX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resX;
}
constexpr void GlobalNamespace::WaterHeightPatch::__cordl_internal_set__resX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resX = value;
}
constexpr int32_t& GlobalNamespace::WaterHeightPatch::__cordl_internal_get__resZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resZ;
}
constexpr int32_t const& GlobalNamespace::WaterHeightPatch::__cordl_internal_get__resZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resZ;
}
constexpr void GlobalNamespace::WaterHeightPatch::__cordl_internal_set__resZ(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resZ = value;
}
inline float_t GlobalNamespace::WaterHeightPatch::get_Resolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterHeightPatch*>(),
                        {"get_Resolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::WaterHeightPatch::set_Resolution(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterHeightPatch*>(),
                        {"set_Resolution", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::WaterHeightPatch::CacheResolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterHeightPatch*>(),
                        {"CacheResolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::WaterHeightPatch::Sample(::UnityEngine::Vector3  worldPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterHeightPatch*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, worldPos);
}
inline bool GlobalNamespace::WaterHeightPatch::Contains(::UnityEngine::Vector3  worldPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterHeightPatch*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, worldPos);
}
inline void GlobalNamespace::WaterHeightPatch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterHeightPatch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WaterHeightPatch* GlobalNamespace::WaterHeightPatch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WaterHeightPatch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WaterHeightPatch::WaterHeightPatch()   {
}
