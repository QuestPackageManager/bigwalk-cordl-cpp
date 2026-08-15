#pragma once
// IWYU pragma private; include "UnityEngine/Resources.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Resources_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Resources.FindObjectsOfTypeAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (*)(::System::Type*)>(&::UnityEngine::Resources::FindObjectsOfTypeAll)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182278f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"FindObjectsOfTypeAll", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Resources.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::StringW)>(&::UnityEngine::Resources::Load)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182279200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Resources.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::StringW, ::System::Type*)>(&::UnityEngine::Resources::Load)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182279180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Resources.GetBuiltinResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::System::Type*, ::StringW)>(&::UnityEngine::Resources::GetBuiltinResource)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x182279010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"GetBuiltinResource", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Resources.UnloadAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::UnityEngine::Resources::UnloadAsset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182279230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"UnloadAsset", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Resources.UnloadUnusedAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AsyncOperation* (*)()>(&::UnityEngine::Resources::UnloadUnusedAssets)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822792b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"UnloadUnusedAssets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Resources.EntityIdToObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::UnityEngine::EntityId)>(&::UnityEngine::Resources::EntityIdToObject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182278ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"EntityIdToObject", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Resources.EntityIdsToObjectList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*)>(&::UnityEngine::Resources::EntityIdsToObjectList)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182278ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"EntityIdsToObjectList", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Resources.EntityIdsToObjectList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*)>(&::UnityEngine::Resources::EntityIdsToObjectList)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182278f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"EntityIdsToObjectList", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Resources.EntityIdIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::EntityId)>(&::UnityEngine::Resources::EntityIdIsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182278e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"EntityIdIsValid", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Resources.GetBuiltinResource_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Type*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Resources::GetBuiltinResource_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182279000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"GetBuiltinResource_Injected", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Resources.UnloadUnusedAssets_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Resources::UnloadUnusedAssets_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822792a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"UnloadUnusedAssets_Injected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Resources.EntityIdToObject_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::EntityId>)>(&::UnityEngine::Resources::EntityIdToObject_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182278eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"EntityIdToObject_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Resources.EntityIdIsValid_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::EntityId>)>(&::UnityEngine::Resources::EntityIdIsValid_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182278e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"EntityIdIsValid_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline ::ArrayW<T> UnityEngine::Resources::ConvertObjects(::ArrayW<::UnityEngine::Object*>  rawObjects)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Resources*>(),
                    {"ConvertObjects", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<::UnityEngine::Object*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, rawObjects);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::Resources::FindObjectsOfTypeAll(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"FindObjectsOfTypeAll", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, type);
}
template<typename T>
inline ::ArrayW<T> UnityEngine::Resources::FindObjectsOfTypeAll()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Resources*>(),
                    {"FindObjectsOfTypeAll", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Resources::Load(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, path);
}
template<typename T>
inline T UnityEngine::Resources::Load(::StringW  path)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Resources*>(),
                    {"Load", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, path);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Resources::Load(::StringW  path, ::System::Type*  systemTypeInstance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, path, systemTypeInstance);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Resources::GetBuiltinResource(::System::Type*  type, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"GetBuiltinResource", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, type, path);
}
template<typename T>
inline T UnityEngine::Resources::GetBuiltinResource(::StringW  path)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Resources*>(),
                    {"GetBuiltinResource", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, path);
}
inline void UnityEngine::Resources::UnloadAsset(::UnityEngine::Object*  assetToUnload)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"UnloadAsset", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, assetToUnload);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::Resources::UnloadUnusedAssets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"UnloadUnusedAssets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Resources::EntityIdToObject(::UnityEngine::EntityId  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"EntityIdToObject", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, entityId);
}
inline void UnityEngine::Resources::EntityIdsToObjectList(::System::IntPtr  entityIds, int32_t  instanceCount, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  objects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"EntityIdsToObjectList", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entityIds, instanceCount, objects);
}
inline void UnityEngine::Resources::EntityIdsToObjectList(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  entityIds, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  objects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"EntityIdsToObjectList", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, entityIds, objects);
}
inline bool UnityEngine::Resources::EntityIdIsValid(::UnityEngine::EntityId  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"EntityIdIsValid", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, entityId);
}
inline ::System::IntPtr UnityEngine::Resources::GetBuiltinResource_Injected(::System::Type*  type, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"GetBuiltinResource_Injected", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, type, path);
}
inline ::System::IntPtr UnityEngine::Resources::UnloadUnusedAssets_Injected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"UnloadUnusedAssets_Injected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Resources::EntityIdToObject_Injected(::by_ref<::UnityEngine::EntityId>  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"EntityIdToObject_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, entityId);
}
inline bool UnityEngine::Resources::EntityIdIsValid_Injected(::by_ref<::UnityEngine::EntityId>  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Resources*>(),
                        {"EntityIdIsValid_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, entityId);
}
// Ctor Parameters []
constexpr ::UnityEngine::Resources::Resources()   {
}
