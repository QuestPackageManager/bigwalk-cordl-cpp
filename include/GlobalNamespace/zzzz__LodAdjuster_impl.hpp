#pragma once
// IWYU pragma private; include "GlobalNamespace/LodAdjuster.hpp"
#include "UnityEngine/zzzz__LOD_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__LodAdjuster_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LodAdjuster.SetThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LodAdjuster::*)(float_t)>(&::GlobalNamespace::LodAdjuster::SetThreshold)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1803ed580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LodAdjuster*>(),
                        {"SetThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LodAdjuster.RestoreOriginalLods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LodAdjuster::*)()>(&::GlobalNamespace::LodAdjuster::RestoreOriginalLods)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803ed4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LodAdjuster*>(),
                        {"RestoreOriginalLods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LodAdjuster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LodAdjuster::*)()>(&::GlobalNamespace::LodAdjuster::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LodAdjuster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::LOD>& GlobalNamespace::LodAdjuster::__cordl_internal_get__originalLods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalLods;
}
constexpr ::ArrayW<::UnityEngine::LOD> const& GlobalNamespace::LodAdjuster::__cordl_internal_get__originalLods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalLods;
}
constexpr void GlobalNamespace::LodAdjuster::__cordl_internal_set__originalLods(::ArrayW<::UnityEngine::LOD>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originalLods = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LodAdjuster::__cordl_internal_get__originalLocalReferencePoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalLocalReferencePoint;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LodAdjuster::__cordl_internal_get__originalLocalReferencePoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalLocalReferencePoint;
}
constexpr void GlobalNamespace::LodAdjuster::__cordl_internal_set__originalLocalReferencePoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originalLocalReferencePoint = value;
}
inline void GlobalNamespace::LodAdjuster::SetThreshold(float_t  scalar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LodAdjuster*>(),
                        {"SetThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scalar);
}
inline void GlobalNamespace::LodAdjuster::RestoreOriginalLods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LodAdjuster*>(),
                        {"RestoreOriginalLods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LodAdjuster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LodAdjuster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LodAdjuster* GlobalNamespace::LodAdjuster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LodAdjuster*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LodAdjuster::LodAdjuster()   {
}
