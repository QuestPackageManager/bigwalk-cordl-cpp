#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/SampleCollisionHelper.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__SampleHelper_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleCollisionHelper_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleCollisionHelper_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper_QueryType::SampleCollisionHelper_QueryType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper_QueryType::SampleCollisionHelper_QueryType()   {
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper_QueryType  WaveHarmonic::Crest::SampleCollisionHelper_QueryType::Displacement{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper_QueryType  WaveHarmonic::Crest::SampleCollisionHelper_QueryType::Height{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions::SampleCollisionHelper_QueryOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions::SampleCollisionHelper_QueryOptions()   {
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions  WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions::None{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions  WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions::Velocity{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions  WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions::Normal{static_cast<int32_t>(0x2)};
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions  WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions::All{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper.Sample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleCollisionHelper::*)(int32_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::WaveHarmonic::Crest::SampleCollisionHelper_QueryType, ::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions, ::WaveHarmonic::Crest::CollisionLayer, float_t, bool)>(&::WaveHarmonic::Crest::SampleCollisionHelper::Sample)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x18257d340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"Sample", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::SampleCollisionHelper_QueryType>(), ::i2c::type_of<::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper.SampleHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleCollisionHelper::*)(int32_t, ::UnityEngine::Vector3, ::by_ref<float_t>, ::WaveHarmonic::Crest::CollisionLayer, float_t, bool)>(&::WaveHarmonic::Crest::SampleCollisionHelper::SampleHeight)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18257d2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleHeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper.SampleHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleCollisionHelper::*)(int32_t, ::UnityEngine::Vector3, ::by_ref<float_t>, ::by_ref<::UnityEngine::Vector3>, ::WaveHarmonic::Crest::CollisionLayer, float_t, bool)>(&::WaveHarmonic::Crest::SampleCollisionHelper::SampleHeight)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18257cfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleHeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper.SampleHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleCollisionHelper::*)(int32_t, ::UnityEngine::Vector3, ::by_ref<float_t>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::WaveHarmonic::Crest::CollisionLayer, float_t, bool)>(&::WaveHarmonic::Crest::SampleCollisionHelper::SampleHeight)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18257cf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleHeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper.SampleDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleCollisionHelper::*)(int32_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::WaveHarmonic::Crest::CollisionLayer, float_t, bool)>(&::WaveHarmonic::Crest::SampleCollisionHelper::SampleDisplacement)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18257cbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleDisplacement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper.SampleDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleCollisionHelper::*)(int32_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::WaveHarmonic::Crest::CollisionLayer, float_t, bool)>(&::WaveHarmonic::Crest::SampleCollisionHelper::SampleDisplacement)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18257cd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleDisplacement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper.SampleDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleCollisionHelper::*)(int32_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::WaveHarmonic::Crest::CollisionLayer, float_t, bool)>(&::WaveHarmonic::Crest::SampleCollisionHelper::SampleDisplacement)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18257cea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleDisplacement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper.Sample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleCollisionHelper::*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::SampleCollisionHelper::Sample)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper.Sample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleCollisionHelper::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, ::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::SampleCollisionHelper::Sample)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18257d750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper.Sample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleCollisionHelper::*)(::UnityEngine::Vector3, ::by_ref<float_t>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, ::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::SampleCollisionHelper::Sample)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18257d680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper.Sample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleCollisionHelper::*)(::UnityEngine::Vector3, ::by_ref<float_t>, ::by_ref<::UnityEngine::Vector3>, float_t, ::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::SampleCollisionHelper::Sample)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18257d820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper.Sample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleCollisionHelper::*)(::UnityEngine::Vector3, ::by_ref<float_t>, float_t, ::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::SampleCollisionHelper::Sample)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18257d1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper.SampleDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleCollisionHelper::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, ::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::SampleCollisionHelper::SampleDisplacement)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18257cdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleDisplacement", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper.SampleDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleCollisionHelper::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, ::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::SampleCollisionHelper::SampleDisplacement)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18257cb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleDisplacement", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper.SampleDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleCollisionHelper::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, float_t, ::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::SampleCollisionHelper::SampleDisplacement)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18257cc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleDisplacement", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper.SampleHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleCollisionHelper::*)(::UnityEngine::Vector3, ::by_ref<float_t>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, ::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::SampleCollisionHelper::SampleHeight)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18257d040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleHeight", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper.SampleHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleCollisionHelper::*)(::UnityEngine::Vector3, ::by_ref<float_t>, ::by_ref<::UnityEngine::Vector3>, float_t, ::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::SampleCollisionHelper::SampleHeight)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18257d110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleHeight", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper.SampleHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleCollisionHelper::*)(::UnityEngine::Vector3, ::by_ref<float_t>, float_t, ::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::SampleCollisionHelper::SampleHeight)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18257d1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleHeight", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleCollisionHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SampleCollisionHelper::*)()>(&::WaveHarmonic::Crest::SampleCollisionHelper::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18257d8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector3>& WaveHarmonic::Crest::SampleCollisionHelper::__cordl_internal_get__QueryResultNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResultNormal;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& WaveHarmonic::Crest::SampleCollisionHelper::__cordl_internal_get__QueryResultNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResultNormal;
}
constexpr void WaveHarmonic::Crest::SampleCollisionHelper::__cordl_internal_set__QueryResultNormal(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QueryResultNormal = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& WaveHarmonic::Crest::SampleCollisionHelper::__cordl_internal_get__QueryResultVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResultVelocity;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& WaveHarmonic::Crest::SampleCollisionHelper::__cordl_internal_get__QueryResultVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryResultVelocity;
}
constexpr void WaveHarmonic::Crest::SampleCollisionHelper::__cordl_internal_set__QueryResultVelocity(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QueryResultVelocity = value;
}
inline bool WaveHarmonic::Crest::SampleCollisionHelper::Sample(int32_t  id, ::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector3>  displacement, ::by_ref<float_t>  height, ::by_ref<::UnityEngine::Vector3>  velocity, ::by_ref<::UnityEngine::Vector3>  normal, ::WaveHarmonic::Crest::SampleCollisionHelper_QueryType  type, ::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions  options, ::WaveHarmonic::Crest::CollisionLayer  layer, float_t  minimumLength, bool  allowMultipleCallsPerFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"Sample", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::SampleCollisionHelper_QueryType>(), ::i2c::type_of<::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, position, displacement, height, velocity, normal, type, options, layer, minimumLength, allowMultipleCallsPerFrame);
}
inline bool WaveHarmonic::Crest::SampleCollisionHelper::SampleHeight(int32_t  id, ::UnityEngine::Vector3  position, ::by_ref<float_t>  height, ::WaveHarmonic::Crest::CollisionLayer  layer, float_t  minimumLength, bool  allowMultipleCallsPerFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleHeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, position, height, layer, minimumLength, allowMultipleCallsPerFrame);
}
inline bool WaveHarmonic::Crest::SampleCollisionHelper::SampleHeight(int32_t  id, ::UnityEngine::Vector3  position, ::by_ref<float_t>  height, ::by_ref<::UnityEngine::Vector3>  velocity, ::WaveHarmonic::Crest::CollisionLayer  layer, float_t  minimumLength, bool  allowMultipleCallsPerFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleHeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, position, height, velocity, layer, minimumLength, allowMultipleCallsPerFrame);
}
inline bool WaveHarmonic::Crest::SampleCollisionHelper::SampleHeight(int32_t  id, ::UnityEngine::Vector3  position, ::by_ref<float_t>  height, ::by_ref<::UnityEngine::Vector3>  velocity, ::by_ref<::UnityEngine::Vector3>  normal, ::WaveHarmonic::Crest::CollisionLayer  layer, float_t  minimumLength, bool  allowMultipleCallsPerFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleHeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, position, height, velocity, normal, layer, minimumLength, allowMultipleCallsPerFrame);
}
inline bool WaveHarmonic::Crest::SampleCollisionHelper::SampleDisplacement(int32_t  id, ::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector3>  displacement, ::by_ref<::UnityEngine::Vector3>  velocity, ::by_ref<::UnityEngine::Vector3>  normal, ::WaveHarmonic::Crest::CollisionLayer  layer, float_t  minimumLength, bool  allowMultipleCallsPerFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleDisplacement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, position, displacement, velocity, normal, layer, minimumLength, allowMultipleCallsPerFrame);
}
inline bool WaveHarmonic::Crest::SampleCollisionHelper::SampleDisplacement(int32_t  id, ::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector3>  displacement, ::by_ref<::UnityEngine::Vector3>  velocity, ::WaveHarmonic::Crest::CollisionLayer  layer, float_t  minimumLength, bool  allowMultipleCallsPerFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleDisplacement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, position, displacement, velocity, layer, minimumLength, allowMultipleCallsPerFrame);
}
inline bool WaveHarmonic::Crest::SampleCollisionHelper::SampleDisplacement(int32_t  id, ::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector3>  displacement, ::WaveHarmonic::Crest::CollisionLayer  layer, float_t  minimumLength, bool  allowMultipleCallsPerFrame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleDisplacement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, position, displacement, layer, minimumLength, allowMultipleCallsPerFrame);
}
inline bool WaveHarmonic::Crest::SampleCollisionHelper::Sample(::UnityEngine::Vector3  position, float_t  height, ::UnityEngine::Vector3  displacement, ::UnityEngine::Vector3  normal, ::UnityEngine::Vector3  velocity, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, height, displacement, normal, velocity, minimumLength, layer);
}
inline bool WaveHarmonic::Crest::SampleCollisionHelper::Sample(::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector3>  displacement, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<::UnityEngine::Vector3>  velocity, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, displacement, normal, velocity, minimumLength, layer);
}
inline bool WaveHarmonic::Crest::SampleCollisionHelper::Sample(::UnityEngine::Vector3  position, ::by_ref<float_t>  height, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<::UnityEngine::Vector3>  velocity, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, height, normal, velocity, minimumLength, layer);
}
inline bool WaveHarmonic::Crest::SampleCollisionHelper::Sample(::UnityEngine::Vector3  position, ::by_ref<float_t>  height, ::by_ref<::UnityEngine::Vector3>  normal, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, height, normal, minimumLength, layer);
}
inline bool WaveHarmonic::Crest::SampleCollisionHelper::Sample(::UnityEngine::Vector3  position, ::by_ref<float_t>  height, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, height, minimumLength, layer);
}
inline bool WaveHarmonic::Crest::SampleCollisionHelper::SampleDisplacement(::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector3>  displacement, ::by_ref<::UnityEngine::Vector3>  velocity, ::by_ref<::UnityEngine::Vector3>  normal, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleDisplacement", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, displacement, velocity, normal, minimumLength, layer);
}
inline bool WaveHarmonic::Crest::SampleCollisionHelper::SampleDisplacement(::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector3>  displacement, ::by_ref<::UnityEngine::Vector3>  velocity, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleDisplacement", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, displacement, velocity, minimumLength, layer);
}
inline bool WaveHarmonic::Crest::SampleCollisionHelper::SampleDisplacement(::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector3>  displacement, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleDisplacement", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, displacement, minimumLength, layer);
}
inline bool WaveHarmonic::Crest::SampleCollisionHelper::SampleHeight(::UnityEngine::Vector3  position, ::by_ref<float_t>  height, ::by_ref<::UnityEngine::Vector3>  velocity, ::by_ref<::UnityEngine::Vector3>  normal, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleHeight", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, height, velocity, normal, minimumLength, layer);
}
inline bool WaveHarmonic::Crest::SampleCollisionHelper::SampleHeight(::UnityEngine::Vector3  position, ::by_ref<float_t>  height, ::by_ref<::UnityEngine::Vector3>  velocity, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleHeight", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, height, velocity, minimumLength, layer);
}
inline bool WaveHarmonic::Crest::SampleCollisionHelper::SampleHeight(::UnityEngine::Vector3  position, ::by_ref<float_t>  height, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {"SampleHeight", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, height, minimumLength, layer);
}
inline void WaveHarmonic::Crest::SampleCollisionHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleCollisionHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::SampleCollisionHelper* WaveHarmonic::Crest::SampleCollisionHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::SampleCollisionHelper*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper::SampleCollisionHelper()   {
}
