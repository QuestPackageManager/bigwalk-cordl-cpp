#pragma once
// IWYU pragma private; include "GlobalNamespace/MicroSplatMeshTerrain.hpp"
#include "JBooth/MicroSplat/zzzz__MicroSplatObject_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MeshRenderer_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "GlobalNamespace/zzzz__MicroSplatMeshTerrain_def.hpp"
#include "GlobalNamespace/zzzz__MicroSplatMeshTerrain_def.hpp"
#include "JBooth/MicroSplat/zzzz__MicroSplatObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll::*)()>(&::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*>(),
                    {::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18057e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*>(),
                    {::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll::*)(::System::IAsyncResult*)>(&::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*>(),
                    {::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll* GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll::MicroSplatMeshTerrain_MaterialSyncAll()   {
}
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803e3c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync::*)(::UnityEngine::Material*)>(&::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*>(),
                    {::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync::*)(::UnityEngine::Material*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync::BeginInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*>(),
                    {::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync::*)(::System::IAsyncResult*)>(&::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*>(),
                    {::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MicroSplatMeshTerrain_MaterialSync::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::MicroSplatMeshTerrain_MaterialSync::Invoke(::UnityEngine::Material*  m)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m);
}
inline ::System::IAsyncResult* GlobalNamespace::MicroSplatMeshTerrain_MaterialSync::BeginInvoke(::UnityEngine::Material*  m, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, m, callback, object);
}
inline void GlobalNamespace::MicroSplatMeshTerrain_MaterialSync::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync* GlobalNamespace::MicroSplatMeshTerrain_MaterialSync::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync::MicroSplatMeshTerrain_MaterialSync()   {
}
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain.add_OnMaterialSyncAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*)>(&::GlobalNamespace::MicroSplatMeshTerrain::add_OnMaterialSyncAll)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1813ff700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"add_OnMaterialSyncAll", {}, {::i2c::type_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain.remove_OnMaterialSyncAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*)>(&::GlobalNamespace::MicroSplatMeshTerrain::remove_OnMaterialSyncAll)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1813ff840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"remove_OnMaterialSyncAll", {}, {::i2c::type_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain.add_OnMaterialSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicroSplatMeshTerrain::*)(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*)>(&::GlobalNamespace::MicroSplatMeshTerrain::add_OnMaterialSync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1813ff7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"add_OnMaterialSync", {}, {::i2c::type_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain.remove_OnMaterialSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicroSplatMeshTerrain::*)(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*)>(&::GlobalNamespace::MicroSplatMeshTerrain::remove_OnMaterialSync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1813ff8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"remove_OnMaterialSync", {}, {::i2c::type_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicroSplatMeshTerrain::*)()>(&::GlobalNamespace::MicroSplatMeshTerrain::OnEnable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1813ff000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain.GetTerrainDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor (::GlobalNamespace::MicroSplatMeshTerrain::*)()>(&::GlobalNamespace::MicroSplatMeshTerrain::GetTerrainDescriptor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1813fef10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                    {::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicroSplatMeshTerrain::*)()>(&::GlobalNamespace::MicroSplatMeshTerrain::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ff0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicroSplatMeshTerrain::*)()>(&::GlobalNamespace::MicroSplatMeshTerrain::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1813fef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicroSplatMeshTerrain::*)()>(&::GlobalNamespace::MicroSplatMeshTerrain::Cleanup)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1813fec00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"Cleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain.SyncMeshBlendMat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicroSplatMeshTerrain::*)()>(&::GlobalNamespace::MicroSplatMeshTerrain::SyncMeshBlendMat)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1813ff3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"SyncMeshBlendMat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain.GetMeshBlendMatInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::MicroSplatMeshTerrain::*)()>(&::GlobalNamespace::MicroSplatMeshTerrain::GetMeshBlendMatInstance)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1813fed80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"GetMeshBlendMatInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain.ApplyMeshBlendMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicroSplatMeshTerrain::*)()>(&::GlobalNamespace::MicroSplatMeshTerrain::ApplyMeshBlendMap)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1813feb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"ApplyMeshBlendMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain.Sync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicroSplatMeshTerrain::*)()>(&::GlobalNamespace::MicroSplatMeshTerrain::Sync)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1813ff400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"Sync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::GlobalNamespace::MicroSplatMeshTerrain::*)()>(&::GlobalNamespace::MicroSplatMeshTerrain::GetBounds)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1813fec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                    {::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain.SyncAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::MicroSplatMeshTerrain::SyncAll)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1813ff0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"SyncAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MicroSplatMeshTerrain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MicroSplatMeshTerrain::*)()>(&::GlobalNamespace::MicroSplatMeshTerrain::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*& GlobalNamespace::MicroSplatMeshTerrain::__cordl_internal_get_OnMaterialSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMaterialSync;
}
constexpr ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync* const& GlobalNamespace::MicroSplatMeshTerrain::__cordl_internal_get_OnMaterialSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMaterialSync;
}
constexpr void GlobalNamespace::MicroSplatMeshTerrain::__cordl_internal_set_OnMaterialSync(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMaterialSync = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GlobalNamespace::MicroSplatMeshTerrain::__cordl_internal_get_meshTerrains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshTerrains;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GlobalNamespace::MicroSplatMeshTerrain::__cordl_internal_get_meshTerrains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshTerrains;
}
constexpr void GlobalNamespace::MicroSplatMeshTerrain::__cordl_internal_set_meshTerrains(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshTerrains = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& GlobalNamespace::MicroSplatMeshTerrain::__cordl_internal_get_controlTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& GlobalNamespace::MicroSplatMeshTerrain::__cordl_internal_get_controlTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlTextures;
}
constexpr void GlobalNamespace::MicroSplatMeshTerrain::__cordl_internal_set_controlTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlTextures = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MicroSplatMeshTerrain::__cordl_internal_get_meshBlendMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshBlendMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MicroSplatMeshTerrain::__cordl_internal_get_meshBlendMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshBlendMat;
}
constexpr void GlobalNamespace::MicroSplatMeshTerrain::__cordl_internal_set_meshBlendMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshBlendMat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MicroSplatMeshTerrain::__cordl_internal_get_meshBlendMatInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshBlendMatInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MicroSplatMeshTerrain::__cordl_internal_get_meshBlendMatInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshBlendMatInstance;
}
constexpr void GlobalNamespace::MicroSplatMeshTerrain::__cordl_internal_set_meshBlendMatInstance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshBlendMatInstance = value;
}
constexpr ::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor& GlobalNamespace::MicroSplatMeshTerrain::__cordl_internal_get_terrainDescriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainDescriptor;
}
constexpr ::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor const& GlobalNamespace::MicroSplatMeshTerrain::__cordl_internal_get_terrainDescriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainDescriptor;
}
constexpr void GlobalNamespace::MicroSplatMeshTerrain::__cordl_internal_set_terrainDescriptor(::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainDescriptor = value;
}
inline void GlobalNamespace::MicroSplatMeshTerrain::setStaticF_OnMaterialSyncAll(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*, "OnMaterialSyncAll", ::GlobalNamespace::MicroSplatMeshTerrain*>(std::forward<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*>(value));
}
inline ::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll* GlobalNamespace::MicroSplatMeshTerrain::getStaticF_OnMaterialSyncAll()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*, "OnMaterialSyncAll", ::GlobalNamespace::MicroSplatMeshTerrain*>();
}
inline void GlobalNamespace::MicroSplatMeshTerrain::setStaticF_sInstances(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MicroSplatMeshTerrain>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MicroSplatMeshTerrain>>*, "sInstances", ::GlobalNamespace::MicroSplatMeshTerrain*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MicroSplatMeshTerrain>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MicroSplatMeshTerrain>>* GlobalNamespace::MicroSplatMeshTerrain::getStaticF_sInstances()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MicroSplatMeshTerrain>>*, "sInstances", ::GlobalNamespace::MicroSplatMeshTerrain*>();
}
inline void GlobalNamespace::MicroSplatMeshTerrain::add_OnMaterialSyncAll(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"add_OnMaterialSyncAll", {}, {::i2c::type_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::MicroSplatMeshTerrain::remove_OnMaterialSyncAll(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"remove_OnMaterialSyncAll", {}, {::i2c::type_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSyncAll*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::MicroSplatMeshTerrain::add_OnMaterialSync(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"add_OnMaterialSync", {}, {::i2c::type_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MicroSplatMeshTerrain::remove_OnMaterialSync(::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"remove_OnMaterialSync", {}, {::i2c::type_of<::GlobalNamespace::MicroSplatMeshTerrain_MaterialSync*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MicroSplatMeshTerrain::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor GlobalNamespace::MicroSplatMeshTerrain::GetTerrainDescriptor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor>(this, ___internal_method);
}
inline void GlobalNamespace::MicroSplatMeshTerrain::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MicroSplatMeshTerrain::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MicroSplatMeshTerrain::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"Cleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MicroSplatMeshTerrain::SyncMeshBlendMat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"SyncMeshBlendMat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::MicroSplatMeshTerrain::GetMeshBlendMatInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"GetMeshBlendMatInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void GlobalNamespace::MicroSplatMeshTerrain::ApplyMeshBlendMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"ApplyMeshBlendMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MicroSplatMeshTerrain::Sync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"Sync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bounds GlobalNamespace::MicroSplatMeshTerrain::GetBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void GlobalNamespace::MicroSplatMeshTerrain::SyncAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {"SyncAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MicroSplatMeshTerrain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MicroSplatMeshTerrain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MicroSplatMeshTerrain* GlobalNamespace::MicroSplatMeshTerrain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MicroSplatMeshTerrain*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MicroSplatMeshTerrain::MicroSplatMeshTerrain()   {
}
