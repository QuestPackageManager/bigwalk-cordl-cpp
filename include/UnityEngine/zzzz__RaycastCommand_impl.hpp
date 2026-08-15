#pragma once
// IWYU pragma private; include "UnityEngine/RaycastCommand.hpp"
#include "UnityEngine/zzzz__PhysicsScene_impl.hpp"
#include "UnityEngine/zzzz__QueryParameters_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__RaycastCommand_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobsUtility_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryParameters_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::RaycastCommand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RaycastCommand::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::QueryParameters, float_t)>(&::UnityEngine::RaycastCommand::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x182302ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastCommand>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::QueryParameters>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastCommand.set_from
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RaycastCommand::*)(::UnityEngine::Vector3)>(&::UnityEngine::RaycastCommand::set_from)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d5400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastCommand>(),
                        {"set_from", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastCommand.set_direction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RaycastCommand::*)(::UnityEngine::Vector3)>(&::UnityEngine::RaycastCommand::set_direction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d5410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastCommand>(),
                        {"set_direction", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastCommand.set_physicsScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RaycastCommand::*)(::UnityEngine::PhysicsScene)>(&::UnityEngine::RaycastCommand::set_physicsScene)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803bda70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastCommand>(),
                        {"set_physicsScene", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastCommand.set_distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RaycastCommand::*)(float_t)>(&::UnityEngine::RaycastCommand::set_distance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastCommand>(),
                        {"set_distance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastCommand.ScheduleBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>, ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>, int32_t, int32_t, ::Unity::Jobs::JobHandle)>(&::UnityEngine::RaycastCommand::ScheduleBatch)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x182302900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastCommand>(),
                        {"ScheduleBatch", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastCommand.ScheduleRaycastBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, void*, int32_t, void*, int32_t, int32_t, int32_t)>(&::UnityEngine::RaycastCommand::ScheduleRaycastBatch)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182302a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastCommand>(),
                        {"ScheduleRaycastBatch", {}, {::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastCommand.ScheduleRaycastBatch_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>, void*, int32_t, void*, int32_t, int32_t, int32_t, ::by_ref<::Unity::Jobs::JobHandle>)>(&::UnityEngine::RaycastCommand::ScheduleRaycastBatch_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182302a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastCommand>(),
                        {"ScheduleRaycastBatch_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::RaycastCommand::_ctor(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  direction, ::UnityEngine::QueryParameters  queryParameters, float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastCommand>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::QueryParameters>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, direction, queryParameters, distance);
}
inline void UnityEngine::RaycastCommand::set_from(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastCommand>(),
                        {"set_from", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::RaycastCommand::set_direction(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastCommand>(),
                        {"set_direction", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::RaycastCommand::set_physicsScene(::UnityEngine::PhysicsScene  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastCommand>(),
                        {"set_physicsScene", {}, {::i2c::type_of<::UnityEngine::PhysicsScene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::RaycastCommand::set_distance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastCommand>(),
                        {"set_distance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Unity::Jobs::JobHandle UnityEngine::RaycastCommand::ScheduleBatch(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  commands, ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  results, int32_t  minCommandsPerJob, int32_t  maxHits, ::Unity::Jobs::JobHandle  dependsOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastCommand>(),
                        {"ScheduleBatch", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, commands, results, minCommandsPerJob, maxHits, dependsOn);
}
inline ::Unity::Jobs::JobHandle UnityEngine::RaycastCommand::ScheduleRaycastBatch(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>  parameters, void*  commands, int32_t  commandLen, void*  result, int32_t  resultLen, int32_t  minCommandsPerJob, int32_t  maxHits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastCommand>(),
                        {"ScheduleRaycastBatch", {}, {::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, parameters, commands, commandLen, result, resultLen, minCommandsPerJob, maxHits);
}
inline void UnityEngine::RaycastCommand::ScheduleRaycastBatch_Injected(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>  parameters, void*  commands, int32_t  commandLen, void*  result, int32_t  resultLen, int32_t  minCommandsPerJob, int32_t  maxHits, ::by_ref<::Unity::Jobs::JobHandle>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastCommand>(),
                        {"ScheduleRaycastBatch_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters>>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, parameters, commands, commandLen, result, resultLen, minCommandsPerJob, maxHits, ret);
}
// Ctor Parameters [CppParam { name: "_from_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_direction_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_physicsScene_k__BackingField", ty: "::UnityEngine::PhysicsScene", modifiers: "", def_value: Some("{}") }, CppParam { name: "_distance_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "queryParameters", ty: "::UnityEngine::QueryParameters", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RaycastCommand::RaycastCommand(::UnityEngine::Vector3  _from_k__BackingField, ::UnityEngine::Vector3  _direction_k__BackingField, ::UnityEngine::PhysicsScene  _physicsScene_k__BackingField, float_t  _distance_k__BackingField, ::UnityEngine::QueryParameters  queryParameters) noexcept  {
this->_from_k__BackingField = _from_k__BackingField;
this->_direction_k__BackingField = _direction_k__BackingField;
this->_physicsScene_k__BackingField = _physicsScene_k__BackingField;
this->_distance_k__BackingField = _distance_k__BackingField;
this->queryParameters = queryParameters;
}
// Ctor Parameters []
constexpr ::UnityEngine::RaycastCommand::RaycastCommand()   {
}
