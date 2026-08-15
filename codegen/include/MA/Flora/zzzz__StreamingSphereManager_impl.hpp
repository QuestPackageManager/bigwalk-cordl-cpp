#pragma once
// IWYU pragma private; include "MA/Flora/StreamingSphereManager.hpp"
#include "MA/Flora/zzzz__EntityObjectRef_1_impl.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeHashMap_2_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/zzzz__BoundingSphere_impl.hpp"
#include "MA/Flora/zzzz__StreamingSphereManager_def.hpp"
#include "MA/Flora/zzzz__EntityObjectRef_1_def.hpp"
#include "MA/Flora/zzzz__StreamingSphereManager_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
// Ctor Parameters [CppParam { name: "Valid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "LastUsedFrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Camera", ty: "::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Camera>>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::StreamingSphereManager_StreamingIndex::StreamingSphereManager_StreamingIndex(bool  Valid, int32_t  LastUsedFrameIndex, ::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Camera>>  Camera) noexcept  {
this->Valid = Valid;
this->LastUsedFrameIndex = LastUsedFrameIndex;
this->Camera = Camera;
}
// Ctor Parameters []
constexpr ::MA::Flora::StreamingSphereManager_StreamingIndex::StreamingSphereManager_StreamingIndex()   {
}
//  Writing Method size for method: ::MA::Flora::StreamingSphereManager.get_StreamingSpheres
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere> (::MA::Flora::StreamingSphereManager::*)()>(&::MA::Flora::StreamingSphereManager::get_StreamingSpheres)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d83f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::StreamingSphereManager>(),
                        {"get_StreamingSpheres", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::StreamingSphereManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::StreamingSphereManager::*)()>(&::MA::Flora::StreamingSphereManager::Initialize)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1814d7e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::StreamingSphereManager>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::StreamingSphereManager.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::StreamingSphereManager::*)()>(&::MA::Flora::StreamingSphereManager::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d7e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::StreamingSphereManager>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::StreamingSphereManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::StreamingSphereManager::*)()>(&::MA::Flora::StreamingSphereManager::Update)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814d8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::StreamingSphereManager>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::StreamingSphereManager.UpdateCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::StreamingSphereManager::*)(::UnityEngine::Camera*)>(&::MA::Flora::StreamingSphereManager::UpdateCamera)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1814d80a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::StreamingSphereManager>(),
                        {"UpdateCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::StreamingSphereManager.RemoveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::StreamingSphereManager::*)(::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Camera>>)>(&::MA::Flora::StreamingSphereManager::RemoveCamera)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814d7ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::StreamingSphereManager>(),
                        {"RemoveCamera", {}, {::i2c::type_of<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Camera>>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere> MA::Flora::StreamingSphereManager::get_StreamingSpheres()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::StreamingSphereManager>(),
                        {"get_StreamingSpheres", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere>>(*this, ___internal_method);
}
inline void MA::Flora::StreamingSphereManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::StreamingSphereManager>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::StreamingSphereManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::StreamingSphereManager>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::StreamingSphereManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::StreamingSphereManager>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::StreamingSphereManager::UpdateCamera(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::StreamingSphereManager>(),
                        {"UpdateCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, camera);
}
inline void MA::Flora::StreamingSphereManager::RemoveCamera(::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Camera>>  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::StreamingSphereManager>(),
                        {"RemoveCamera", {}, {::i2c::type_of<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Camera>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, camera);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::StreamingSphereManager::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::StreamingSphereManager::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_StreamingSphereIndexByCamera", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Camera>>,int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Slots", ty: "::Unity::Collections::NativeList_1<::MA::Flora::StreamingSphereManager_StreamingIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StreamingSpheres", ty: "::Unity::Collections::NativeList_1<::UnityEngine::BoundingSphere>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StreamingSphereFixedMoveDistance", ty: "::Unity::Collections::NativeList_1<uint16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StreamingSphereBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::StreamingSphereManager::StreamingSphereManager(::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Camera>>,int32_t>  m_StreamingSphereIndexByCamera, ::Unity::Collections::NativeList_1<::MA::Flora::StreamingSphereManager_StreamingIndex>  m_Slots, ::Unity::Collections::NativeList_1<::UnityEngine::BoundingSphere>  m_StreamingSpheres, ::Unity::Collections::NativeList_1<uint16_t>  m_StreamingSphereFixedMoveDistance, ::MA::Flora::GraphicsBufferRef  m_StreamingSphereBuffer, int32_t  m_FrameIndex) noexcept  {
this->m_StreamingSphereIndexByCamera = m_StreamingSphereIndexByCamera;
this->m_Slots = m_Slots;
this->m_StreamingSpheres = m_StreamingSpheres;
this->m_StreamingSphereFixedMoveDistance = m_StreamingSphereFixedMoveDistance;
this->m_StreamingSphereBuffer = m_StreamingSphereBuffer;
this->m_FrameIndex = m_FrameIndex;
}
// Ctor Parameters []
constexpr ::MA::Flora::StreamingSphereManager::StreamingSphereManager()   {
}
