#pragma once
// IWYU pragma private; include "MA/InternalBridge/UnityTypeDispatchData.hpp"
#include "UnityEngine/zzzz__TypeDispatchData_impl.hpp"
#include "MA/InternalBridge/zzzz__UnityTypeDispatchData_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TypeDispatchData_def.hpp"
//  Writing Method size for method: ::MA::InternalBridge::UnityTypeDispatchData.get_changed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (::MA::InternalBridge::UnityTypeDispatchData::*)()>(&::MA::InternalBridge::UnityTypeDispatchData::get_changed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTypeDispatchData>(),
                        {"get_changed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityTypeDispatchData.get_changedID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> (::MA::InternalBridge::UnityTypeDispatchData::*)()>(&::MA::InternalBridge::UnityTypeDispatchData::get_changedID)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ecee10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTypeDispatchData>(),
                        {"get_changedID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityTypeDispatchData.get_destroyedID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> (::MA::InternalBridge::UnityTypeDispatchData::*)()>(&::MA::InternalBridge::UnityTypeDispatchData::get_destroyedID)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ecee60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTypeDispatchData>(),
                        {"get_destroyedID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityTypeDispatchData.op_Implicit___MA__InternalBridge__UnityTypeDispatchData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::InternalBridge::UnityTypeDispatchData (*)(::UnityEngine::TypeDispatchData)>(&::MA::InternalBridge::UnityTypeDispatchData::op_Implicit___MA__InternalBridge__UnityTypeDispatchData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181eceeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTypeDispatchData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::TypeDispatchData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityTypeDispatchData.op_Implicit___UnityEngine__TypeDispatchData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TypeDispatchData (*)(::MA::InternalBridge::UnityTypeDispatchData)>(&::MA::InternalBridge::UnityTypeDispatchData::op_Implicit___UnityEngine__TypeDispatchData)> {
  constexpr static std::size_t size = 0x1e30;
  constexpr static std::size_t addrs = 0x1812e3650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTypeDispatchData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::InternalBridge::UnityTypeDispatchData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityTypeDispatchData.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::UnityTypeDispatchData::*)()>(&::MA::InternalBridge::UnityTypeDispatchData::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ecedf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTypeDispatchData>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityTypeDispatchData.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::UnityTypeDispatchData::*)(::Unity::Jobs::JobHandle)>(&::MA::InternalBridge::UnityTypeDispatchData::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181eced60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTypeDispatchData>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityW<::UnityEngine::Object>> MA::InternalBridge::UnityTypeDispatchData::get_changed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTypeDispatchData>(),
                        {"get_changed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> MA::InternalBridge::UnityTypeDispatchData::get_changedID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTypeDispatchData>(),
                        {"get_changedID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> MA::InternalBridge::UnityTypeDispatchData::get_destroyedID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTypeDispatchData>(),
                        {"get_destroyedID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(*this, ___internal_method);
}
inline ::MA::InternalBridge::UnityTypeDispatchData MA::InternalBridge::UnityTypeDispatchData::op_Implicit___MA__InternalBridge__UnityTypeDispatchData(::UnityEngine::TypeDispatchData  typeDispatchData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTypeDispatchData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::TypeDispatchData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::InternalBridge::UnityTypeDispatchData>(nullptr, ___internal_method, typeDispatchData);
}
inline ::UnityEngine::TypeDispatchData MA::InternalBridge::UnityTypeDispatchData::op_Implicit___UnityEngine__TypeDispatchData(::MA::InternalBridge::UnityTypeDispatchData  typeDispatchData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTypeDispatchData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::InternalBridge::UnityTypeDispatchData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TypeDispatchData>(nullptr, ___internal_method, typeDispatchData);
}
inline void MA::InternalBridge::UnityTypeDispatchData::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTypeDispatchData>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::InternalBridge::UnityTypeDispatchData::Dispose(::Unity::Jobs::JobHandle  inputDeps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityTypeDispatchData>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, inputDeps);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::InternalBridge::UnityTypeDispatchData::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::InternalBridge::UnityTypeDispatchData::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_TypeDispatchData", ty: "::UnityEngine::TypeDispatchData", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::InternalBridge::UnityTypeDispatchData::UnityTypeDispatchData(::UnityEngine::TypeDispatchData  m_TypeDispatchData) noexcept  {
this->m_TypeDispatchData = m_TypeDispatchData;
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::UnityTypeDispatchData::UnityTypeDispatchData()   {
}
