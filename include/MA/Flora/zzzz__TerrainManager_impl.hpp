#pragma once
// IWYU pragma private; include "MA/Flora/TerrainManager.hpp"
#include "MA/Flora/zzzz__InstanceContext_impl.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_impl.hpp"
#include "MA/Flora/zzzz__StreamingSphereManager_impl.hpp"
#include "MA/Flora/zzzz__TerrainDetailManager_impl.hpp"
#include "MA/Flora/zzzz__TerrainSnapshotRefresh_impl.hpp"
#include "MA/Flora/zzzz__TerrainSnapshot_impl.hpp"
#include "MA/Flora/zzzz__TerrainTreeManager_impl.hpp"
#include "MA/Flora/zzzz__UnsafeBitSet_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__TerrainChangedFlags_impl.hpp"
#include "MA/Flora/zzzz__TerrainManager_def.hpp"
#include "MA/Flora/zzzz__EntityObjectRef_1_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "MA/Flora/zzzz__InstanceContext_def.hpp"
#include "MA/Flora/zzzz__TerrainManager_def.hpp"
#include "MA/Flora/zzzz__TerrainSnapshotRefresh_def.hpp"
#include "MA/Flora/zzzz__TerrainSystemSettings_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__TerrainChangedFlags_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805827c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate::*)(::MA::Flora::TerrainManager*, ::MA::Flora::TerrainSystemSettings*)>(&::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate::*)(::MA::Flora::TerrainManager*, ::MA::Flora::TerrainSystemSettings*, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180582750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate::Invoke(::MA::Flora::TerrainManager*  terrainSystem, ::MA::Flora::TerrainSystemSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrainSystem, settings);
}
inline ::System::IAsyncResult* MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate::BeginInvoke(::MA::Flora::TerrainManager*  terrainSystem, ::MA::Flora::TerrainSystemSettings*  settings, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_3)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, terrainSystem, settings, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_3);
}
inline void MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate* MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18150ce20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18150cf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::TerrainManager*, ::MA::Flora::TerrainSystemSettings*)>(&::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18150d070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::MA::Flora::TerrainManager*>(), ::i2c::type_of<::MA::Flora::TerrainSystemSettings*>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall*>();
}
inline void MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall::Invoke(::MA::Flora::TerrainManager*  terrainSystem, ::MA::Flora::TerrainSystemSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::MA::Flora::TerrainManager*>(), ::i2c::type_of<::MA::Flora::TerrainSystemSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainSystem, settings);
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall()   {
}
//  Writing Method size for method: ::MA::Flora::TerrainManager.get_Self
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TerrainManager* (::MA::Flora::TerrainManager::*)()>(&::MA::Flora::TerrainManager::get_Self)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"get_Self", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainManager::*)(::MA::Flora::InstanceContext)>(&::MA::Flora::TerrainManager::Initialize)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x18150f2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::InstanceContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainManager::*)()>(&::MA::Flora::TerrainManager::Dispose)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x18150ecb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainManager::*)(::UnityEngine::Terrain*)>(&::MA::Flora::TerrainManager::Register)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x18150f670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"Register", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainManager::*)(::UnityEngine::EntityId)>(&::MA::Flora::TerrainManager::Unregister)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18150fe00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"Unregister", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainManager::*)()>(&::MA::Flora::TerrainManager::Clear)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x18150e8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager.GetTreeInstanceHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceHandle (::MA::Flora::TerrainManager::*)(::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>>, int32_t)>(&::MA::Flora::TerrainManager::GetTreeInstanceHandle)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18150f0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"GetTreeInstanceHandle", {}, {::i2c::type_of<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager.GetTreeInstanceHandles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::TerrainManager::*)(::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>>, ::Unity::Collections::Allocator)>(&::MA::Flora::TerrainManager::GetTreeInstanceHandles)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18150f160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"GetTreeInstanceHandles", {}, {::i2c::type_of<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager.SetSettingsDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainManager::*)(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>)>(&::MA::Flora::TerrainManager::SetSettingsDirty)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18150fcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"SetSettingsDirty", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager.SetTransformDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainManager::*)(::UnityEngine::EntityId)>(&::MA::Flora::TerrainManager::SetTransformDirty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18150fde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"SetTransformDirty", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager.SetHeightmapDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainManager::*)(::UnityEngine::EntityId)>(&::MA::Flora::TerrainManager::SetHeightmapDirty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18150fca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"SetHeightmapDirty", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager.SetDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainManager::*)(::UnityEngine::EntityId, ::UnityEngine::TerrainChangedFlags)>(&::MA::Flora::TerrainManager::SetDirty)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18150fb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"SetDirty", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::TerrainChangedFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager.GetSnapshotRefreshMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TerrainSnapshotRefresh (*)(::UnityEngine::TerrainChangedFlags)>(&::MA::Flora::TerrainManager::GetSnapshotRefreshMask)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18150f0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"GetSnapshotRefreshMask", {}, {::i2c::type_of<::UnityEngine::TerrainChangedFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager.MarkTerrainSnapshotDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainManager::*)(int32_t, ::MA::Flora::TerrainSnapshotRefresh)>(&::MA::Flora::TerrainManager::MarkTerrainSnapshotDirty)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18150f610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"MarkTerrainSnapshotDirty", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::TerrainSnapshotRefresh>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainManager::*)(::MA::Flora::TerrainSystemSettings)>(&::MA::Flora::TerrainManager::Update)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1815105c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"Update", {}, {::i2c::type_of<::MA::Flora::TerrainSystemSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager.ScheduleUpdatesWithBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::TerrainManager*, ::MA::Flora::TerrainSystemSettings*)>(&::MA::Flora::TerrainManager::ScheduleUpdatesWithBurst)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18150d070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"ScheduleUpdatesWithBurst", {}, {::i2c::type_of<::MA::Flora::TerrainManager*>(), ::i2c::type_of<::MA::Flora::TerrainSystemSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager.UpdateInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainManager::*)(::by_ref<::MA::Flora::TerrainSystemSettings>)>(&::MA::Flora::TerrainManager::UpdateInternal)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x181510030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"UpdateInternal", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainSystemSettings>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainManager.ScheduleUpdatesWithBurst$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::TerrainManager*, ::MA::Flora::TerrainSystemSettings*)>(&::MA::Flora::TerrainManager::ScheduleUpdatesWithBurst$BurstManaged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18150fb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"ScheduleUpdatesWithBurst$BurstManaged", {}, {::i2c::type_of<::MA::Flora::TerrainManager*>(), ::i2c::type_of<::MA::Flora::TerrainSystemSettings*>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::TerrainManager::setStaticF_UpdateTerrainManagerMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "UpdateTerrainManagerMarker", ::MA::Flora::TerrainManager>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::TerrainManager::getStaticF_UpdateTerrainManagerMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "UpdateTerrainManagerMarker", ::MA::Flora::TerrainManager>();
}
inline ::MA::Flora::TerrainManager* MA::Flora::TerrainManager::get_Self()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"get_Self", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TerrainManager*>(*this, ___internal_method);
}
inline void MA::Flora::TerrainManager::Initialize(::MA::Flora::InstanceContext  instanceContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::InstanceContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceContext);
}
inline void MA::Flora::TerrainManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::TerrainManager::Register(::UnityEngine::Terrain*  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"Register", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, terrain);
}
inline void MA::Flora::TerrainManager::Unregister(::UnityEngine::EntityId  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"Unregister", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, entityId);
}
inline void MA::Flora::TerrainManager::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::MA::Flora::FloraInstanceHandle MA::Flora::TerrainManager::GetTreeInstanceHandle(::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>>  terrain, int32_t  treeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"GetTreeInstanceHandle", {}, {::i2c::type_of<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceHandle>(*this, ___internal_method, terrain, treeIndex);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> MA::Flora::TerrainManager::GetTreeInstanceHandles(::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>>  terrain, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"GetTreeInstanceHandles", {}, {::i2c::type_of<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(*this, ___internal_method, terrain, allocator);
}
inline void MA::Flora::TerrainManager::SetSettingsDirty(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  terrainInstanceIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"SetSettingsDirty", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, terrainInstanceIds);
}
inline void MA::Flora::TerrainManager::SetTransformDirty(::UnityEngine::EntityId  terrainInstanceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"SetTransformDirty", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, terrainInstanceId);
}
inline void MA::Flora::TerrainManager::SetHeightmapDirty(::UnityEngine::EntityId  terrainInstanceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"SetHeightmapDirty", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, terrainInstanceId);
}
inline void MA::Flora::TerrainManager::SetDirty(::UnityEngine::EntityId  terrainInstanceId, ::UnityEngine::TerrainChangedFlags  changedFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"SetDirty", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::TerrainChangedFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, terrainInstanceId, changedFlags);
}
inline ::MA::Flora::TerrainSnapshotRefresh MA::Flora::TerrainManager::GetSnapshotRefreshMask(::UnityEngine::TerrainChangedFlags  changedFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"GetSnapshotRefreshMask", {}, {::i2c::type_of<::UnityEngine::TerrainChangedFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TerrainSnapshotRefresh>(nullptr, ___internal_method, changedFlags);
}
inline void MA::Flora::TerrainManager::MarkTerrainSnapshotDirty(int32_t  terrainIndex, ::MA::Flora::TerrainSnapshotRefresh  refreshMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"MarkTerrainSnapshotDirty", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::TerrainSnapshotRefresh>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, terrainIndex, refreshMask);
}
inline void MA::Flora::TerrainManager::Update(::MA::Flora::TerrainSystemSettings  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"Update", {}, {::i2c::type_of<::MA::Flora::TerrainSystemSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, settings);
}
inline void MA::Flora::TerrainManager::ScheduleUpdatesWithBurst(::MA::Flora::TerrainManager*  terrainSystem, ::MA::Flora::TerrainSystemSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"ScheduleUpdatesWithBurst", {}, {::i2c::type_of<::MA::Flora::TerrainManager*>(), ::i2c::type_of<::MA::Flora::TerrainSystemSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainSystem, settings);
}
inline void MA::Flora::TerrainManager::UpdateInternal(::by_ref<::MA::Flora::TerrainSystemSettings>  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"UpdateInternal", {}, {::i2c::type_of<::by_ref<::MA::Flora::TerrainSystemSettings>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, settings);
}
inline void MA::Flora::TerrainManager::ScheduleUpdatesWithBurst$BurstManaged(::MA::Flora::TerrainManager*  terrainSystem, ::MA::Flora::TerrainSystemSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainManager>(),
                        {"ScheduleUpdatesWithBurst$BurstManaged", {}, {::i2c::type_of<::MA::Flora::TerrainManager*>(), ::i2c::type_of<::MA::Flora::TerrainSystemSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainSystem, settings);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::TerrainManager::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::TerrainManager::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_NativeContext", ty: "::MA::Flora::InstanceContext", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllocatedIndices", ty: "::MA::Flora::UnsafeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DirtyTerrainIndices", ty: "::MA::Flora::UnsafeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TerrainRefreshMasks", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainSnapshotRefresh>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FreeIndices", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TerrainEntityIdToIndexMap", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::UnityEngine::EntityId,int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TerrainEntityIds", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::EntityId>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TerrainSnapshots", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainSnapshot>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TreeManagers", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainTreeManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DetailManagers", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainDetailManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TerrainUpdateHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StreamingManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NextDetailTerrainIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TerrainManager::TerrainManager(::MA::Flora::InstanceContext  m_NativeContext, ::MA::Flora::UnsafeBitSet  m_AllocatedIndices, ::MA::Flora::UnsafeBitSet  m_DirtyTerrainIndices, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainSnapshotRefresh>  m_TerrainRefreshMasks, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t>  m_FreeIndices, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::UnityEngine::EntityId,int32_t>  m_TerrainEntityIdToIndexMap, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::EntityId>  m_TerrainEntityIds, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainSnapshot>  m_TerrainSnapshots, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainTreeManager>  m_TreeManagers, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainDetailManager>  m_DetailManagers, ::Unity::Jobs::JobHandle  m_TerrainUpdateHandle, ::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager>  m_StreamingManager, int32_t  m_NextDetailTerrainIndex) noexcept  {
this->m_NativeContext = m_NativeContext;
this->m_AllocatedIndices = m_AllocatedIndices;
this->m_DirtyTerrainIndices = m_DirtyTerrainIndices;
this->m_TerrainRefreshMasks = m_TerrainRefreshMasks;
this->m_FreeIndices = m_FreeIndices;
this->m_TerrainEntityIdToIndexMap = m_TerrainEntityIdToIndexMap;
this->m_TerrainEntityIds = m_TerrainEntityIds;
this->m_TerrainSnapshots = m_TerrainSnapshots;
this->m_TreeManagers = m_TreeManagers;
this->m_DetailManagers = m_DetailManagers;
this->m_TerrainUpdateHandle = m_TerrainUpdateHandle;
this->m_StreamingManager = m_StreamingManager;
this->m_NextDetailTerrainIndex = m_NextDetailTerrainIndex;
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainManager::TerrainManager()   {
}
constexpr ::UnityEngine::TerrainChangedFlags  MA::Flora::TerrainManager::AllChangedFlags{static_cast<int32_t>(0xfffffff)};
constexpr ::UnityEngine::TerrainChangedFlags  MA::Flora::TerrainManager::AllHeightmapFlags{static_cast<int32_t>(0xe5)};
