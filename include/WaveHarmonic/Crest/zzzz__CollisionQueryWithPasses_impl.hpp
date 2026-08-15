#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CollisionQueryWithPasses.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionQueryWithPasses_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayers_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionQuery_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ICollisionProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryable_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryWithPasses.get_ResultGuidCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::CollisionQueryWithPasses::*)()>(&::WaveHarmonic::Crest::CollisionQueryWithPasses::get_ResultGuidCount)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182572aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"get_ResultGuidCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryWithPasses.get_RequestCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::CollisionQueryWithPasses::*)()>(&::WaveHarmonic::Crest::CollisionQueryWithPasses::get_RequestCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182572a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"get_RequestCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryWithPasses.get_QueryCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::CollisionQueryWithPasses::*)()>(&::WaveHarmonic::Crest::CollisionQueryWithPasses::get_QueryCount)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182572960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"get_QueryCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryWithPasses._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CollisionQueryWithPasses::*)()>(&::WaveHarmonic::Crest::CollisionQueryWithPasses::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x182572740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryWithPasses._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CollisionQueryWithPasses::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::CollisionQueryWithPasses::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182572880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryWithPasses.GetProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::CollisionQuery* (::WaveHarmonic::Crest::CollisionQueryWithPasses::*)(::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::CollisionQueryWithPasses::GetProvider)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182572410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"GetProvider", {}, {::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryWithPasses.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::CollisionQueryWithPasses::*)(int32_t, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<float_t>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::WaveHarmonic::Crest::CollisionLayer, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::CollisionQueryWithPasses::Query)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182572490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryWithPasses.Query
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::CollisionQueryWithPasses::*)(int32_t, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::WaveHarmonic::Crest::CollisionLayer, ::System::Nullable_1<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::CollisionQueryWithPasses::Query)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182572570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryWithPasses.UpdateQueries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CollisionQueryWithPasses::*)(::WaveHarmonic::Crest::WaterRenderer*, ::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::CollisionQueryWithPasses::UpdateQueries)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1825726f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"UpdateQueries", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryWithPasses.UpdateQueries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CollisionQueryWithPasses::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::CollisionQueryWithPasses::UpdateQueries)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825726d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"UpdateQueries", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryWithPasses.SendReadBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CollisionQueryWithPasses::*)(::WaveHarmonic::Crest::WaterRenderer*, ::WaveHarmonic::Crest::CollisionLayers)>(&::WaveHarmonic::Crest::CollisionQueryWithPasses::SendReadBack)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182572670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"SendReadBack", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayers>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryWithPasses.SendReadBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CollisionQueryWithPasses::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::CollisionQueryWithPasses::SendReadBack)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182572650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"SendReadBack", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryWithPasses.CleanUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CollisionQueryWithPasses::*)()>(&::WaveHarmonic::Crest::CollisionQueryWithPasses::CleanUp)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1825723c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"CleanUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::CollisionQueryWithPasses.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::CollisionQueryWithPasses::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::CollisionQueryWithPasses::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"Initialize", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::CollisionQuery*& WaveHarmonic::Crest::CollisionQueryWithPasses::__cordl_internal_get__AnimatedWaves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnimatedWaves;
}
constexpr ::WaveHarmonic::Crest::CollisionQuery* const& WaveHarmonic::Crest::CollisionQueryWithPasses::__cordl_internal_get__AnimatedWaves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnimatedWaves;
}
constexpr void WaveHarmonic::Crest::CollisionQueryWithPasses::__cordl_internal_set__AnimatedWaves(::WaveHarmonic::Crest::CollisionQuery*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AnimatedWaves = value;
}
constexpr ::WaveHarmonic::Crest::CollisionQuery*& WaveHarmonic::Crest::CollisionQueryWithPasses::__cordl_internal_get__DynamicWaves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DynamicWaves;
}
constexpr ::WaveHarmonic::Crest::CollisionQuery* const& WaveHarmonic::Crest::CollisionQueryWithPasses::__cordl_internal_get__DynamicWaves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DynamicWaves;
}
constexpr void WaveHarmonic::Crest::CollisionQueryWithPasses::__cordl_internal_set__DynamicWaves(::WaveHarmonic::Crest::CollisionQuery*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DynamicWaves = value;
}
constexpr ::WaveHarmonic::Crest::CollisionQuery*& WaveHarmonic::Crest::CollisionQueryWithPasses::__cordl_internal_get__Displacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Displacement;
}
constexpr ::WaveHarmonic::Crest::CollisionQuery* const& WaveHarmonic::Crest::CollisionQueryWithPasses::__cordl_internal_get__Displacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Displacement;
}
constexpr void WaveHarmonic::Crest::CollisionQueryWithPasses::__cordl_internal_set__Displacement(::WaveHarmonic::Crest::CollisionQuery*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Displacement = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& WaveHarmonic::Crest::CollisionQueryWithPasses::__cordl_internal_get__Water()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& WaveHarmonic::Crest::CollisionQueryWithPasses::__cordl_internal_get__Water() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr void WaveHarmonic::Crest::CollisionQueryWithPasses::__cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Water = value;
}
inline int32_t WaveHarmonic::Crest::CollisionQueryWithPasses::get_ResultGuidCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"get_ResultGuidCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::CollisionQueryWithPasses::get_RequestCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"get_RequestCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::CollisionQueryWithPasses::get_QueryCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"get_QueryCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CollisionQueryWithPasses::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CollisionQueryWithPasses::_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline ::WaveHarmonic::Crest::CollisionQuery* WaveHarmonic::Crest::CollisionQueryWithPasses::GetProvider(::WaveHarmonic::Crest::CollisionLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"GetProvider", {}, {::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::CollisionQuery*>(this, ___internal_method, layer);
}
inline int32_t WaveHarmonic::Crest::CollisionQueryWithPasses::Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<float_t>  heights, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector3>  velocities, ::WaveHarmonic::Crest::CollisionLayer  layer, ::System::Nullable_1<::UnityEngine::Vector3>  center)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hash, minimumLength, points, heights, normals, velocities, layer, center);
}
inline int32_t WaveHarmonic::Crest::CollisionQueryWithPasses::Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  displacements, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector3>  velocities, ::WaveHarmonic::Crest::CollisionLayer  layer, ::System::Nullable_1<::UnityEngine::Vector3>  center)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"Query", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hash, minimumLength, points, displacements, normals, velocities, layer, center);
}
inline void WaveHarmonic::Crest::CollisionQueryWithPasses::UpdateQueries(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::CollisionLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"UpdateQueries", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, layer);
}
inline void WaveHarmonic::Crest::CollisionQueryWithPasses::UpdateQueries(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"UpdateQueries", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::CollisionQueryWithPasses::SendReadBack(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::CollisionLayers  layers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"SendReadBack", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayers>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, layers);
}
inline void WaveHarmonic::Crest::CollisionQueryWithPasses::SendReadBack(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"SendReadBack", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::CollisionQueryWithPasses::CleanUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"CleanUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::CollisionQueryWithPasses::Initialize(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(),
                        {"Initialize", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline ::WaveHarmonic::Crest::CollisionQueryWithPasses* WaveHarmonic::Crest::CollisionQueryWithPasses::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::CollisionQueryWithPasses*>());
}
inline ::WaveHarmonic::Crest::CollisionQueryWithPasses* WaveHarmonic::Crest::CollisionQueryWithPasses::New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::CollisionQueryWithPasses*>(water));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::ICollisionProvider"
constexpr  WaveHarmonic::Crest::CollisionQueryWithPasses::operator ::WaveHarmonic::Crest::ICollisionProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::ICollisionProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::ICollisionProvider"
constexpr ::WaveHarmonic::Crest::ICollisionProvider* WaveHarmonic::Crest::CollisionQueryWithPasses::i___WaveHarmonic__Crest__ICollisionProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::ICollisionProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr  WaveHarmonic::Crest::CollisionQueryWithPasses::operator ::WaveHarmonic::Crest::IQueryProvider*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* WaveHarmonic::Crest::CollisionQueryWithPasses::i___WaveHarmonic__Crest__IQueryProvider() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryable"
constexpr  WaveHarmonic::Crest::CollisionQueryWithPasses::operator ::WaveHarmonic::Crest::IQueryable*() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryable*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IQueryable"
constexpr ::WaveHarmonic::Crest::IQueryable* WaveHarmonic::Crest::CollisionQueryWithPasses::i___WaveHarmonic__Crest__IQueryable() noexcept {
return static_cast<::WaveHarmonic::Crest::IQueryable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::CollisionQueryWithPasses::CollisionQueryWithPasses()   {
}
