#pragma once
// IWYU pragma private; include "JBooth/MicroSplat/MicroSplatTerrain.hpp"
#include "JBooth/MicroSplat/zzzz__MicroSplatObject_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "JBooth/MicroSplat/zzzz__MicroSplatTerrain_def.hpp"
#include "JBooth/MicroSplat/zzzz__MicroSplatObject_def.hpp"
#include "JBooth/MicroSplat/zzzz__MicroSplatTerrain_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll::*)(::System::Object*, ::System::IntPtr)>(&::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18057e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll::*)()>(&::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll::Invoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*>(),
                    {::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll::*)(::System::AsyncCallback*, ::System::Object*)>(&::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18057e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*>(),
                    {::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll::*)(::System::IAsyncResult*)>(&::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*>(),
                    {::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll* JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*>(object, method));
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll::MicroSplatTerrain_MaterialSyncAll()   {
}
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync::*)(::System::Object*, ::System::IntPtr)>(&::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803e3c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync::*)(::UnityEngine::Material*)>(&::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*>(),
                    {::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync::*)(::UnityEngine::Material*, ::System::AsyncCallback*, ::System::Object*)>(&::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync::BeginInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*>(),
                    {::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync::*)(::System::IAsyncResult*)>(&::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*>(),
                    {::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void JBooth::MicroSplat::MicroSplatTerrain_MaterialSync::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void JBooth::MicroSplat::MicroSplatTerrain_MaterialSync::Invoke(::UnityEngine::Material*  m)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m);
}
inline ::System::IAsyncResult* JBooth::MicroSplat::MicroSplatTerrain_MaterialSync::BeginInvoke(::UnityEngine::Material*  m, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, m, callback, object);
}
inline void JBooth::MicroSplat::MicroSplatTerrain_MaterialSync::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync* JBooth::MicroSplat::MicroSplatTerrain_MaterialSync::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*>(object, method));
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync::MicroSplatTerrain_MaterialSync()   {
}
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain.add_OnMaterialSyncAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*)>(&::JBooth::MicroSplat::MicroSplatTerrain::add_OnMaterialSyncAll)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181402700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"add_OnMaterialSyncAll", {}, {::i2c::type_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain.remove_OnMaterialSyncAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*)>(&::JBooth::MicroSplat::MicroSplatTerrain::remove_OnMaterialSyncAll)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181402840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"remove_OnMaterialSyncAll", {}, {::i2c::type_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain.add_OnMaterialSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatTerrain::*)(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*)>(&::JBooth::MicroSplat::MicroSplatTerrain::add_OnMaterialSync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814027b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"add_OnMaterialSync", {}, {::i2c::type_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain.remove_OnMaterialSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatTerrain::*)(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*)>(&::JBooth::MicroSplat::MicroSplatTerrain::remove_OnMaterialSync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814028f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"remove_OnMaterialSync", {}, {::i2c::type_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatTerrain::*)()>(&::JBooth::MicroSplat::MicroSplatTerrain::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181401dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatTerrain::*)()>(&::JBooth::MicroSplat::MicroSplatTerrain::OnEnable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181402040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatTerrain::*)()>(&::JBooth::MicroSplat::MicroSplatTerrain::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181402110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatTerrain::*)()>(&::JBooth::MicroSplat::MicroSplatTerrain::OnDisable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181401f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatTerrain::*)()>(&::JBooth::MicroSplat::MicroSplatTerrain::Cleanup)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181401df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"Cleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain.GetTerrainDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor (::JBooth::MicroSplat::MicroSplatTerrain::*)()>(&::JBooth::MicroSplat::MicroSplatTerrain::GetTerrainDescriptor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181401ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                    {::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain.Sync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatTerrain::*)()>(&::JBooth::MicroSplat::MicroSplatTerrain::Sync)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x1814021c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"Sync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::JBooth::MicroSplat::MicroSplatTerrain::*)()>(&::JBooth::MicroSplat::MicroSplatTerrain::GetBounds)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181401e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                    {::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain.SyncAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::JBooth::MicroSplat::MicroSplatTerrain::SyncAll)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181402120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"SyncAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatTerrain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatTerrain::*)()>(&::JBooth::MicroSplat::MicroSplatTerrain::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814026d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_OnMaterialSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMaterialSync;
}
constexpr ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync* const& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_OnMaterialSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMaterialSync;
}
constexpr void JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_set_OnMaterialSync(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMaterialSync = value;
}
constexpr ::UnityW<::UnityEngine::Terrain>& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_terrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrain;
}
constexpr ::UnityW<::UnityEngine::Terrain> const& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_terrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrain;
}
constexpr void JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_set_terrain(::UnityW<::UnityEngine::Terrain>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrain = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_baseMapShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseMapShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_baseMapShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseMapShader;
}
constexpr void JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_set_baseMapShader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseMapShader = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_customControl0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customControl0;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_customControl0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customControl0;
}
constexpr void JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_set_customControl0(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customControl0 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_customControl1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customControl1;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_customControl1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customControl1;
}
constexpr void JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_set_customControl1(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customControl1 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_customControl2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customControl2;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_customControl2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customControl2;
}
constexpr void JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_set_customControl2(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customControl2 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_customControl3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customControl3;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_customControl3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customControl3;
}
constexpr void JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_set_customControl3(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customControl3 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_customControl4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customControl4;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_customControl4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customControl4;
}
constexpr void JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_set_customControl4(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customControl4 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_customControl5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customControl5;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_customControl5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customControl5;
}
constexpr void JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_set_customControl5(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customControl5 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_customControl6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customControl6;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_customControl6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customControl6;
}
constexpr void JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_set_customControl6(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customControl6 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_customControl7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customControl7;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_customControl7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customControl7;
}
constexpr void JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_set_customControl7(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customControl7 = value;
}
constexpr ::UnityEngine::Vector3& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_patchBoundsMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patchBoundsMultiplier;
}
constexpr ::UnityEngine::Vector3 const& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_patchBoundsMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patchBoundsMultiplier;
}
constexpr void JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_set_patchBoundsMultiplier(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patchBoundsMultiplier = value;
}
constexpr bool& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_reenabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reenabled;
}
constexpr bool const& JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_get_reenabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reenabled;
}
constexpr void JBooth::MicroSplat::MicroSplatTerrain::__cordl_internal_set_reenabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reenabled = value;
}
inline void JBooth::MicroSplat::MicroSplatTerrain::setStaticF_OnMaterialSyncAll(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*  value)  {
::cordl_internals::setStaticField<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*, "OnMaterialSyncAll", ::JBooth::MicroSplat::MicroSplatTerrain*>(std::forward<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*>(value));
}
inline ::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll* JBooth::MicroSplat::MicroSplatTerrain::getStaticF_OnMaterialSyncAll()  {
return ::cordl_internals::getStaticField<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*, "OnMaterialSyncAll", ::JBooth::MicroSplat::MicroSplatTerrain*>();
}
inline void JBooth::MicroSplat::MicroSplatTerrain::setStaticF_sInstances(::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroSplat::MicroSplatTerrain>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroSplat::MicroSplatTerrain>>*, "sInstances", ::JBooth::MicroSplat::MicroSplatTerrain*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroSplat::MicroSplatTerrain>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroSplat::MicroSplatTerrain>>* JBooth::MicroSplat::MicroSplatTerrain::getStaticF_sInstances()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroSplat::MicroSplatTerrain>>*, "sInstances", ::JBooth::MicroSplat::MicroSplatTerrain*>();
}
inline void JBooth::MicroSplat::MicroSplatTerrain::add_OnMaterialSyncAll(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"add_OnMaterialSyncAll", {}, {::i2c::type_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void JBooth::MicroSplat::MicroSplatTerrain::remove_OnMaterialSyncAll(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"remove_OnMaterialSyncAll", {}, {::i2c::type_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSyncAll*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void JBooth::MicroSplat::MicroSplatTerrain::add_OnMaterialSync(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"add_OnMaterialSync", {}, {::i2c::type_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void JBooth::MicroSplat::MicroSplatTerrain::remove_OnMaterialSync(::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"remove_OnMaterialSync", {}, {::i2c::type_of<::JBooth::MicroSplat::MicroSplatTerrain_MaterialSync*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void JBooth::MicroSplat::MicroSplatTerrain::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroSplat::MicroSplatTerrain::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroSplat::MicroSplatTerrain::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroSplat::MicroSplatTerrain::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroSplat::MicroSplatTerrain::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"Cleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor JBooth::MicroSplat::MicroSplatTerrain::GetTerrainDescriptor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor>(this, ___internal_method);
}
inline void JBooth::MicroSplat::MicroSplatTerrain::Sync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"Sync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bounds JBooth::MicroSplat::MicroSplatTerrain::GetBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void JBooth::MicroSplat::MicroSplatTerrain::SyncAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {"SyncAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void JBooth::MicroSplat::MicroSplatTerrain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatTerrain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroSplat::MicroSplatTerrain* JBooth::MicroSplat::MicroSplatTerrain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroSplat::MicroSplatTerrain*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::MicroSplatTerrain::MicroSplatTerrain()   {
}
