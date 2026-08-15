#pragma once
// IWYU pragma private; include "MA/InternalBridge/UnityObjectDispatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/InternalBridge/zzzz__UnityObjectDispatcher_def.hpp"
#include "MA/InternalBridge/zzzz__UnityObjectDispatcher_def.hpp"
#include "MA/InternalBridge/zzzz__UnityTransformDispatchData_def.hpp"
#include "MA/InternalBridge/zzzz__UnityTypeDispatchData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__ObjectDispatcher_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TransformDispatchData_def.hpp"
#include "UnityEngine/zzzz__TypeDispatchData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType::UnityObjectDispatcher_TransformTrackingType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType::UnityObjectDispatcher_TransformTrackingType()   {
}
constexpr ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType::GlobalTRS{static_cast<int32_t>(0x0)};
constexpr ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType::LocalTRS{static_cast<int32_t>(0x1)};
constexpr ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType::Hierarchy{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags::UnityObjectDispatcher_TypeTrackingFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags::UnityObjectDispatcher_TypeTrackingFlags()   {
}
constexpr ::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags  MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags::SceneObjects{static_cast<int32_t>(0x1)};
constexpr ::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags  MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags::Assets{static_cast<int32_t>(0x2)};
constexpr ::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags  MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags::EditorOnlyObjects{static_cast<int32_t>(0x4)};
constexpr ::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags  MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags::Default{static_cast<int32_t>(0x3)};
constexpr ::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags  MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags::All{static_cast<int32_t>(0x7)};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectDispatcher.get_maxDispatchHistoryFramesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::InternalBridge::UnityObjectDispatcher::*)()>(&::MA::InternalBridge::UnityObjectDispatcher::get_maxDispatchHistoryFramesCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181eceae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"get_maxDispatchHistoryFramesCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectDispatcher.set_maxDispatchHistoryFramesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::UnityObjectDispatcher::*)(int32_t)>(&::MA::InternalBridge::UnityObjectDispatcher::set_maxDispatchHistoryFramesCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181eceaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"set_maxDispatchHistoryFramesCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectDispatcher.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::UnityObjectDispatcher::*)()>(&::MA::InternalBridge::UnityObjectDispatcher::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ece8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectDispatcher.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::InternalBridge::UnityObjectDispatcher::*)()>(&::MA::InternalBridge::UnityObjectDispatcher::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ecea90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectDispatcher.DispatchTypeChangesAndClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::UnityObjectDispatcher::*)(::System::Type*, ::System::Action_1<::UnityEngine::TypeDispatchData>*, bool, bool)>(&::MA::InternalBridge::UnityObjectDispatcher::DispatchTypeChangesAndClear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ece890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"DispatchTypeChangesAndClear", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Action_1<::UnityEngine::TypeDispatchData>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectDispatcher.DispatchTransformChangesAndClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::UnityObjectDispatcher::*)(::System::Type*, ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType, ::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>>>*, bool)>(&::MA::InternalBridge::UnityObjectDispatcher::DispatchTransformChangesAndClear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ece850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"DispatchTransformChangesAndClear", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectDispatcher.DispatchTransformChangesAndClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::UnityObjectDispatcher::*)(::System::Type*, ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType, ::System::Action_1<::UnityEngine::TransformDispatchData>*)>(&::MA::InternalBridge::UnityObjectDispatcher::DispatchTransformChangesAndClear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ece870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"DispatchTransformChangesAndClear", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<::System::Action_1<::UnityEngine::TransformDispatchData>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectDispatcher.ClearTypeChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::UnityObjectDispatcher::*)(::System::Type*)>(&::MA::InternalBridge::UnityObjectDispatcher::ClearTypeChanges)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ece820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"ClearTypeChanges", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectDispatcher.GetTypeChangesAndClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::InternalBridge::UnityTypeDispatchData (::MA::InternalBridge::UnityObjectDispatcher::*)(::System::Type*, ::Unity::Collections::Allocator, bool, bool)>(&::MA::InternalBridge::UnityObjectDispatcher::GetTypeChangesAndClear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181ecea20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"GetTypeChangesAndClear", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectDispatcher.GetTypeChangesAndClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::UnityObjectDispatcher::*)(::System::Type*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>, ::Unity::Collections::Allocator, bool)>(&::MA::InternalBridge::UnityObjectDispatcher::GetTypeChangesAndClear)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ece980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"GetTypeChangesAndClear", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectDispatcher.GetTransformChangesAndClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Component>> (::MA::InternalBridge::UnityObjectDispatcher::*)(::System::Type*, ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType, bool)>(&::MA::InternalBridge::UnityObjectDispatcher::GetTransformChangesAndClear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ece960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"GetTransformChangesAndClear", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectDispatcher.GetTransformChangesAndClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::InternalBridge::UnityTransformDispatchData (::MA::InternalBridge::UnityObjectDispatcher::*)(::System::Type*, ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType, ::Unity::Collections::Allocator)>(&::MA::InternalBridge::UnityObjectDispatcher::GetTransformChangesAndClear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181ece8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"GetTransformChangesAndClear", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectDispatcher.EnableTypeTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::UnityObjectDispatcher::*)(::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags, ::ArrayW<::System::Type*>)>(&::MA::InternalBridge::UnityObjectDispatcher::EnableTypeTracking)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ece8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"EnableTypeTracking", {}, {::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectDispatcher.EnableTypeTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::UnityObjectDispatcher::*)(::ArrayW<::System::Type*>)>(&::MA::InternalBridge::UnityObjectDispatcher::EnableTypeTracking)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ece8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"EnableTypeTracking", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectDispatcher.DisableTypeTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::UnityObjectDispatcher::*)(::ArrayW<::System::Type*>)>(&::MA::InternalBridge::UnityObjectDispatcher::DisableTypeTracking)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ece840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"DisableTypeTracking", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectDispatcher.EnableTransformTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::UnityObjectDispatcher::*)(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType, ::ArrayW<::System::Type*>)>(&::MA::InternalBridge::UnityObjectDispatcher::EnableTransformTracking)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ece8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"EnableTransformTracking", {}, {::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectDispatcher.DisableTransformTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::UnityObjectDispatcher::*)(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType, ::ArrayW<::System::Type*>)>(&::MA::InternalBridge::UnityObjectDispatcher::DisableTransformTracking)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ece830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"DisableTransformTracking", {}, {::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectDispatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::UnityObjectDispatcher::*)()>(&::MA::InternalBridge::UnityObjectDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181eceaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ObjectDispatcher*& MA::InternalBridge::UnityObjectDispatcher::__cordl_internal_get_m_ObjectDispatcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectDispatcher;
}
constexpr ::UnityEngine::ObjectDispatcher* const& MA::InternalBridge::UnityObjectDispatcher::__cordl_internal_get_m_ObjectDispatcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectDispatcher;
}
constexpr void MA::InternalBridge::UnityObjectDispatcher::__cordl_internal_set_m_ObjectDispatcher(::UnityEngine::ObjectDispatcher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ObjectDispatcher = value;
}
inline int32_t MA::InternalBridge::UnityObjectDispatcher::get_maxDispatchHistoryFramesCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"get_maxDispatchHistoryFramesCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void MA::InternalBridge::UnityObjectDispatcher::set_maxDispatchHistoryFramesCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"set_maxDispatchHistoryFramesCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void MA::InternalBridge::UnityObjectDispatcher::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool MA::InternalBridge::UnityObjectDispatcher::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::InternalBridge::UnityObjectDispatcher::DispatchTypeChangesAndClear(::System::Type*  type, ::System::Action_1<::UnityEngine::TypeDispatchData>*  callback, bool  sortByInstanceID, bool  noScriptingArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"DispatchTypeChangesAndClear", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Action_1<::UnityEngine::TypeDispatchData>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, callback, sortByInstanceID, noScriptingArray);
}
inline void MA::InternalBridge::UnityObjectDispatcher::DispatchTransformChangesAndClear(::System::Type*  type, ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, ::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>>>*  callback, bool  sortByInstanceID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"DispatchTransformChangesAndClear", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, trackingType, callback, sortByInstanceID);
}
inline void MA::InternalBridge::UnityObjectDispatcher::DispatchTransformChangesAndClear(::System::Type*  type, ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, ::System::Action_1<::UnityEngine::TransformDispatchData>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"DispatchTransformChangesAndClear", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<::System::Action_1<::UnityEngine::TransformDispatchData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, trackingType, callback);
}
inline void MA::InternalBridge::UnityObjectDispatcher::ClearTypeChanges(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"ClearTypeChanges", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::MA::InternalBridge::UnityTypeDispatchData MA::InternalBridge::UnityObjectDispatcher::GetTypeChangesAndClear(::System::Type*  type, ::Unity::Collections::Allocator  allocator, bool  sortByInstanceID, bool  noScriptingArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"GetTypeChangesAndClear", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::InternalBridge::UnityTypeDispatchData>(this, ___internal_method, type, allocator, sortByInstanceID, noScriptingArray);
}
inline void MA::InternalBridge::UnityObjectDispatcher::GetTypeChangesAndClear(::System::Type*  type, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  changed, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  changedID, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  destroyedID, ::Unity::Collections::Allocator  allocator, bool  sortByInstanceID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"GetTypeChangesAndClear", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, changed, changedID, destroyedID, allocator, sortByInstanceID);
}
inline ::ArrayW<::UnityW<::UnityEngine::Component>> MA::InternalBridge::UnityObjectDispatcher::GetTransformChangesAndClear(::System::Type*  type, ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, bool  sortByInstanceID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"GetTransformChangesAndClear", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Component>>>(this, ___internal_method, type, trackingType, sortByInstanceID);
}
inline ::MA::InternalBridge::UnityTransformDispatchData MA::InternalBridge::UnityObjectDispatcher::GetTransformChangesAndClear(::System::Type*  type, ::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"GetTransformChangesAndClear", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::InternalBridge::UnityTransformDispatchData>(this, ___internal_method, type, trackingType, allocator);
}
inline void MA::InternalBridge::UnityObjectDispatcher::EnableTypeTracking(::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags  typeTrackingMask, ::ArrayW<::System::Type*>  types)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"EnableTypeTracking", {}, {::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeTrackingMask, types);
}
inline void MA::InternalBridge::UnityObjectDispatcher::EnableTypeTracking(::ArrayW<::System::Type*>  types)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"EnableTypeTracking", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, types);
}
inline void MA::InternalBridge::UnityObjectDispatcher::DisableTypeTracking(::ArrayW<::System::Type*>  types)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"DisableTypeTracking", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, types);
}
inline void MA::InternalBridge::UnityObjectDispatcher::EnableTransformTracking(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, ::ArrayW<::System::Type*>  types)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"EnableTransformTracking", {}, {::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackingType, types);
}
inline void MA::InternalBridge::UnityObjectDispatcher::DisableTransformTracking(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, ::ArrayW<::System::Type*>  types)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {"DisableTransformTracking", {}, {::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackingType, types);
}
template<typename T>
inline void MA::InternalBridge::UnityObjectDispatcher::DispatchTypeChangesAndClear(::System::Action_1<::UnityEngine::TypeDispatchData>*  callback, bool  sortByInstanceID, bool  noScriptingArray)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                    {"DispatchTypeChangesAndClear", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_1<::UnityEngine::TypeDispatchData>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, sortByInstanceID, noScriptingArray);
}
template<typename T>
inline void MA::InternalBridge::UnityObjectDispatcher::DispatchTransformChangesAndClear(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, ::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>>>*  callback, bool  sortByInstanceID)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                    {"DispatchTransformChangesAndClear", {::i2c::class_of<T>()}, {::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<::System::Action_1<::ArrayW<::UnityW<::UnityEngine::Component>>>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackingType, callback, sortByInstanceID);
}
template<typename T>
inline void MA::InternalBridge::UnityObjectDispatcher::DispatchTransformChangesAndClear(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, ::System::Action_1<::UnityEngine::TransformDispatchData>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                    {"DispatchTransformChangesAndClear", {::i2c::class_of<T>()}, {::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<::System::Action_1<::UnityEngine::TransformDispatchData>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackingType, callback);
}
template<typename T>
inline void MA::InternalBridge::UnityObjectDispatcher::ClearTypeChanges()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                    {"ClearTypeChanges", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::MA::InternalBridge::UnityTypeDispatchData MA::InternalBridge::UnityObjectDispatcher::GetTypeChangesAndClear(::Unity::Collections::Allocator  allocator, bool  sortByInstanceID, bool  noScriptingArray)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                    {"GetTypeChangesAndClear", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::MA::InternalBridge::UnityTypeDispatchData>(this, ___internal_method, allocator, sortByInstanceID, noScriptingArray);
}
template<typename T>
inline void MA::InternalBridge::UnityObjectDispatcher::GetTypeChangesAndClear(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  changed, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  changedID, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  destroyedID, ::Unity::Collections::Allocator  allocator, bool  sortByInstanceID)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                    {"GetTypeChangesAndClear", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, changed, changedID, destroyedID, allocator, sortByInstanceID);
}
template<typename T>
inline ::ArrayW<::UnityW<::UnityEngine::Component>> MA::InternalBridge::UnityObjectDispatcher::GetTransformChangesAndClear(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, bool  sortByInstanceID)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                    {"GetTransformChangesAndClear", {::i2c::class_of<T>()}, {::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Component>>>(this, ___internal_method, trackingType, sortByInstanceID);
}
template<typename T>
inline ::MA::InternalBridge::UnityTransformDispatchData MA::InternalBridge::UnityObjectDispatcher::GetTransformChangesAndClear(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                    {"GetTransformChangesAndClear", {::i2c::class_of<T>()}, {::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::MA::InternalBridge::UnityTransformDispatchData>(this, ___internal_method, trackingType, allocator);
}
template<typename T>
inline void MA::InternalBridge::UnityObjectDispatcher::EnableTypeTracking(::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags  typeTrackingMask)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                    {"EnableTypeTracking", {::i2c::class_of<T>()}, {::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TypeTrackingFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeTrackingMask);
}
template<typename T>
inline void MA::InternalBridge::UnityObjectDispatcher::DisableTypeTracking()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                    {"DisableTypeTracking", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void MA::InternalBridge::UnityObjectDispatcher::EnableTransformTracking(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                    {"EnableTransformTracking", {::i2c::class_of<T>()}, {::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackingType);
}
template<typename T>
inline void MA::InternalBridge::UnityObjectDispatcher::DisableTransformTracking(::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType  trackingType)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                    {"DisableTransformTracking", {::i2c::class_of<T>()}, {::i2c::type_of<::MA::InternalBridge::UnityObjectDispatcher_TransformTrackingType>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackingType);
}
inline void MA::InternalBridge::UnityObjectDispatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::InternalBridge::UnityObjectDispatcher* MA::InternalBridge::UnityObjectDispatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::InternalBridge::UnityObjectDispatcher*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::InternalBridge::UnityObjectDispatcher::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::InternalBridge::UnityObjectDispatcher::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::UnityObjectDispatcher::UnityObjectDispatcher()   {
}
