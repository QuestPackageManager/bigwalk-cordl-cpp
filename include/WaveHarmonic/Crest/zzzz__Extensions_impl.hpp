#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Extensions_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayers_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ICollisionProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IQueryProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Extensions.UpdateQueries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WaveHarmonic::Crest::ICollisionProvider*, ::WaveHarmonic::Crest::WaterRenderer*, ::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::Extensions::UpdateQueries)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1825753a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Extensions*>(),
                        {"UpdateQueries", {}, {::i2c::type_of<::WaveHarmonic::Crest::ICollisionProvider*>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Extensions.UpdateQueries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WaveHarmonic::Crest::ICollisionProvider*, ::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::Extensions::UpdateQueries)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825754f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Extensions*>(),
                        {"UpdateQueries", {}, {::i2c::type_of<::WaveHarmonic::Crest::ICollisionProvider*>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Extensions.SendReadBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WaveHarmonic::Crest::ICollisionProvider*, ::WaveHarmonic::Crest::WaterRenderer*, ::WaveHarmonic::Crest::CollisionLayers)>(&::WaveHarmonic::Crest::Extensions::SendReadBack)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x182575260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Extensions*>(),
                        {"SendReadBack", {}, {::i2c::type_of<::WaveHarmonic::Crest::ICollisionProvider*>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayers>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Extensions.CleanUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WaveHarmonic::Crest::ICollisionProvider*)>(&::WaveHarmonic::Crest::Extensions::CleanUp)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182575220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Extensions*>(),
                        {"CleanUp", {}, {::i2c::type_of<::WaveHarmonic::Crest::ICollisionProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Extensions.UpdateQueries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WaveHarmonic::Crest::IQueryProvider*, ::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::Extensions::UpdateQueries)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825754f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Extensions*>(),
                        {"UpdateQueries", {}, {::i2c::type_of<::WaveHarmonic::Crest::IQueryProvider*>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Extensions.CleanUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WaveHarmonic::Crest::IQueryProvider*)>(&::WaveHarmonic::Crest::Extensions::CleanUp)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182575220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Extensions*>(),
                        {"CleanUp", {}, {::i2c::type_of<::WaveHarmonic::Crest::IQueryProvider*>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Extensions::UpdateQueries(::WaveHarmonic::Crest::ICollisionProvider*  self, ::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::CollisionLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Extensions*>(),
                        {"UpdateQueries", {}, {::i2c::type_of<::WaveHarmonic::Crest::ICollisionProvider*>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, water, layer);
}
inline void WaveHarmonic::Crest::Extensions::UpdateQueries(::WaveHarmonic::Crest::ICollisionProvider*  self, ::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Extensions*>(),
                        {"UpdateQueries", {}, {::i2c::type_of<::WaveHarmonic::Crest::ICollisionProvider*>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, water);
}
inline void WaveHarmonic::Crest::Extensions::SendReadBack(::WaveHarmonic::Crest::ICollisionProvider*  self, ::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::CollisionLayers  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Extensions*>(),
                        {"SendReadBack", {}, {::i2c::type_of<::WaveHarmonic::Crest::ICollisionProvider*>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayers>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, water, layer);
}
inline void WaveHarmonic::Crest::Extensions::CleanUp(::WaveHarmonic::Crest::ICollisionProvider*  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Extensions*>(),
                        {"CleanUp", {}, {::i2c::type_of<::WaveHarmonic::Crest::ICollisionProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self);
}
inline void WaveHarmonic::Crest::Extensions::UpdateQueries(::WaveHarmonic::Crest::IQueryProvider*  self, ::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Extensions*>(),
                        {"UpdateQueries", {}, {::i2c::type_of<::WaveHarmonic::Crest::IQueryProvider*>(), ::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, water);
}
inline void WaveHarmonic::Crest::Extensions::CleanUp(::WaveHarmonic::Crest::IQueryProvider*  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Extensions*>(),
                        {"CleanUp", {}, {::i2c::type_of<::WaveHarmonic::Crest::IQueryProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self);
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Extensions::Extensions()   {
}
