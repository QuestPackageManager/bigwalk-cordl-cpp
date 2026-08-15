#pragma once
// IWYU pragma private; include "MA/InternalBridge/UnityTransformDispatchData.hpp"
#include "UnityEngine/zzzz__TransformDispatchData_impl.hpp"
#include "MA/InternalBridge/zzzz__UnityTransformDispatchData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__TransformDispatchData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::MA::InternalBridge::UnityTransformDispatchData.get_transformedID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> (::MA::InternalBridge::UnityTransformDispatchData::*)()>(&::MA::InternalBridge::UnityTransformDispatchData::get_transformedID)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ecdf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"get_transformedID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityTransformDispatchData.get_parentID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> (::MA::InternalBridge::UnityTransformDispatchData::*)()>(&::MA::InternalBridge::UnityTransformDispatchData::get_parentID)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ececd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"get_parentID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityTransformDispatchData.get_localToWorldMatrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> (::MA::InternalBridge::UnityTransformDispatchData::*)()>(&::MA::InternalBridge::UnityTransformDispatchData::get_localToWorldMatrices)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"get_localToWorldMatrices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityTransformDispatchData.get_positions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> (::MA::InternalBridge::UnityTransformDispatchData::*)()>(&::MA::InternalBridge::UnityTransformDispatchData::get_positions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"get_positions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityTransformDispatchData.get_rotations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> (::MA::InternalBridge::UnityTransformDispatchData::*)()>(&::MA::InternalBridge::UnityTransformDispatchData::get_rotations)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"get_rotations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityTransformDispatchData.get_scales
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> (::MA::InternalBridge::UnityTransformDispatchData::*)()>(&::MA::InternalBridge::UnityTransformDispatchData::get_scales)> {
  constexpr static std::size_t size = 0xbb40;
  constexpr static std::size_t addrs = 0x180e3e650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"get_scales", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityTransformDispatchData.op_Implicit___MA__InternalBridge__UnityTransformDispatchData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::InternalBridge::UnityTransformDispatchData (*)(::UnityEngine::TransformDispatchData)>(&::MA::InternalBridge::UnityTransformDispatchData::op_Implicit___MA__InternalBridge__UnityTransformDispatchData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181eced20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::TransformDispatchData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityTransformDispatchData.op_Implicit___UnityEngine__TransformDispatchData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TransformDispatchData (*)(::MA::InternalBridge::UnityTransformDispatchData)>(&::MA::InternalBridge::UnityTransformDispatchData::op_Implicit___UnityEngine__TransformDispatchData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181eced20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::InternalBridge::UnityTransformDispatchData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityTransformDispatchData.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::UnityTransformDispatchData::*)()>(&::MA::InternalBridge::UnityTransformDispatchData::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ececb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityTransformDispatchData.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::UnityTransformDispatchData::*)(::Unity::Jobs::JobHandle)>(&::MA::InternalBridge::UnityTransformDispatchData::Dispose)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181ecebb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> MA::InternalBridge::UnityTransformDispatchData::get_transformedID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"get_transformedID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> MA::InternalBridge::UnityTransformDispatchData::get_parentID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"get_parentID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> MA::InternalBridge::UnityTransformDispatchData::get_localToWorldMatrices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"get_localToWorldMatrices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> MA::InternalBridge::UnityTransformDispatchData::get_positions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"get_positions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> MA::InternalBridge::UnityTransformDispatchData::get_rotations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"get_rotations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> MA::InternalBridge::UnityTransformDispatchData::get_scales()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"get_scales", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(*this, ___internal_method);
}
inline ::MA::InternalBridge::UnityTransformDispatchData MA::InternalBridge::UnityTransformDispatchData::op_Implicit___MA__InternalBridge__UnityTransformDispatchData(::UnityEngine::TransformDispatchData  transformDispatchData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::TransformDispatchData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::InternalBridge::UnityTransformDispatchData>(nullptr, ___internal_method, transformDispatchData);
}
inline ::UnityEngine::TransformDispatchData MA::InternalBridge::UnityTransformDispatchData::op_Implicit___UnityEngine__TransformDispatchData(::MA::InternalBridge::UnityTransformDispatchData  transformDispatchData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::InternalBridge::UnityTransformDispatchData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TransformDispatchData>(nullptr, ___internal_method, transformDispatchData);
}
inline void MA::InternalBridge::UnityTransformDispatchData::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::InternalBridge::UnityTransformDispatchData::Dispose(::Unity::Jobs::JobHandle  inputDeps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTransformDispatchData>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, inputDeps);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::InternalBridge::UnityTransformDispatchData::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::InternalBridge::UnityTransformDispatchData::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_TransformDispatchData", ty: "::UnityEngine::TransformDispatchData", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::InternalBridge::UnityTransformDispatchData::UnityTransformDispatchData(::UnityEngine::TransformDispatchData  m_TransformDispatchData) noexcept  {
this->m_TransformDispatchData = m_TransformDispatchData;
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::UnityTransformDispatchData::UnityTransformDispatchData()   {
}
