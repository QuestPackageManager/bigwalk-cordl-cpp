#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkedTrain.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "GlobalNamespace/zzzz__TrainCarPositioner_impl.hpp"
#include "GlobalNamespace/zzzz__TrainCar_impl.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkedTrain_def.hpp"
#include "GlobalNamespace/zzzz__NetworkedTrain_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NetworkedTrain_CullMode::NetworkedTrain_CullMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkedTrain_CullMode::NetworkedTrain_CullMode()   {
}
constexpr ::GlobalNamespace::NetworkedTrain_CullMode  GlobalNamespace::NetworkedTrain_CullMode::NoCulling{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NetworkedTrain_CullMode  GlobalNamespace::NetworkedTrain_CullMode::SimpleCulling{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NetworkedTrain_CullMode  GlobalNamespace::NetworkedTrain_CullMode::Proxy{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.get_CurrentSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NetworkedTrain::*)()>(&::GlobalNamespace::NetworkedTrain::get_CurrentSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18040c370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"get_CurrentSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.SetCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)()>(&::GlobalNamespace::NetworkedTrain::SetCache)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18040be20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"SetCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)()>(&::GlobalNamespace::NetworkedTrain::Awake)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18040a8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.GetProgressedPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)(int32_t, float_t, float_t, double_t, ::by_ref<int32_t>, ::by_ref<float_t>)>(&::GlobalNamespace::NetworkedTrain::GetProgressedPosition)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18040b390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"GetProgressedPosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)()>(&::GlobalNamespace::NetworkedTrain::FixedUpdate)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x18040abc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.PlaceAllCars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)(int32_t, double_t)>(&::GlobalNamespace::NetworkedTrain::PlaceAllCars)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x18040b900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"PlaceAllCars", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.EnginePeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::NetworkedTrain::EnginePeck)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18040ab60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"EnginePeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.GetDistanceFraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NetworkedTrain::*)()>(&::GlobalNamespace::NetworkedTrain::GetDistanceFraction)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18040b340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"GetDistanceFraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.SetDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)(float_t)>(&::GlobalNamespace::NetworkedTrain::SetDistance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18040bf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"SetDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)()>(&::GlobalNamespace::NetworkedTrain::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18040b5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)()>(&::GlobalNamespace::NetworkedTrain::OnEnable)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x18040b680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)()>(&::GlobalNamespace::NetworkedTrain::OnDisable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18040b4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.UpdateCullStateForAllCars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)()>(&::GlobalNamespace::NetworkedTrain::UpdateCullStateForAllCars)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x18040bf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"UpdateCullStateForAllCars", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.GetCarPositionAndTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Splines::NativeSpline, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::GlobalNamespace::NetworkedTrain::GetCarPositionAndTangent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18040b260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"GetCarPositionAndTangent", {}, {::i2c::type_of<::UnityEngine::Splines::NativeSpline>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)()>(&::GlobalNamespace::NetworkedTrain::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18040c340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)()>(&::GlobalNamespace::NetworkedTrain::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.get_NetworksyncTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::NetworkedTrain::*)()>(&::GlobalNamespace::NetworkedTrain::get_NetworksyncTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18040c3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"get_NetworksyncTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.set_NetworksyncTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)(::ByRefConst<double_t>)>(&::GlobalNamespace::NetworkedTrain::set_NetworksyncTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18040c560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"set_NetworksyncTime", {}, {::i2c::type_of<::ByRefConst<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.get_NetworksyncSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NetworkedTrain::*)()>(&::GlobalNamespace::NetworkedTrain::get_NetworksyncSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"get_NetworksyncSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.set_NetworksyncSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)(::ByRefConst<float_t>)>(&::GlobalNamespace::NetworkedTrain::set_NetworksyncSpeed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18040c450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"set_NetworksyncSpeed", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.get_NetworksyncSplineIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetworkedTrain::*)()>(&::GlobalNamespace::NetworkedTrain::get_NetworksyncSplineIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18040c390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"get_NetworksyncSplineIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.set_NetworksyncSplineIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)(::ByRefConst<int32_t>)>(&::GlobalNamespace::NetworkedTrain::set_NetworksyncSplineIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18040c4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"set_NetworksyncSplineIndex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.get_NetworksyncDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NetworkedTrain::*)()>(&::GlobalNamespace::NetworkedTrain::get_NetworksyncDistance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18040c380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"get_NetworksyncDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.set_NetworksyncDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)(::ByRefConst<float_t>)>(&::GlobalNamespace::NetworkedTrain::set_NetworksyncDistance)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18040c3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"set_NetworksyncDistance", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.get_NetworktargetSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NetworkedTrain::*)()>(&::GlobalNamespace::NetworkedTrain::get_NetworktargetSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18040c3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"get_NetworktargetSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.set_NetworktargetSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)(::ByRefConst<float_t>)>(&::GlobalNamespace::NetworkedTrain::set_NetworktargetSpeed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18040c5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"set_NetworktargetSpeed", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)(::Mirror::NetworkWriter*, bool)>(&::GlobalNamespace::NetworkedTrain::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18040bd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkedTrain.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkedTrain::*)(::Mirror::NetworkReader*, bool)>(&::GlobalNamespace::NetworkedTrain::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18040a980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                    {::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::NetworkedTrain::__cordl_internal_get_engineSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___engineSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_engineSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___engineSystem;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_engineSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___engineSystem = value;
}
constexpr ::GlobalNamespace::NetworkedTrain_CullMode& GlobalNamespace::NetworkedTrain::__cordl_internal_get_cullMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cullMode;
}
constexpr ::GlobalNamespace::NetworkedTrain_CullMode const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_cullMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cullMode;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_cullMode(::GlobalNamespace::NetworkedTrain_CullMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cullMode = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Splines::SplineContainer>>& GlobalNamespace::NetworkedTrain::__cordl_internal_get_splines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splines;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Splines::SplineContainer>> const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_splines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splines;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_splines(::ArrayW<::UnityW<::UnityEngine::Splines::SplineContainer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splines = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::NetworkedTrain::__cordl_internal_get__splineDistanceCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____splineDistanceCache;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::NetworkedTrain::__cordl_internal_get__splineDistanceCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____splineDistanceCache;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set__splineDistanceCache(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____splineDistanceCache = value;
}
constexpr float_t& GlobalNamespace::NetworkedTrain::__cordl_internal_get__totalDistanceCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalDistanceCache;
}
constexpr float_t const& GlobalNamespace::NetworkedTrain::__cordl_internal_get__totalDistanceCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalDistanceCache;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set__totalDistanceCache(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalDistanceCache = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrainCar>>& GlobalNamespace::NetworkedTrain::__cordl_internal_get_cars()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cars;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrainCar>> const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_cars() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cars;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_cars(::ArrayW<::UnityW<::GlobalNamespace::TrainCar>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cars = value;
}
constexpr bool& GlobalNamespace::NetworkedTrain::__cordl_internal_get_bank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bank;
}
constexpr bool const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_bank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bank;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_bank(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bank = value;
}
constexpr ::ArrayW<::GlobalNamespace::TrainCarPositioner>& GlobalNamespace::NetworkedTrain::__cordl_internal_get__trainCars()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trainCars;
}
constexpr ::ArrayW<::GlobalNamespace::TrainCarPositioner> const& GlobalNamespace::NetworkedTrain::__cordl_internal_get__trainCars() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trainCars;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set__trainCars(::ArrayW<::GlobalNamespace::TrainCarPositioner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trainCars = value;
}
constexpr double_t& GlobalNamespace::NetworkedTrain::__cordl_internal_get_syncTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncTime;
}
constexpr double_t const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_syncTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncTime;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_syncTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncTime = value;
}
constexpr float_t& GlobalNamespace::NetworkedTrain::__cordl_internal_get_syncSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncSpeed;
}
constexpr float_t const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_syncSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncSpeed;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_syncSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncSpeed = value;
}
constexpr int32_t& GlobalNamespace::NetworkedTrain::__cordl_internal_get_syncSplineIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncSplineIndex;
}
constexpr int32_t const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_syncSplineIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncSplineIndex;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_syncSplineIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncSplineIndex = value;
}
constexpr float_t& GlobalNamespace::NetworkedTrain::__cordl_internal_get_syncDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncDistance;
}
constexpr float_t const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_syncDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncDistance;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_syncDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncDistance = value;
}
constexpr float_t& GlobalNamespace::NetworkedTrain::__cordl_internal_get_targetSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSpeed;
}
constexpr float_t const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_targetSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSpeed;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_targetSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetSpeed = value;
}
constexpr float_t& GlobalNamespace::NetworkedTrain::__cordl_internal_get_acceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceleration;
}
constexpr float_t const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_acceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceleration;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_acceleration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acceleration = value;
}
constexpr float_t& GlobalNamespace::NetworkedTrain::__cordl_internal_get_deceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deceleration;
}
constexpr float_t const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_deceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deceleration;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_deceleration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deceleration = value;
}
constexpr float_t& GlobalNamespace::NetworkedTrain::__cordl_internal_get_fullSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullSpeed;
}
constexpr float_t const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_fullSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullSpeed;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_fullSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullSpeed = value;
}
constexpr bool& GlobalNamespace::NetworkedTrain::__cordl_internal_get_hasCable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCable;
}
constexpr bool const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_hasCable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCable;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_hasCable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasCable = value;
}
constexpr bool& GlobalNamespace::NetworkedTrain::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr float_t& GlobalNamespace::NetworkedTrain::__cordl_internal_get_carGap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___carGap;
}
constexpr float_t const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_carGap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___carGap;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_carGap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___carGap = value;
}
constexpr int32_t& GlobalNamespace::NetworkedTrain::__cordl_internal_get__currentSplineIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSplineIndex;
}
constexpr int32_t const& GlobalNamespace::NetworkedTrain::__cordl_internal_get__currentSplineIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSplineIndex;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set__currentSplineIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSplineIndex = value;
}
constexpr float_t& GlobalNamespace::NetworkedTrain::__cordl_internal_get__currentDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDistance;
}
constexpr float_t const& GlobalNamespace::NetworkedTrain::__cordl_internal_get__currentDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDistance;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set__currentDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentDistance = value;
}
constexpr float_t& GlobalNamespace::NetworkedTrain::__cordl_internal_get__currentSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSpeed;
}
constexpr float_t const& GlobalNamespace::NetworkedTrain::__cordl_internal_get__currentSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSpeed;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set__currentSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSpeed = value;
}
constexpr float_t& GlobalNamespace::NetworkedTrain::__cordl_internal_get__cableSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cableSpeed;
}
constexpr float_t const& GlobalNamespace::NetworkedTrain::__cordl_internal_get__cableSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cableSpeed;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set__cableSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cableSpeed = value;
}
constexpr int32_t& GlobalNamespace::NetworkedTrain::__cordl_internal_get_lastPlacedSplineIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlacedSplineIndex;
}
constexpr int32_t const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_lastPlacedSplineIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlacedSplineIndex;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_lastPlacedSplineIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPlacedSplineIndex = value;
}
constexpr double_t& GlobalNamespace::NetworkedTrain::__cordl_internal_get_lastPlacedDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlacedDistance;
}
constexpr double_t const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_lastPlacedDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlacedDistance;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_lastPlacedDistance(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPlacedDistance = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::NativeSpline>& GlobalNamespace::NetworkedTrain::__cordl_internal_get__nativeSplines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeSplines;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Splines::NativeSpline> const& GlobalNamespace::NetworkedTrain::__cordl_internal_get__nativeSplines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeSplines;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set__nativeSplines(::Unity::Collections::NativeArray_1<::UnityEngine::Splines::NativeSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nativeSplines = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*& GlobalNamespace::NetworkedTrain::__cordl_internal_get_playerPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPositions;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>* const& GlobalNamespace::NetworkedTrain::__cordl_internal_get_playerPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPositions;
}
constexpr void GlobalNamespace::NetworkedTrain::__cordl_internal_set_playerPositions(::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerPositions = value;
}
inline float_t GlobalNamespace::NetworkedTrain::get_CurrentSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"get_CurrentSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkedTrain::SetCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"SetCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkedTrain::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkedTrain::GetProgressedPosition(int32_t  startSplineIndex, float_t  startDistance, float_t  speed, double_t  progressedTime, ::by_ref<int32_t>  splineIndex, ::by_ref<float_t>  splineDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"GetProgressedPosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startSplineIndex, startDistance, speed, progressedTime, splineIndex, splineDistance);
}
inline void GlobalNamespace::NetworkedTrain::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkedTrain::PlaceAllCars(int32_t  trackIndex, double_t  runningDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"PlaceAllCars", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackIndex, runningDistance);
}
inline void GlobalNamespace::NetworkedTrain::EnginePeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"EnginePeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline float_t GlobalNamespace::NetworkedTrain::GetDistanceFraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"GetDistanceFraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkedTrain::SetDistance(float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"SetDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance);
}
inline void GlobalNamespace::NetworkedTrain::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkedTrain::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkedTrain::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkedTrain::UpdateCullStateForAllCars()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"UpdateCullStateForAllCars", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkedTrain::GetCarPositionAndTangent(::UnityEngine::Splines::NativeSpline  nativeSpline, float_t  t, ::by_ref<::Unity::Mathematics::float3>  position, ::by_ref<::Unity::Mathematics::float3>  tangent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"GetCarPositionAndTangent", {}, {::i2c::type_of<::UnityEngine::Splines::NativeSpline>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nativeSpline, t, position, tangent);
}
inline void GlobalNamespace::NetworkedTrain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkedTrain::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline double_t GlobalNamespace::NetworkedTrain::get_NetworksyncTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"get_NetworksyncTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkedTrain::set_NetworksyncTime(::ByRefConst<double_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"set_NetworksyncTime", {}, {::i2c::type_of<::ByRefConst<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::NetworkedTrain::get_NetworksyncSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"get_NetworksyncSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkedTrain::set_NetworksyncSpeed(::ByRefConst<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"set_NetworksyncSpeed", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::NetworkedTrain::get_NetworksyncSplineIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"get_NetworksyncSplineIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkedTrain::set_NetworksyncSplineIndex(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"set_NetworksyncSplineIndex", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::NetworkedTrain::get_NetworksyncDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"get_NetworksyncDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkedTrain::set_NetworksyncDistance(::ByRefConst<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"set_NetworksyncDistance", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::NetworkedTrain::get_NetworktargetSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"get_NetworktargetSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkedTrain::set_NetworktargetSpeed(::ByRefConst<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(),
                        {"set_NetworktargetSpeed", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NetworkedTrain::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void GlobalNamespace::NetworkedTrain::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NetworkedTrain*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::GlobalNamespace::NetworkedTrain* GlobalNamespace::NetworkedTrain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkedTrain*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkedTrain::NetworkedTrain()   {
}
