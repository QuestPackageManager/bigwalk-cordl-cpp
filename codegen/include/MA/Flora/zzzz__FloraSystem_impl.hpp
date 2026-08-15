#pragma once
// IWYU pragma private; include "MA/Flora/FloraSystem.hpp"
#include "MA/Flora/zzzz__FloraRenderPipelineType_impl.hpp"
#include "MA/Flora/zzzz__InstanceContext_impl.hpp"
#include "MA/Flora/zzzz__ResolvedSystemSettings_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "MA/Flora/zzzz__FloraSystem_def.hpp"
#include "MA/Flora/zzzz__CullingGrid_def.hpp"
#include "MA/Flora/zzzz__CullingSystem_def.hpp"
#include "MA/Flora/zzzz__DetailInTerrain_def.hpp"
#include "MA/Flora/zzzz__FloraCullingPipeline_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceContainer_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceFilter_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceRenderer_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceTransform_def.hpp"
#include "MA/Flora/zzzz__FloraLocalToWorld_def.hpp"
#include "MA/Flora/zzzz__FloraRenderPipelineType_def.hpp"
#include "MA/Flora/zzzz__FloraRenderPipeline_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeResources_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeSettings_def.hpp"
#include "MA/Flora/zzzz__FloraSystem_def.hpp"
#include "MA/Flora/zzzz__InstanceInContainer_def.hpp"
#include "MA/Flora/zzzz__InstanceManager_def.hpp"
#include "MA/Flora/zzzz__InstanceRendererManager_def.hpp"
#include "MA/Flora/zzzz__InstanceTag_def.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_def.hpp"
#include "MA/Flora/zzzz__TreeInTerrain_def.hpp"
#include "MA/InternalBridge/zzzz__UnityObjectDispatcher_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap_2_def.hpp"
#include "Unity/Collections/zzzz__RewindableAllocator_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutput_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererGroup_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__TerrainChangedFlags_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters []
constexpr ::MA::Flora::FloraSystem_FloraBeginFrame::FloraSystem_FloraBeginFrame()   {
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSystem_FloraPostLateUpdate::FloraSystem_FloraPostLateUpdate()   {
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSystem_FloraEndFrame::FloraSystem_FloraEndFrame()   {
}
//  Writing Method size for method: ::MA::Flora::FloraSystem_TransformChangedAction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem_TransformChangedAction::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::FloraSystem_TransformChangedAction::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180539220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem_TransformChangedAction*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem_TransformChangedAction.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem_TransformChangedAction::*)(int32_t)>(&::MA::Flora::FloraSystem_TransformChangedAction::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSystem_TransformChangedAction*>(),
                    {::i2c::class_of<::MA::Flora::FloraSystem_TransformChangedAction*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem_TransformChangedAction.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::FloraSystem_TransformChangedAction::*)(int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::FloraSystem_TransformChangedAction::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805aae60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSystem_TransformChangedAction*>(),
                    {::i2c::class_of<::MA::Flora::FloraSystem_TransformChangedAction*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem_TransformChangedAction.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem_TransformChangedAction::*)(::System::IAsyncResult*)>(&::MA::Flora::FloraSystem_TransformChangedAction::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSystem_TransformChangedAction*>(),
                    {::i2c::class_of<::MA::Flora::FloraSystem_TransformChangedAction*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraSystem_TransformChangedAction::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem_TransformChangedAction*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void MA::Flora::FloraSystem_TransformChangedAction::Invoke(int32_t  instanceID)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSystem_TransformChangedAction*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceID);
}
inline ::System::IAsyncResult* MA::Flora::FloraSystem_TransformChangedAction::BeginInvoke(int32_t  instanceID, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSystem_TransformChangedAction*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, instanceID, callback, object);
}
inline void MA::Flora::FloraSystem_TransformChangedAction::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::FloraSystem_TransformChangedAction*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::MA::Flora::FloraSystem_TransformChangedAction* MA::Flora::FloraSystem_TransformChangedAction::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraSystem_TransformChangedAction*>(object, method));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSystem_TransformChangedAction::FloraSystem_TransformChangedAction()   {
}
//  Writing Method size for method: ::MA::Flora::FloraSystem.CleanupSystemBeforeSceneLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::FloraSystem::CleanupSystemBeforeSceneLoad)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814e8310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CleanupSystemBeforeSceneLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.RegisterUnloadOrPlayModeChangeShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::FloraSystem::RegisterUnloadOrPlayModeChangeShutdown)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x1814ee1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RegisterUnloadOrPlayModeChangeShutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.DomainUnloadOrPlayModeChangeShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::FloraSystem::DomainUnloadOrPlayModeChangeShutdown)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x1814e9030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"DomainUnloadOrPlayModeChangeShutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnActiveRenderPipelineCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::FloraSystem::OnActiveRenderPipelineCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814ecfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnActiveRenderPipelineCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnActiveRenderPipelineDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::FloraSystem::OnActiveRenderPipelineDisposed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814ecfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnActiveRenderPipelineDisposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnBeginContextRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*)>(&::MA::Flora::FloraSystem::OnBeginContextRendering)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814ed1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnBeginContextRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnBeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::MA::Flora::FloraSystem::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814ed020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnEndCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::MA::Flora::FloraSystem::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814ed250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnEndContextRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*)>(&::MA::Flora::FloraSystem::OnEndContextRendering)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814ed2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnEndContextRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.EditorRequiresFrameUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::EditorRequiresFrameUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"EditorRequiresFrameUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.SetEditorDataChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::SetEditorDataChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetEditorDataChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceHandle (::MA::Flora::FloraSystem::*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::Unity::Mathematics::float4x4)>(&::MA::Flora::FloraSystem::CreateInstance)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814e8680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceHandle (::MA::Flora::FloraSystem::*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::MA::Flora::FloraInstanceTransform)>(&::MA::Flora::FloraSystem::CreateInstance)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814e85d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceHandle (::MA::Flora::FloraSystem::*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::MA::Flora::FloraSystem::CreateInstance)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1814e8460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.CreateInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>)>(&::MA::Flora::FloraSystem::CreateInstances)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814e8b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateInstances", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.CreateInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>)>(&::MA::Flora::FloraSystem::CreateInstances)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814e8bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateInstances", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.CreateInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>)>(&::MA::Flora::FloraSystem::CreateInstances)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814e8820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateInstances", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.CreateInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>)>(&::MA::Flora::FloraSystem::CreateInstances)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814e8900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateInstances", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.CreateInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>)>(&::MA::Flora::FloraSystem::CreateInstances)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814e8a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateInstances", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.CreateInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>)>(&::MA::Flora::FloraSystem::CreateInstances)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814e8730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateInstances", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.InstantiateInstanceRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::MA::Flora::FloraInstanceRenderer> (::MA::Flora::FloraSystem::*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::MA::Flora::FloraSystem::InstantiateInstanceRenderer)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1814ec940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"InstantiateInstanceRenderer", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.DestroyInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::DestroyInstance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814e8cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"DestroyInstance", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.DestroyInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>)>(&::MA::Flora::FloraSystem::DestroyInstances)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814e8d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"DestroyInstances", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.InstanceExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::InstanceExists)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814ec8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"InstanceExists", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.IsInstanceEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::IsInstanceEnabled)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814ecb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"IsInstanceEnabled", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.SetInstanceEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle, bool)>(&::MA::Flora::FloraSystem::SetInstanceEnabled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814eeb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetInstanceEnabled", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.SetInstancesEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, bool)>(&::MA::Flora::FloraSystem::SetInstancesEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814eecd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetInstancesEnabled", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceIdentitySource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetInstanceIdentitySource)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814eb280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceIdentitySource", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceRenderSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetInstanceRenderSource)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814ebcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceRenderSource", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceOwnerGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetInstanceOwnerGameObject)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814eb930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceOwnerGameObject", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceOwnerTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetInstanceOwnerTransform)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814eaca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceOwnerTransform", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceOwnerTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Terrain> (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetInstanceOwnerTerrain)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814eba20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceOwnerTerrain", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceTerrainTreeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetInstanceTerrainTreeIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814ebde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceTerrainTreeIndex", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetTreeInstanceHandles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::UnityEngine::Terrain*, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::GetTreeInstanceHandles)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814ec3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetTreeInstanceHandles", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetTreeInstanceHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceHandle (::MA::Flora::FloraSystem::*)(::UnityEngine::Terrain*, int32_t)>(&::MA::Flora::FloraSystem::GetTreeInstanceHandle)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814ec2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetTreeInstanceHandle", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceVariationColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetInstanceVariationColor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814ebe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceVariationColor", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.SetInstanceVariationColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle, ::Unity::Mathematics::float4)>(&::MA::Flora::FloraSystem::SetInstanceVariationColor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814eec30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetInstanceVariationColor", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.SetInstanceVariationColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>)>(&::MA::Flora::FloraSystem::SetInstanceVariationColors)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814eec80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetInstanceVariationColors", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstancePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetInstancePosition)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814eba90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstancePosition", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceLocalToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraLocalToWorld (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetInstanceLocalToWorld)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814eb720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceLocalToWorld", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceLocalToWorldMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4x4 (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetInstanceLocalToWorldMatrix)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814eb600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceLocalToWorldMatrix", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceWorldTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceTransform (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetInstanceWorldTransform)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1814ebf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceWorldTransform", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceLocalToWorlds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld> (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::GetInstanceLocalToWorlds)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814eb820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceLocalToWorlds", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceLocalToWorldMatrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::GetInstanceLocalToWorldMatrices)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1814eb4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceLocalToWorldMatrices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceWorldTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform> (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::GetInstanceWorldTransforms)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814ec080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceWorldTransforms", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstancePositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::GetInstancePositions)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814ebbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstancePositions", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.UpdateInstanceLocalToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle, ::MA::Flora::FloraLocalToWorld)>(&::MA::Flora::FloraSystem::UpdateInstanceLocalToWorld)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814efe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateInstanceLocalToWorld", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::FloraLocalToWorld>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.UpdateInstanceLocalToWorldMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle, ::Unity::Mathematics::float4x4)>(&::MA::Flora::FloraSystem::UpdateInstanceLocalToWorldMatrix)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814efe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateInstanceLocalToWorldMatrix", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.UpdateInstanceLocalTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::UnityEngine::Transform*, ::MA::Flora::FloraInstanceHandle, ::MA::Flora::FloraInstanceTransform)>(&::MA::Flora::FloraSystem::UpdateInstanceLocalTransform)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1814efee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateInstanceLocalTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.UpdateInstanceWorldTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle, ::MA::Flora::FloraInstanceTransform)>(&::MA::Flora::FloraSystem::UpdateInstanceWorldTransform)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814f0260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateInstanceWorldTransform", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.UpdateInstanceLocalToWorlds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>)>(&::MA::Flora::FloraSystem::UpdateInstanceLocalToWorlds)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814efe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateInstanceLocalToWorlds", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.ScheduleUpdateInstanceLocalToWorlds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>, ::Unity::Jobs::JobHandle)>(&::MA::Flora::FloraSystem::ScheduleUpdateInstanceLocalToWorlds)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814ee890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"ScheduleUpdateInstanceLocalToWorlds", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.UpdateInstanceLocalToWorldMatrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>)>(&::MA::Flora::FloraSystem::UpdateInstanceLocalToWorldMatrices)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814efd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateInstanceLocalToWorldMatrices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.ScheduleUpdateInstanceLocalToWorldMatrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>, ::Unity::Jobs::JobHandle)>(&::MA::Flora::FloraSystem::ScheduleUpdateInstanceLocalToWorldMatrices)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814ee7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"ScheduleUpdateInstanceLocalToWorldMatrices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.UpdateInstanceWorldTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>)>(&::MA::Flora::FloraSystem::UpdateInstanceWorldTransforms)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814f0310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateInstanceWorldTransforms", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.ScheduleUpdateInstanceWorldTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>, ::Unity::Jobs::JobHandle)>(&::MA::Flora::FloraSystem::ScheduleUpdateInstanceWorldTransforms)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814eeaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"ScheduleUpdateInstanceWorldTransforms", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.UpdateInstanceLocalTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::UnityEngine::Transform*, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>)>(&::MA::Flora::FloraSystem::UpdateInstanceLocalTransforms)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814f0130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateInstanceLocalTransforms", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.ScheduleUpdateInstanceLocalTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::MA::Flora::FloraSystem::*)(::UnityEngine::Transform*, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>, ::Unity::Jobs::JobHandle)>(&::MA::Flora::FloraSystem::ScheduleUpdateInstanceLocalTransforms)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1814ee930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"ScheduleUpdateInstanceLocalTransforms", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetInstanceBounds)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814eb070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceBounds", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Bounds> (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::GetInstanceBounds)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814eb170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceBounds", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.CalculateInstanceBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>)>(&::MA::Flora::FloraSystem::CalculateInstanceBounds)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814e8090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CalculateInstanceBounds", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.CalculateInstanceBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Mathematics::float4x4)>(&::MA::Flora::FloraSystem::CalculateInstanceBounds)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814e7f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CalculateInstanceBounds", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.FindInstancesIntersectingSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::UnityEngine::BoundingSphere, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::FindInstancesIntersectingSphere)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814e9de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesIntersectingSphere", {}, {::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.FindInstancesIntersectingSphereMatching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceFilter, ::UnityEngine::BoundingSphere, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::FindInstancesIntersectingSphereMatching)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814e9c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesIntersectingSphereMatching", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.FindInstancesIntersectingSphereMatching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<int32_t>, ::UnityEngine::BoundingSphere, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::FindInstancesIntersectingSphereMatching)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814ea070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesIntersectingSphereMatching", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.FindInstancesIntersectingBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::UnityEngine::Bounds, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::FindInstancesIntersectingBounds)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1814e9970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesIntersectingBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.FindInstancesIntersectingBoundsMatching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceFilter, ::UnityEngine::Bounds, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::FindInstancesIntersectingBoundsMatching)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1814e95f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesIntersectingBoundsMatching", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.FindInstancesIntersectingBoundsMatching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<int32_t>, ::UnityEngine::Bounds, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::FindInstancesIntersectingBoundsMatching)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1814e9e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesIntersectingBoundsMatching", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.IsTerrainRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraSystem::*)(::UnityEngine::Terrain*)>(&::MA::Flora::FloraSystem::IsTerrainRegistered)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814ecf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"IsTerrainRegistered", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.RegisterTerrains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::RegisterTerrains)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814edfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RegisterTerrains", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.RegisterTerrains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::ArrayW<::UnityEngine::Terrain*>)>(&::MA::Flora::FloraSystem::RegisterTerrains)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1814ee030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RegisterTerrains", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.RegisterTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::UnityEngine::Terrain*)>(&::MA::Flora::FloraSystem::RegisterTerrain)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814edea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RegisterTerrain", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.UnregisterTerrains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::UnregisterTerrains)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1814efbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UnregisterTerrains", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.UnregisterTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::UnityEngine::Terrain*)>(&::MA::Flora::FloraSystem::UnregisterTerrain)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814efb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UnregisterTerrain", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.UnregisterTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::UnityEngine::EntityId)>(&::MA::Flora::FloraSystem::UnregisterTerrain)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814efae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UnregisterTerrain", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetActiveTerrains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*)>(&::MA::Flora::FloraSystem::GetActiveTerrains)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814eab10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetActiveTerrains", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetActiveContainers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceContainer>>*)>(&::MA::Flora::FloraSystem::GetActiveContainers)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814ea8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetActiveContainers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceContainer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetActiveRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceRenderer>>*)>(&::MA::Flora::FloraSystem::GetActiveRenderers)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814eaa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetActiveRenderers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceRenderer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.RegisterInstanceContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceContainer*)>(&::MA::Flora::FloraSystem::RegisterInstanceContainer)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1814ed870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RegisterInstanceContainer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.UnregisterInstanceContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceContainer*)>(&::MA::Flora::FloraSystem::UnregisterInstanceContainer)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814ef860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UnregisterInstanceContainer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.CreateContainerInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceHandle (::MA::Flora::FloraSystem::*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::UnityEngine::EntityId, ::MA::Flora::FloraInstanceTransform)>(&::MA::Flora::FloraSystem::CreateContainerInstance)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814e8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateContainerInstance", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.CreateContainerInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::UnityEngine::EntityId, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>)>(&::MA::Flora::FloraSystem::CreateContainerInstances)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814e83d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateContainerInstances", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.AppendTrackedContainerInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::UnityEngine::EntityId, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>)>(&::MA::Flora::FloraSystem::AppendTrackedContainerInstances)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814e7e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"AppendTrackedContainerInstances", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.UpdateTrackedContainerLocalTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::UnityEngine::EntityId, int32_t, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>)>(&::MA::Flora::FloraSystem::UpdateTrackedContainerLocalTransforms)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814f06c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateTrackedContainerLocalTransforms", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.UpdateTrackedContainerLocalTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::UnityEngine::EntityId, ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>)>(&::MA::Flora::FloraSystem::UpdateTrackedContainerLocalTransforms)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814f0720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateTrackedContainerLocalTransforms", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.RemoveTrackedContainerInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::UnityEngine::EntityId, int32_t)>(&::MA::Flora::FloraSystem::RemoveTrackedContainerInstance)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814ee7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RemoveTrackedContainerInstance", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.ClearTrackedContainerInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::UnityEngine::EntityId)>(&::MA::Flora::FloraSystem::ClearTrackedContainerInstances)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814e8320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"ClearTrackedContainerInstances", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.RegisterInstanceRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceRenderer*)>(&::MA::Flora::FloraSystem::RegisterInstanceRenderer)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x1814eda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RegisterInstanceRenderer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.UnregisterInstanceRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceRenderer*)>(&::MA::Flora::FloraSystem::UnregisterInstanceRenderer)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1814ef940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UnregisterInstanceRenderer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.RefreshInstanceRendererRenderSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::RefreshInstanceRendererRenderSources)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1814ed6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RefreshInstanceRendererRenderSources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.EnableUnityTerrainRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::EnableUnityTerrainRendering)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814e9520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"EnableUnityTerrainRendering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.DisableUnityTerrainRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::DisableUnityTerrainRendering)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814e8e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"DisableUnityTerrainRendering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.ApplyTerrainFoliageOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Terrain*, bool)>(&::MA::Flora::FloraSystem::ApplyTerrainFoliageOwnership)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814e7ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"ApplyTerrainFoliageOwnership", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.EnableUnityRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::EnableUnityRenderers)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814e9460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"EnableUnityRenderers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.DisableUnityRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::DisableUnityRenderers)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814e8d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"DisableUnityRenderers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.FindInstancesInPlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::FindInstancesInPlanes)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814e9b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesInPlanes", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.FindInstancesInPlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::MA::Flora::InstanceTag, ::MA::Flora::InstanceTag, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::FindInstancesInPlanes)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814e9bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesInPlanes", {}, {::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceRendererObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::MA::Flora::FloraSystem::GetInstanceRendererObjects)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814ebdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceRendererObjects", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceInContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::InstanceInContainer (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetInstanceInContainer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814eb370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceInContainer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetParentInstanceContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::MA::Flora::FloraInstanceContainer> (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetParentInstanceContainer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814ec1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetParentInstanceContainer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetIndexInInstanceContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetIndexInInstanceContainer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814eaf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetIndexInInstanceContainer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.SetInstanceInContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle, ::MA::Flora::FloraInstanceContainer*, int32_t)>(&::MA::Flora::FloraSystem::SetInstanceInContainer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814eebe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetInstanceInContainer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::FloraInstanceContainer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.SetInstanceInContainerIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::MA::Flora::FloraInstanceContainer*, int32_t)>(&::MA::Flora::FloraSystem::SetInstanceInContainerIndices)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814eeb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetInstanceInContainerIndices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::MA::Flora::FloraInstanceContainer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetContainerIndexMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,int32_t> (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::GetContainerIndexMap)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814eacf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetContainerIndexMap", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceInContainersWithIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::InstanceInContainer> (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::Allocator, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>)>(&::MA::Flora::FloraSystem::GetInstanceInContainersWithIndices)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814eb3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceInContainersWithIndices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetTreeInTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TreeInTerrain (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetTreeInTerrain)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814ec2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetTreeInTerrain", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.SetTerrainChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::UnityEngine::Terrain*, ::UnityEngine::TerrainChangedFlags)>(&::MA::Flora::FloraSystem::SetTerrainChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814eed20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetTerrainChanged", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::TerrainChangedFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetDetailInstanceMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeParallelMultiHashMap_2<::MA::Flora::DetailInTerrain,::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::GetDetailInstanceMap)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814eae70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetDetailInstanceMap", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetValidTreeInTerrains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain> (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::GetValidTreeInTerrains)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814ec620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetValidTreeInTerrains", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetValidTreeInTerrainsWithIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain> (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>, ::Unity::Collections::Allocator, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>)>(&::MA::Flora::FloraSystem::GetValidTreeInTerrainsWithIndices)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814ec500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetValidTreeInTerrainsWithIndices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::MA::Flora::FloraSystem::OnSceneLoaded)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814ed350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnSceneLoaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnSceneUnloaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene)>(&::MA::Flora::FloraSystem::OnSceneUnloaded)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814ed570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnSceneUnloaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnLightProbesUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::FloraSystem::OnLightProbesUpdated)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814ed350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnLightProbesUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnTerrainHeightmapChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Terrain*, ::UnityEngine::RectInt, bool)>(&::MA::Flora::FloraSystem::OnTerrainHeightmapChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814ed660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnTerrainHeightmapChanged", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.RebuildAmbientLighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::RebuildAmbientLighting)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814ed6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RebuildAmbientLighting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.SetTerrainHeightmapChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::UnityEngine::Terrain*)>(&::MA::Flora::FloraSystem::SetTerrainHeightmapChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814eeda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetTerrainHeightmapChanged", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.SetupPlayerLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::FloraSystem::SetupPlayerLoop)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1814eee00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetupPlayerLoop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.TeardownPlayerLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::FloraSystem::TeardownPlayerLoop)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814ef500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"TeardownPlayerLoop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::FloraSystem::OnInitialization)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814ed330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnInitialization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnPostLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::FloraSystem::OnPostLateUpdate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814ed550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnPostLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnPostPostLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::FloraSystem::OnPostPostLateUpdate)> {
  constexpr static std::size_t size = 0xa670;
  constexpr static std::size_t addrs = 0x180631430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnPostPostLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.UpdateSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::UpdateSettings)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1814f0380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.FrameInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::FrameInitialization)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1814ea510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FrameInitialization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.FramePostLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::FramePostLateUpdate)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1814ea6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FramePostLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.RefreshTemplates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::RefreshTemplates)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814ed860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RefreshTemplates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.FramePostPostLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::FramePostPostLateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FramePostPostLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetCurrentRenderPipelineType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraRenderPipelineType (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::GetCurrentRenderPipelineType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814eae00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetCurrentRenderPipelineType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.SetupRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::SetupRendering)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x1814eef40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetupRendering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.TeardownRenderingIfEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::TeardownRenderingIfEmpty)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814ef550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"TeardownRenderingIfEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.TeardownRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::TeardownRendering)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1814ef5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"TeardownRendering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.ReinitializeCullingSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::ReinitializeCullingSystem)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1814ee580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"ReinitializeCullingSystem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.UpdateDebugDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::UpdateDebugDisplay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateDebugDisplay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnBeginContextRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*)>(&::MA::Flora::FloraSystem::OnBeginContextRendering)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814ed100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnBeginContextRendering", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnBeginCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::UnityEngine::Camera*)>(&::MA::Flora::FloraSystem::OnBeginCameraRendering)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814ed040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnEndCameraRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::UnityEngine::Camera*)>(&::MA::Flora::FloraSystem::OnEndCameraRendering)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814ed230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnEndContextRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*)>(&::MA::Flora::FloraSystem::OnEndContextRendering)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814ed280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnEndContextRendering", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnPerformBatchCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::MA::Flora::FloraSystem::*)(::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::Rendering::BatchCullingContext, ::UnityEngine::Rendering::BatchCullingOutput, ::System::IntPtr)>(&::MA::Flora::FloraSystem::OnPerformBatchCulling)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1814ed380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnPerformBatchCulling", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingContext>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingOutput>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.OnBatchCullingComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::System::IntPtr)>(&::MA::Flora::FloraSystem::OnBatchCullingComplete)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814ed000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnBatchCullingComplete", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.SetupTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::SetupTracking)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1814ef350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetupTracking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.TeardownTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::TeardownTracking)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814ef820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"TeardownTracking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.FlushTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::FlushTracking)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x1814ea140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FlushTracking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.UpdateTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::UpdateTracking)> {
  constexpr static std::size_t size = 0x1980;
  constexpr static std::size_t addrs = 0x1814f0790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateTracking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraSystem* (*)()>(&::MA::Flora::FloraSystem::get_Instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814f2cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::FloraSystem*)>(&::MA::Flora::FloraSystem::set_Instance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f3260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"set_Instance", {}, {::i2c::type_of<::MA::Flora::FloraSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::MA::Flora::FloraSystem::get_Exists)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814f2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_Exists", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::MA::Flora::FloraSystem::get_Active)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f2b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetOrCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraSystem* (*)()>(&::MA::Flora::FloraSystem::GetOrCreate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814ec190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetOrCreate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.InitializeIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::FloraSystem::InitializeIfNeeded)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1814ec730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"InitializeIfNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::FloraSystem::Shutdown)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814ecfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.Reinitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::FloraSystem::Reinitialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814ee760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"Reinitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.add_WasCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::MA::Flora::FloraSystem*>*)>(&::MA::Flora::FloraSystem::add_WasCreated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814f2930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"add_WasCreated", {}, {::i2c::type_of<::System::Action_1<::MA::Flora::FloraSystem*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.remove_WasCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::MA::Flora::FloraSystem*>*)>(&::MA::Flora::FloraSystem::remove_WasCreated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814f3040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"remove_WasCreated", {}, {::i2c::type_of<::System::Action_1<::MA::Flora::FloraSystem*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.add_WillBeDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::MA::Flora::FloraSystem*>*)>(&::MA::Flora::FloraSystem::add_WillBeDestroyed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814f29e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"add_WillBeDestroyed", {}, {::i2c::type_of<::System::Action_1<::MA::Flora::FloraSystem*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.remove_WillBeDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::MA::Flora::FloraSystem*>*)>(&::MA::Flora::FloraSystem::remove_WillBeDestroyed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814f30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"remove_WillBeDestroyed", {}, {::i2c::type_of<::System::Action_1<::MA::Flora::FloraSystem*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.add_DidStartRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::MA::Flora::FloraSystem*>*)>(&::MA::Flora::FloraSystem::add_DidStartRendering)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814f27f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"add_DidStartRendering", {}, {::i2c::type_of<::System::Action_1<::MA::Flora::FloraSystem*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.remove_DidStartRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::MA::Flora::FloraSystem*>*)>(&::MA::Flora::FloraSystem::remove_DidStartRendering)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814f2f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"remove_DidStartRendering", {}, {::i2c::type_of<::System::Action_1<::MA::Flora::FloraSystem*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.add_WillStopRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::MA::Flora::FloraSystem*>*)>(&::MA::Flora::FloraSystem::add_WillStopRendering)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814f2a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"add_WillStopRendering", {}, {::i2c::type_of<::System::Action_1<::MA::Flora::FloraSystem*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.remove_WillStopRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::MA::Flora::FloraSystem*>*)>(&::MA::Flora::FloraSystem::remove_WillStopRendering)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814f31a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"remove_WillStopRendering", {}, {::i2c::type_of<::System::Action_1<::MA::Flora::FloraSystem*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_RenderPipelineType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraRenderPipelineType (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_RenderPipelineType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_RenderPipelineType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.set_RenderPipelineType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraRenderPipelineType)>(&::MA::Flora::FloraSystem::set_RenderPipelineType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"set_RenderPipelineType", {}, {::i2c::type_of<::MA::Flora::FloraRenderPipelineType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_RenderingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_RenderingEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f2dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_RenderingEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_RenderTerrainFoliage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_RenderTerrainFoliage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f2dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_RenderTerrainFoliage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_AllowGPUOcclusionCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_AllowGPUOcclusionCulling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049c410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowGPUOcclusionCulling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_AllowDensityCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_AllowDensityCulling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814f2b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowDensityCulling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_AllowLegacyLightProbes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_AllowLegacyLightProbes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowLegacyLightProbes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_AllowPerTreeLightProbes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_AllowPerTreeLightProbes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049a520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowPerTreeLightProbes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_AllowPerDetailLightProbes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_AllowPerDetailLightProbes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f2bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowPerDetailLightProbes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_AllowPerObjectMotionVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_AllowPerObjectMotionVectors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowPerObjectMotionVectors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_AllowAdditionalLightShadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_AllowAdditionalLightShadows)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803e0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowAdditionalLightShadows", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_AllowPerTreeMotionVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_AllowPerTreeMotionVectors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803023c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowPerTreeMotionVectors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_AllowPerDetailMotionVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_AllowPerDetailMotionVectors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f2bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowPerDetailMotionVectors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_BatchRendererGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BatchRendererGroup* (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_BatchRendererGroup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_BatchRendererGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_Resources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraRuntimeResources* (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_Resources)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_Resources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_RegisteredInstanceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_RegisteredInstanceCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814f2cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_RegisteredInstanceCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_FrameAllocator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Collections::RewindableAllocator> (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_FrameAllocator)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f2c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_FrameAllocator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_InstanceManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager> (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_InstanceManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f2cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_InstanceManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_CullingGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid> (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_CullingGrid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_CullingGrid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_CullingSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::CullingSystem* (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_CullingSystem)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_CullingSystem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_AllowDensityCullingOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_AllowDensityCullingOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f2b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowDensityCullingOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.set_AllowDensityCullingOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)(bool)>(&::MA::Flora::FloraSystem::set_AllowDensityCullingOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f3250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"set_AllowDensityCullingOverride", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_HasInstancesOrObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_HasInstancesOrObjects)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814f2c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_HasInstancesOrObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::_ctor)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x1814f2240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::Dispose)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1814e8ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.IsSupportedOnSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::StringW>)>(&::MA::Flora::FloraSystem::IsSupportedOnSystem)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x1814ecc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"IsSupportedOnSystem", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.CheckGLVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::MA::Flora::FloraSystem::CheckGLVersion)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814e81e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CheckGLVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_CullingPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraCullingPipeline (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_CullingPipeline)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_CullingPipeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.get_MainLightOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Light> (::MA::Flora::FloraSystem::*)()>(&::MA::Flora::FloraSystem::get_MainLightOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_MainLightOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.add_BeginFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::MA::Flora::FloraSystem::add_BeginFrame)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814f26d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"add_BeginFrame", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.remove_BeginFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::MA::Flora::FloraSystem::remove_BeginFrame)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814f2de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"remove_BeginFrame", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.add_DelayCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::MA::Flora::FloraSystem::add_DelayCall)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814f2760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"add_DelayCall", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.remove_DelayCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::MA::Flora::FloraSystem::remove_DelayCall)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814f2e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"remove_DelayCall", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.add_PostLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::MA::Flora::FloraSystem::add_PostLateUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814f28a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"add_PostLateUpdate", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.remove_PostLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::MA::Flora::FloraSystem::remove_PostLateUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814f2fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"remove_PostLateUpdate", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstancePrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetInstancePrefab)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814eb280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstancePrefab", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetAuthoringGameObjectOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetAuthoringGameObjectOf)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814eac20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetAuthoringGameObjectOf", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetAuthoringTransformOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetAuthoringTransformOf)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814eaca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetAuthoringTransformOf", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetAuthoringTerrainOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Terrain> (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetAuthoringTerrainOf)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814eac30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetAuthoringTerrainOf", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.GetInstanceParentTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Terrain> (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::FloraSystem::GetInstanceParentTerrain)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814eac30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceParentTerrain", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.FindInstancesInSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::UnityEngine::BoundingSphere, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::FindInstancesInSphere)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814e9de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesInSphere", {}, {::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.FindInstancesInSphereMatching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceFilter, ::UnityEngine::BoundingSphere, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::FindInstancesInSphereMatching)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814e9c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesInSphereMatching", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.FindInstancesInSphereMatching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>, ::UnityEngine::BoundingSphere, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::FindInstancesInSphereMatching)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814e9d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesInSphereMatching", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.FindInstancesInBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::UnityEngine::Bounds, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::FindInstancesInBounds)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1814e9970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesInBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.FindInstancesInBoundsMatching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::MA::Flora::FloraInstanceFilter, ::UnityEngine::Bounds, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::FindInstancesInBoundsMatching)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1814e95f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesInBoundsMatching", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSystem.FindInstancesInBoundsMatching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> (::MA::Flora::FloraSystem::*)(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>, ::UnityEngine::Bounds, ::Unity::Collections::Allocator)>(&::MA::Flora::FloraSystem::FindInstancesInBoundsMatching)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1814e97b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesInBoundsMatching", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::HashSet_1<::MA::Flora::FloraSystem_TransformChangedAction*>*>*& MA::Flora::FloraSystem::__cordl_internal_get_m_TransformChangedActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TransformChangedActions;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::HashSet_1<::MA::Flora::FloraSystem_TransformChangedAction*>*>* const& MA::Flora::FloraSystem::__cordl_internal_get_m_TransformChangedActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TransformChangedActions;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_TransformChangedActions(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::HashSet_1<::MA::Flora::FloraSystem_TransformChangedAction*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TransformChangedActions = value;
}
constexpr ::MA::Flora::FloraRenderPipelineType& MA::Flora::FloraSystem::__cordl_internal_get__RenderPipelineType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderPipelineType_k__BackingField;
}
constexpr ::MA::Flora::FloraRenderPipelineType const& MA::Flora::FloraSystem::__cordl_internal_get__RenderPipelineType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderPipelineType_k__BackingField;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set__RenderPipelineType_k__BackingField(::MA::Flora::FloraRenderPipelineType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RenderPipelineType_k__BackingField = value;
}
constexpr ::MA::Flora::FloraRuntimeResources*& MA::Flora::FloraSystem::__cordl_internal_get_m_Resources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Resources;
}
constexpr ::MA::Flora::FloraRuntimeResources* const& MA::Flora::FloraSystem::__cordl_internal_get_m_Resources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Resources;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_Resources(::MA::Flora::FloraRuntimeResources*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Resources = value;
}
constexpr ::MA::Flora::FloraRuntimeSettings*& MA::Flora::FloraSystem::__cordl_internal_get_m_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr ::MA::Flora::FloraRuntimeSettings* const& MA::Flora::FloraSystem::__cordl_internal_get_m_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_Settings(::MA::Flora::FloraRuntimeSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Settings = value;
}
constexpr ::MA::Flora::ResolvedSystemSettings& MA::Flora::FloraSystem::__cordl_internal_get_m_ResolvedSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResolvedSettings;
}
constexpr ::MA::Flora::ResolvedSystemSettings const& MA::Flora::FloraSystem::__cordl_internal_get_m_ResolvedSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResolvedSettings;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_ResolvedSettings(::MA::Flora::ResolvedSystemSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ResolvedSettings = value;
}
constexpr ::UnityEngine::Rendering::BatchRendererGroup*& MA::Flora::FloraSystem::__cordl_internal_get_m_BatchRendererGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BatchRendererGroup;
}
constexpr ::UnityEngine::Rendering::BatchRendererGroup* const& MA::Flora::FloraSystem::__cordl_internal_get_m_BatchRendererGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BatchRendererGroup;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_BatchRendererGroup(::UnityEngine::Rendering::BatchRendererGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BatchRendererGroup = value;
}
constexpr ::UnityW<::UnityEngine::Material>& MA::Flora::FloraSystem::__cordl_internal_get_m_PickingMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PickingMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& MA::Flora::FloraSystem::__cordl_internal_get_m_PickingMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PickingMaterial;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_PickingMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PickingMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& MA::Flora::FloraSystem::__cordl_internal_get_m_LoadingMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadingMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& MA::Flora::FloraSystem::__cordl_internal_get_m_LoadingMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadingMaterial;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_LoadingMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadingMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& MA::Flora::FloraSystem::__cordl_internal_get_m_ErrorMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ErrorMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& MA::Flora::FloraSystem::__cordl_internal_get_m_ErrorMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ErrorMaterial;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_ErrorMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ErrorMaterial = value;
}
constexpr ::MA::Flora::InstanceRendererManager*& MA::Flora::FloraSystem::__cordl_internal_get_m_InstanceRendererManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceRendererManager;
}
constexpr ::MA::Flora::InstanceRendererManager* const& MA::Flora::FloraSystem::__cordl_internal_get_m_InstanceRendererManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceRendererManager;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_InstanceRendererManager(::MA::Flora::InstanceRendererManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InstanceRendererManager = value;
}
constexpr ::MA::Flora::CullingSystem*& MA::Flora::FloraSystem::__cordl_internal_get_m_CullingSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CullingSystem;
}
constexpr ::MA::Flora::CullingSystem* const& MA::Flora::FloraSystem::__cordl_internal_get_m_CullingSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CullingSystem;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_CullingSystem(::MA::Flora::CullingSystem*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CullingSystem = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::EntityId>*& MA::Flora::FloraSystem::__cordl_internal_get_m_DisabledTerrains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisabledTerrains;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::EntityId>* const& MA::Flora::FloraSystem::__cordl_internal_get_m_DisabledTerrains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisabledTerrains;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_DisabledTerrains(::System::Collections::Generic::HashSet_1<::UnityEngine::EntityId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DisabledTerrains = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::UnityEngine::Terrain>>*& MA::Flora::FloraSystem::__cordl_internal_get_m_Terrains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Terrains;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::UnityEngine::Terrain>>* const& MA::Flora::FloraSystem::__cordl_internal_get_m_Terrains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Terrains;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_Terrains(::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::UnityEngine::Terrain>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Terrains = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::MA::Flora::FloraInstanceContainer>>*& MA::Flora::FloraSystem::__cordl_internal_get_m_Containers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Containers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::MA::Flora::FloraInstanceContainer>>* const& MA::Flora::FloraSystem::__cordl_internal_get_m_Containers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Containers;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_Containers(::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::MA::Flora::FloraInstanceContainer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Containers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::MA::Flora::FloraInstanceRenderer>>*& MA::Flora::FloraSystem::__cordl_internal_get_m_InstanceRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceRenderers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::MA::Flora::FloraInstanceRenderer>>* const& MA::Flora::FloraSystem::__cordl_internal_get_m_InstanceRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceRenderers;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_InstanceRenderers(::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::MA::Flora::FloraInstanceRenderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InstanceRenderers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::System::Collections::Generic::HashSet_1<::UnityEngine::EntityId>*>*& MA::Flora::FloraSystem::__cordl_internal_get_m_InstanceRendererChildren()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceRendererChildren;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::System::Collections::Generic::HashSet_1<::UnityEngine::EntityId>*>* const& MA::Flora::FloraSystem::__cordl_internal_get_m_InstanceRendererChildren() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceRendererChildren;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_InstanceRendererChildren(::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::System::Collections::Generic::HashSet_1<::UnityEngine::EntityId>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InstanceRendererChildren = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::UnityEngine::Renderer>>*& MA::Flora::FloraSystem::__cordl_internal_get_m_Renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Renderers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::UnityEngine::Renderer>>* const& MA::Flora::FloraSystem::__cordl_internal_get_m_Renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Renderers;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_Renderers(::System::Collections::Generic::Dictionary_2<::UnityEngine::EntityId,::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Renderers = value;
}
constexpr ::MA::Flora::InstanceContext& MA::Flora::FloraSystem::__cordl_internal_get_m_NativeContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NativeContext;
}
constexpr ::MA::Flora::InstanceContext const& MA::Flora::FloraSystem::__cordl_internal_get_m_NativeContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NativeContext;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_NativeContext(::MA::Flora::InstanceContext  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NativeContext = value;
}
constexpr ::MA::Flora::FloraRenderPipeline*& MA::Flora::FloraSystem::__cordl_internal_get_m_RenderPipeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderPipeline;
}
constexpr ::MA::Flora::FloraRenderPipeline* const& MA::Flora::FloraSystem::__cordl_internal_get_m_RenderPipeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderPipeline;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_RenderPipeline(::MA::Flora::FloraRenderPipeline*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RenderPipeline = value;
}
constexpr ::MA::InternalBridge::UnityObjectDispatcher*& MA::Flora::FloraSystem::__cordl_internal_get_m_ObjectTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectTracker;
}
constexpr ::MA::InternalBridge::UnityObjectDispatcher* const& MA::Flora::FloraSystem::__cordl_internal_get_m_ObjectTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectTracker;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set_m_ObjectTracker(::MA::InternalBridge::UnityObjectDispatcher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ObjectTracker = value;
}
constexpr bool& MA::Flora::FloraSystem::__cordl_internal_get__AllowDensityCullingOverride_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowDensityCullingOverride_k__BackingField;
}
constexpr bool const& MA::Flora::FloraSystem::__cordl_internal_get__AllowDensityCullingOverride_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowDensityCullingOverride_k__BackingField;
}
constexpr void MA::Flora::FloraSystem::__cordl_internal_set__AllowDensityCullingOverride_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllowDensityCullingOverride_k__BackingField = value;
}
inline void MA::Flora::FloraSystem::setStaticF_s_UnloadOrPlayModeChangeShutdownRegistered(bool  value)  {
::cordl_internals::setStaticField<bool, "s_UnloadOrPlayModeChangeShutdownRegistered", ::MA::Flora::FloraSystem*>(std::forward<bool>(value));
}
inline bool MA::Flora::FloraSystem::getStaticF_s_UnloadOrPlayModeChangeShutdownRegistered()  {
return ::cordl_internals::getStaticField<bool, "s_UnloadOrPlayModeChangeShutdownRegistered", ::MA::Flora::FloraSystem*>();
}
inline void MA::Flora::FloraSystem::setStaticF_s_CurrentScriptableRenderContextID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_CurrentScriptableRenderContextID", ::MA::Flora::FloraSystem*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::FloraSystem::getStaticF_s_CurrentScriptableRenderContextID()  {
return ::cordl_internals::getStaticField<int32_t, "s_CurrentScriptableRenderContextID", ::MA::Flora::FloraSystem*>();
}
inline void MA::Flora::FloraSystem::setStaticF_UpdateTrackingMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "UpdateTrackingMarker", ::MA::Flora::FloraSystem*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::FloraSystem::getStaticF_UpdateTrackingMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "UpdateTrackingMarker", ::MA::Flora::FloraSystem*>();
}
inline void MA::Flora::FloraSystem::setStaticF__Instance_k__BackingField(::MA::Flora::FloraSystem*  value)  {
::cordl_internals::setStaticField<::MA::Flora::FloraSystem*, "<Instance>k__BackingField", ::MA::Flora::FloraSystem*>(std::forward<::MA::Flora::FloraSystem*>(value));
}
inline ::MA::Flora::FloraSystem* MA::Flora::FloraSystem::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::MA::Flora::FloraSystem*, "<Instance>k__BackingField", ::MA::Flora::FloraSystem*>();
}
inline void MA::Flora::FloraSystem::setStaticF_WasCreated(::System::Action_1<::MA::Flora::FloraSystem*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::MA::Flora::FloraSystem*>*, "WasCreated", ::MA::Flora::FloraSystem*>(std::forward<::System::Action_1<::MA::Flora::FloraSystem*>*>(value));
}
inline ::System::Action_1<::MA::Flora::FloraSystem*>* MA::Flora::FloraSystem::getStaticF_WasCreated()  {
return ::cordl_internals::getStaticField<::System::Action_1<::MA::Flora::FloraSystem*>*, "WasCreated", ::MA::Flora::FloraSystem*>();
}
inline void MA::Flora::FloraSystem::setStaticF_WillBeDestroyed(::System::Action_1<::MA::Flora::FloraSystem*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::MA::Flora::FloraSystem*>*, "WillBeDestroyed", ::MA::Flora::FloraSystem*>(std::forward<::System::Action_1<::MA::Flora::FloraSystem*>*>(value));
}
inline ::System::Action_1<::MA::Flora::FloraSystem*>* MA::Flora::FloraSystem::getStaticF_WillBeDestroyed()  {
return ::cordl_internals::getStaticField<::System::Action_1<::MA::Flora::FloraSystem*>*, "WillBeDestroyed", ::MA::Flora::FloraSystem*>();
}
inline void MA::Flora::FloraSystem::setStaticF_DidStartRendering(::System::Action_1<::MA::Flora::FloraSystem*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::MA::Flora::FloraSystem*>*, "DidStartRendering", ::MA::Flora::FloraSystem*>(std::forward<::System::Action_1<::MA::Flora::FloraSystem*>*>(value));
}
inline ::System::Action_1<::MA::Flora::FloraSystem*>* MA::Flora::FloraSystem::getStaticF_DidStartRendering()  {
return ::cordl_internals::getStaticField<::System::Action_1<::MA::Flora::FloraSystem*>*, "DidStartRendering", ::MA::Flora::FloraSystem*>();
}
inline void MA::Flora::FloraSystem::setStaticF_WillStopRendering(::System::Action_1<::MA::Flora::FloraSystem*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::MA::Flora::FloraSystem*>*, "WillStopRendering", ::MA::Flora::FloraSystem*>(std::forward<::System::Action_1<::MA::Flora::FloraSystem*>*>(value));
}
inline ::System::Action_1<::MA::Flora::FloraSystem*>* MA::Flora::FloraSystem::getStaticF_WillStopRendering()  {
return ::cordl_internals::getStaticField<::System::Action_1<::MA::Flora::FloraSystem*>*, "WillStopRendering", ::MA::Flora::FloraSystem*>();
}
inline void MA::Flora::FloraSystem::setStaticF_InitializeFrameMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "InitializeFrameMarker", ::MA::Flora::FloraSystem*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::FloraSystem::getStaticF_InitializeFrameMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "InitializeFrameMarker", ::MA::Flora::FloraSystem*>();
}
inline void MA::Flora::FloraSystem::setStaticF_PostLateUpdateMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "PostLateUpdateMarker", ::MA::Flora::FloraSystem*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::FloraSystem::getStaticF_PostLateUpdateMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "PostLateUpdateMarker", ::MA::Flora::FloraSystem*>();
}
inline void MA::Flora::FloraSystem::setStaticF_BeginRenderingContextMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "BeginRenderingContextMarker", ::MA::Flora::FloraSystem*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::FloraSystem::getStaticF_BeginRenderingContextMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "BeginRenderingContextMarker", ::MA::Flora::FloraSystem*>();
}
inline void MA::Flora::FloraSystem::setStaticF_BeginRenderingCameraMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "BeginRenderingCameraMarker", ::MA::Flora::FloraSystem*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::FloraSystem::getStaticF_BeginRenderingCameraMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "BeginRenderingCameraMarker", ::MA::Flora::FloraSystem*>();
}
inline void MA::Flora::FloraSystem::setStaticF_PerformBatchCullingMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "PerformBatchCullingMarker", ::MA::Flora::FloraSystem*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::FloraSystem::getStaticF_PerformBatchCullingMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "PerformBatchCullingMarker", ::MA::Flora::FloraSystem*>();
}
inline void MA::Flora::FloraSystem::setStaticF_BeginFrame(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "BeginFrame", ::MA::Flora::FloraSystem*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* MA::Flora::FloraSystem::getStaticF_BeginFrame()  {
return ::cordl_internals::getStaticField<::System::Action*, "BeginFrame", ::MA::Flora::FloraSystem*>();
}
inline void MA::Flora::FloraSystem::setStaticF_DelayCall(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "DelayCall", ::MA::Flora::FloraSystem*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* MA::Flora::FloraSystem::getStaticF_DelayCall()  {
return ::cordl_internals::getStaticField<::System::Action*, "DelayCall", ::MA::Flora::FloraSystem*>();
}
inline void MA::Flora::FloraSystem::setStaticF_PostLateUpdate(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "PostLateUpdate", ::MA::Flora::FloraSystem*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* MA::Flora::FloraSystem::getStaticF_PostLateUpdate()  {
return ::cordl_internals::getStaticField<::System::Action*, "PostLateUpdate", ::MA::Flora::FloraSystem*>();
}
inline void MA::Flora::FloraSystem::CleanupSystemBeforeSceneLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CleanupSystemBeforeSceneLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSystem::RegisterUnloadOrPlayModeChangeShutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RegisterUnloadOrPlayModeChangeShutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSystem::DomainUnloadOrPlayModeChangeShutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"DomainUnloadOrPlayModeChangeShutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSystem::OnActiveRenderPipelineCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnActiveRenderPipelineCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSystem::OnActiveRenderPipelineDisposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnActiveRenderPipelineDisposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSystem::OnBeginContextRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  cameras)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnBeginContextRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, cameras);
}
inline void MA::Flora::FloraSystem::OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, camera);
}
inline void MA::Flora::FloraSystem::OnEndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, camera);
}
inline void MA::Flora::FloraSystem::OnEndContextRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  cameras)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnEndContextRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, cameras);
}
inline void MA::Flora::FloraSystem::EditorRequiresFrameUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"EditorRequiresFrameUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::SetEditorDataChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetEditorDataChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::FloraInstanceHandle MA::Flora::FloraSystem::CreateInstance(::UnityEngine::GameObject*  prefab, ::UnityEngine::GameObject*  owner, ::Unity::Mathematics::float4x4  localToWorld)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceHandle>(this, ___internal_method, prefab, owner, localToWorld);
}
inline ::MA::Flora::FloraInstanceHandle MA::Flora::FloraSystem::CreateInstance(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  parent, ::MA::Flora::FloraInstanceTransform  localTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceHandle>(this, ___internal_method, prefab, parent, localTransform);
}
inline ::MA::Flora::FloraInstanceHandle MA::Flora::FloraSystem::CreateInstance(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceHandle>(this, ___internal_method, prefab, parent, localPosition, localRotation, localScale);
}
inline void MA::Flora::FloraSystem::CreateInstances(::UnityEngine::GameObject*  prefab, ::UnityEngine::GameObject*  owner, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  localToWorldMatrices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateInstances", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefab, owner, instanceHandles, localToWorldMatrices);
}
inline void MA::Flora::FloraSystem::CreateInstances(::UnityEngine::GameObject*  prefab, ::UnityEngine::GameObject*  owner, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  transforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateInstances", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefab, owner, instanceHandles, transforms);
}
inline void MA::Flora::FloraSystem::CreateInstances(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  parent, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateInstances", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefab, parent, instanceHandles, localTransforms);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::CreateInstances(::UnityEngine::GameObject*  prefab, ::UnityEngine::GameObject*  owner, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  matrices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateInstances", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, prefab, owner, matrices);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::CreateInstances(::UnityEngine::GameObject*  prefab, ::UnityEngine::GameObject*  owner, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  transforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateInstances", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, prefab, owner, transforms);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::CreateInstances(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  parent, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateInstances", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, prefab, parent, localTransforms);
}
inline ::UnityW<::MA::Flora::FloraInstanceRenderer> MA::Flora::FloraSystem::InstantiateInstanceRenderer(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"InstantiateInstanceRenderer", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::MA::Flora::FloraInstanceRenderer>>(this, ___internal_method, prefab, parent, localPosition, localRotation, localScale);
}
inline void MA::Flora::FloraSystem::DestroyInstance(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"DestroyInstance", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline void MA::Flora::FloraSystem::DestroyInstances(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"DestroyInstances", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandles);
}
inline bool MA::Flora::FloraSystem::InstanceExists(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"InstanceExists", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance);
}
inline bool MA::Flora::FloraSystem::IsInstanceEnabled(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"IsInstanceEnabled", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instance);
}
inline void MA::Flora::FloraSystem::SetInstanceEnabled(::MA::Flora::FloraInstanceHandle  instance, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetInstanceEnabled", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, enabled);
}
inline void MA::Flora::FloraSystem::SetInstancesEnabled(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetInstancesEnabled", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instances, enabled);
}
inline ::UnityW<::UnityEngine::GameObject> MA::Flora::FloraSystem::GetInstanceIdentitySource(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceIdentitySource", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, instance);
}
inline ::UnityW<::UnityEngine::GameObject> MA::Flora::FloraSystem::GetInstanceRenderSource(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceRenderSource", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, instance);
}
inline ::UnityW<::UnityEngine::GameObject> MA::Flora::FloraSystem::GetInstanceOwnerGameObject(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceOwnerGameObject", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, instance);
}
inline ::UnityW<::UnityEngine::Transform> MA::Flora::FloraSystem::GetInstanceOwnerTransform(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceOwnerTransform", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, instance);
}
inline ::UnityW<::UnityEngine::Terrain> MA::Flora::FloraSystem::GetInstanceOwnerTerrain(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceOwnerTerrain", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Terrain>>(this, ___internal_method, instance);
}
inline int32_t MA::Flora::FloraSystem::GetInstanceTerrainTreeIndex(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceTerrainTreeIndex", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, instance);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::GetTreeInstanceHandles(::UnityEngine::Terrain*  terrain, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetTreeInstanceHandles", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, terrain, allocator);
}
inline ::MA::Flora::FloraInstanceHandle MA::Flora::FloraSystem::GetTreeInstanceHandle(::UnityEngine::Terrain*  terrain, int32_t  treeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetTreeInstanceHandle", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceHandle>(this, ___internal_method, terrain, treeIndex);
}
inline ::Unity::Mathematics::float4 MA::Flora::FloraSystem::GetInstanceVariationColor(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceVariationColor", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(this, ___internal_method, instance);
}
inline void MA::Flora::FloraSystem::SetInstanceVariationColor(::MA::Flora::FloraInstanceHandle  instance, ::Unity::Mathematics::float4  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetInstanceVariationColor", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, color);
}
inline void MA::Flora::FloraSystem::SetInstanceVariationColors(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  colors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetInstanceVariationColors", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instances, colors);
}
inline ::Unity::Mathematics::float3 MA::Flora::FloraSystem::GetInstancePosition(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstancePosition", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, instance);
}
inline ::MA::Flora::FloraLocalToWorld MA::Flora::FloraSystem::GetInstanceLocalToWorld(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceLocalToWorld", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraLocalToWorld>(this, ___internal_method, instance);
}
inline ::Unity::Mathematics::float4x4 MA::Flora::FloraSystem::GetInstanceLocalToWorldMatrix(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceLocalToWorldMatrix", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4x4>(this, ___internal_method, instance);
}
inline ::MA::Flora::FloraInstanceTransform MA::Flora::FloraSystem::GetInstanceWorldTransform(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceWorldTransform", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceTransform>(this, ___internal_method, instance);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld> MA::Flora::FloraSystem::GetInstanceLocalToWorlds(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceLocalToWorlds", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>(this, ___internal_method, instanceHandles, allocator);
}
inline ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> MA::Flora::FloraSystem::GetInstanceLocalToWorldMatrices(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceLocalToWorldMatrices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>(this, ___internal_method, instanceHandles, allocator);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform> MA::Flora::FloraSystem::GetInstanceWorldTransforms(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceWorldTransforms", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>(this, ___internal_method, instanceHandles, allocator);
}
inline ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> MA::Flora::FloraSystem::GetInstancePositions(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstancePositions", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(this, ___internal_method, instanceHandles, allocator);
}
inline void MA::Flora::FloraSystem::UpdateInstanceLocalToWorld(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::FloraLocalToWorld  localToWorld)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateInstanceLocalToWorld", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::FloraLocalToWorld>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, localToWorld);
}
inline void MA::Flora::FloraSystem::UpdateInstanceLocalToWorldMatrix(::MA::Flora::FloraInstanceHandle  instance, ::Unity::Mathematics::float4x4  localToWorldMatrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateInstanceLocalToWorldMatrix", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, localToWorldMatrix);
}
inline void MA::Flora::FloraSystem::UpdateInstanceLocalTransform(::UnityEngine::Transform*  parent, ::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::FloraInstanceTransform  localInstanceTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateInstanceLocalTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, instance, localInstanceTransform);
}
inline void MA::Flora::FloraSystem::UpdateInstanceWorldTransform(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::FloraInstanceTransform  worldTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateInstanceWorldTransform", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, worldTransform);
}
inline void MA::Flora::FloraSystem::UpdateInstanceLocalToWorlds(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  localToWorlds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateInstanceLocalToWorlds", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandles, localToWorlds);
}
inline ::Unity::Jobs::JobHandle MA::Flora::FloraSystem::ScheduleUpdateInstanceLocalToWorlds(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  localToWorlds, ::Unity::Jobs::JobHandle  dependsOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"ScheduleUpdateInstanceLocalToWorlds", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, instanceHandles, localToWorlds, dependsOn);
}
inline void MA::Flora::FloraSystem::UpdateInstanceLocalToWorldMatrices(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  localToWorldMatrices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateInstanceLocalToWorldMatrices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandles, localToWorldMatrices);
}
inline ::Unity::Jobs::JobHandle MA::Flora::FloraSystem::ScheduleUpdateInstanceLocalToWorldMatrices(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  localToWorldMatrices, ::Unity::Jobs::JobHandle  dependsOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"ScheduleUpdateInstanceLocalToWorldMatrices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, instanceHandles, localToWorldMatrices, dependsOn);
}
inline void MA::Flora::FloraSystem::UpdateInstanceWorldTransforms(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  worldTransforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateInstanceWorldTransforms", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceHandles, worldTransforms);
}
inline ::Unity::Jobs::JobHandle MA::Flora::FloraSystem::ScheduleUpdateInstanceWorldTransforms(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  worldTransforms, ::Unity::Jobs::JobHandle  dependsOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"ScheduleUpdateInstanceWorldTransforms", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, instanceHandles, worldTransforms, dependsOn);
}
inline void MA::Flora::FloraSystem::UpdateInstanceLocalTransforms(::UnityEngine::Transform*  parent, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateInstanceLocalTransforms", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, instanceHandles, localTransforms);
}
inline ::Unity::Jobs::JobHandle MA::Flora::FloraSystem::ScheduleUpdateInstanceLocalTransforms(::UnityEngine::Transform*  parent, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms, ::Unity::Jobs::JobHandle  dependsOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"ScheduleUpdateInstanceLocalTransforms", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, parent, instanceHandles, localTransforms, dependsOn);
}
inline ::UnityEngine::Bounds MA::Flora::FloraSystem::GetInstanceBounds(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceBounds", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, instance);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Bounds> MA::Flora::FloraSystem::GetInstanceBounds(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceBounds", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Bounds>>(this, ___internal_method, instanceHandles, allocator);
}
inline ::UnityEngine::Bounds MA::Flora::FloraSystem::CalculateInstanceBounds(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CalculateInstanceBounds", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, instanceHandles);
}
inline ::UnityEngine::Bounds MA::Flora::FloraSystem::CalculateInstanceBounds(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Mathematics::float4x4  inSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CalculateInstanceBounds", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, instanceHandles, inSpace);
}
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::FindInstancesIntersectingSphere(::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesIntersectingSphere", {}, {::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, sphere, allocator);
}
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::FindInstancesIntersectingSphereMatching(::MA::Flora::FloraInstanceFilter  filter, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesIntersectingSphereMatching", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, filter, sphere, allocator);
}
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::FindInstancesIntersectingSphereMatching(::Unity::Collections::NativeArray_1<int32_t>  prefabGameObjectIDs, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesIntersectingSphereMatching", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, prefabGameObjectIDs, sphere, allocator);
}
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::FindInstancesIntersectingBounds(::UnityEngine::Bounds  bounds, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesIntersectingBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, bounds, allocator);
}
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::FindInstancesIntersectingBoundsMatching(::MA::Flora::FloraInstanceFilter  filter, ::UnityEngine::Bounds  bounds, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesIntersectingBoundsMatching", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, filter, bounds, allocator);
}
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::FindInstancesIntersectingBoundsMatching(::Unity::Collections::NativeArray_1<int32_t>  prefabGameObjectIDs, ::UnityEngine::Bounds  bounds, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesIntersectingBoundsMatching", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, prefabGameObjectIDs, bounds, allocator);
}
inline bool MA::Flora::FloraSystem::IsTerrainRegistered(::UnityEngine::Terrain*  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"IsTerrainRegistered", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, terrain);
}
inline void MA::Flora::FloraSystem::RegisterTerrains()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RegisterTerrains", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::RegisterTerrains(::ArrayW<::UnityEngine::Terrain*>  terrains)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RegisterTerrains", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrains);
}
inline void MA::Flora::FloraSystem::RegisterTerrain(::UnityEngine::Terrain*  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RegisterTerrain", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain);
}
inline void MA::Flora::FloraSystem::UnregisterTerrains()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UnregisterTerrains", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::UnregisterTerrain(::UnityEngine::Terrain*  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UnregisterTerrain", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain);
}
inline void MA::Flora::FloraSystem::UnregisterTerrain(::UnityEngine::EntityId  terrainEntityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UnregisterTerrain", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrainEntityId);
}
inline void MA::Flora::FloraSystem::GetActiveTerrains(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  terrains)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetActiveTerrains", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrains);
}
inline void MA::Flora::FloraSystem::GetActiveContainers(::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceContainer>>*  containers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetActiveContainers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceContainer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, containers);
}
inline void MA::Flora::FloraSystem::GetActiveRenderers(::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceRenderer>>*  instanceRenderers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetActiveRenderers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::MA::Flora::FloraInstanceRenderer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceRenderers);
}
inline void MA::Flora::FloraSystem::RegisterInstanceContainer(::MA::Flora::FloraInstanceContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RegisterInstanceContainer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void MA::Flora::FloraSystem::UnregisterInstanceContainer(::MA::Flora::FloraInstanceContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UnregisterInstanceContainer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::MA::Flora::FloraInstanceHandle MA::Flora::FloraSystem::CreateContainerInstance(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  parent, ::UnityEngine::EntityId  containerEntity, ::MA::Flora::FloraInstanceTransform  localTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateContainerInstance", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::MA::Flora::FloraInstanceTransform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceHandle>(this, ___internal_method, prefab, parent, containerEntity, localTransform);
}
inline void MA::Flora::FloraSystem::CreateContainerInstances(::UnityEngine::GameObject*  prefab, ::UnityEngine::Transform*  parent, ::UnityEngine::EntityId  containerEntity, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CreateContainerInstances", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefab, parent, containerEntity, instanceHandles, localTransforms);
}
inline void MA::Flora::FloraSystem::AppendTrackedContainerInstances(::UnityEngine::EntityId  containerEntity, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"AppendTrackedContainerInstances", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, containerEntity, instanceHandles, localTransforms);
}
inline void MA::Flora::FloraSystem::UpdateTrackedContainerLocalTransforms(::UnityEngine::EntityId  containerEntity, int32_t  startIndex, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateTrackedContainerLocalTransforms", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, containerEntity, startIndex, localTransforms);
}
inline void MA::Flora::FloraSystem::UpdateTrackedContainerLocalTransforms(::UnityEngine::EntityId  containerEntity, ::Unity::Collections::NativeArray_1<int32_t>  indices, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  localTransforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateTrackedContainerLocalTransforms", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, containerEntity, indices, localTransforms);
}
inline void MA::Flora::FloraSystem::RemoveTrackedContainerInstance(::UnityEngine::EntityId  containerEntity, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RemoveTrackedContainerInstance", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, containerEntity, index);
}
inline void MA::Flora::FloraSystem::ClearTrackedContainerInstances(::UnityEngine::EntityId  containerEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"ClearTrackedContainerInstances", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, containerEntity);
}
inline void MA::Flora::FloraSystem::RegisterInstanceRenderer(::MA::Flora::FloraInstanceRenderer*  instanceRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RegisterInstanceRenderer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceRenderer);
}
inline void MA::Flora::FloraSystem::UnregisterInstanceRenderer(::MA::Flora::FloraInstanceRenderer*  instanceRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UnregisterInstanceRenderer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instanceRenderer);
}
inline void MA::Flora::FloraSystem::RefreshInstanceRendererRenderSources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RefreshInstanceRendererRenderSources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::EnableUnityTerrainRendering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"EnableUnityTerrainRendering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::DisableUnityTerrainRendering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"DisableUnityTerrainRendering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::ApplyTerrainFoliageOwnership(::UnityEngine::Terrain*  terrain, bool  floraOwnsTerrainFoliage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"ApplyTerrainFoliageOwnership", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrain, floraOwnsTerrainFoliage);
}
inline void MA::Flora::FloraSystem::EnableUnityRenderers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"EnableUnityRenderers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::DisableUnityRenderers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"DisableUnityRenderers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::FindInstancesInPlanes(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesInPlanes", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, planes, allocator);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::FindInstancesInPlanes(::MA::Flora::InstanceTag  includeTags, ::MA::Flora::InstanceTag  excludeTags, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesInPlanes", {}, {::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::MA::Flora::InstanceTag>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, includeTags, excludeTags, planes, allocator);
}
inline void MA::Flora::FloraSystem::GetInstanceRendererObjects(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  instanceRendererObjects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceRendererObjects", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instances, instanceRendererObjects);
}
inline ::MA::Flora::InstanceInContainer MA::Flora::FloraSystem::GetInstanceInContainer(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceInContainer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::InstanceInContainer>(this, ___internal_method, instance);
}
inline ::UnityW<::MA::Flora::FloraInstanceContainer> MA::Flora::FloraSystem::GetParentInstanceContainer(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetParentInstanceContainer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::MA::Flora::FloraInstanceContainer>>(this, ___internal_method, instance);
}
inline int32_t MA::Flora::FloraSystem::GetIndexInInstanceContainer(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetIndexInInstanceContainer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, instance);
}
inline void MA::Flora::FloraSystem::SetInstanceInContainer(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::FloraInstanceContainer*  instanceContainer, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetInstanceInContainer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::FloraInstanceContainer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance, instanceContainer, index);
}
inline void MA::Flora::FloraSystem::SetInstanceInContainerIndices(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::MA::Flora::FloraInstanceContainer*  instanceContainer, int32_t  firstIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetInstanceInContainerIndices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::MA::Flora::FloraInstanceContainer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instances, instanceContainer, firstIndex);
}
inline ::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,int32_t> MA::Flora::FloraSystem::GetContainerIndexMap(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetContainerIndexMap", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,int32_t>>(this, ___internal_method, instances, allocator);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::InstanceInContainer> MA::Flora::FloraSystem::GetInstanceInContainersWithIndices(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  originalIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceInContainersWithIndices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::InstanceInContainer>>(this, ___internal_method, instances, allocator, originalIndices);
}
inline ::MA::Flora::TreeInTerrain MA::Flora::FloraSystem::GetTreeInTerrain(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetTreeInTerrain", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TreeInTerrain>(this, ___internal_method, instance);
}
inline void MA::Flora::FloraSystem::SetTerrainChanged(::UnityEngine::Terrain*  terrain, ::UnityEngine::TerrainChangedFlags  changedFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetTerrainChanged", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::TerrainChangedFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain, changedFlags);
}
inline ::Unity::Collections::NativeParallelMultiHashMap_2<::MA::Flora::DetailInTerrain,::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::GetDetailInstanceMap(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetDetailInstanceMap", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeParallelMultiHashMap_2<::MA::Flora::DetailInTerrain,::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, instances, allocator);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain> MA::Flora::FloraSystem::GetValidTreeInTerrains(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetValidTreeInTerrains", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain>>(this, ___internal_method, instances, allocator);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain> MA::Flora::FloraSystem::GetValidTreeInTerrainsWithIndices(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::Unity::Collections::Allocator  allocator, ::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  originalIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetValidTreeInTerrainsWithIndices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::TreeInTerrain>>(this, ___internal_method, instances, allocator, originalIndices);
}
inline void MA::Flora::FloraSystem::OnSceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnSceneLoaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::UnityEngine::SceneManagement::LoadSceneMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, mode);
}
inline void MA::Flora::FloraSystem::OnSceneUnloaded(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnSceneUnloaded", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene);
}
inline void MA::Flora::FloraSystem::OnLightProbesUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnLightProbesUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSystem::OnTerrainHeightmapChanged(::UnityEngine::Terrain*  terrain, ::UnityEngine::RectInt  region, bool  didSync)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnTerrainHeightmapChanged", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RectInt>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrain, region, didSync);
}
inline void MA::Flora::FloraSystem::RebuildAmbientLighting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RebuildAmbientLighting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::SetTerrainHeightmapChanged(::UnityEngine::Terrain*  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetTerrainHeightmapChanged", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain);
}
inline void MA::Flora::FloraSystem::SetupPlayerLoop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetupPlayerLoop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSystem::TeardownPlayerLoop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"TeardownPlayerLoop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSystem::OnInitialization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnInitialization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSystem::OnPostLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnPostLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSystem::OnPostPostLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnPostPostLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool MA::Flora::FloraSystem::UpdateSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::FrameInitialization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FrameInitialization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::FramePostLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FramePostLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::RefreshTemplates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"RefreshTemplates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::FramePostPostLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FramePostPostLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::FloraRenderPipelineType MA::Flora::FloraSystem::GetCurrentRenderPipelineType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetCurrentRenderPipelineType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraRenderPipelineType>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::SetupRendering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetupRendering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::TeardownRenderingIfEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"TeardownRenderingIfEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::TeardownRendering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"TeardownRendering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::ReinitializeCullingSystem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"ReinitializeCullingSystem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::UpdateDebugDisplay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateDebugDisplay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::OnBeginContextRendering(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  cameras)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnBeginContextRendering", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameras);
}
inline void MA::Flora::FloraSystem::OnBeginCameraRendering(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnBeginCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void MA::Flora::FloraSystem::OnEndCameraRendering(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnEndCameraRendering", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline void MA::Flora::FloraSystem::OnEndContextRendering(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*  cameras)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnEndContextRendering", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameras);
}
inline ::Unity::Jobs::JobHandle MA::Flora::FloraSystem::OnPerformBatchCulling(::UnityEngine::Rendering::BatchRendererGroup*  rendererGroup, ::UnityEngine::Rendering::BatchCullingContext  cullingContext, ::UnityEngine::Rendering::BatchCullingOutput  cullingOutput, ::System::IntPtr  userContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnPerformBatchCulling", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingContext>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingOutput>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, rendererGroup, cullingContext, cullingOutput, userContext);
}
inline void MA::Flora::FloraSystem::OnBatchCullingComplete(::System::IntPtr  customCullingResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"OnBatchCullingComplete", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customCullingResult);
}
inline void MA::Flora::FloraSystem::SetupTracking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"SetupTracking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::TeardownTracking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"TeardownTracking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::FlushTracking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FlushTracking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::UpdateTracking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"UpdateTracking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void MA::Flora::FloraSystem::AddTransformChangedEvent(::MA::Flora::FloraSystem_TransformChangedAction*  onChanged)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                    {"AddTransformChangedEvent", {::i2c::class_of<T>()}, {::i2c::type_of<::MA::Flora::FloraSystem_TransformChangedAction*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onChanged);
}
template<typename T>
inline void MA::Flora::FloraSystem::RemoveTransformChangedEvent(::MA::Flora::FloraSystem_TransformChangedAction*  onChanged)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                    {"RemoveTransformChangedEvent", {::i2c::class_of<T>()}, {::i2c::type_of<::MA::Flora::FloraSystem_TransformChangedAction*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onChanged);
}
inline ::MA::Flora::FloraSystem* MA::Flora::FloraSystem::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraSystem*>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSystem::set_Instance(::MA::Flora::FloraSystem*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"set_Instance", {}, {::i2c::type_of<::MA::Flora::FloraSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool MA::Flora::FloraSystem::get_Exists()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_Exists", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool MA::Flora::FloraSystem::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::MA::Flora::FloraSystem* MA::Flora::FloraSystem::GetOrCreate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetOrCreate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraSystem*>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSystem::InitializeIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"InitializeIfNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSystem::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSystem::Reinitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"Reinitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSystem::add_WasCreated(::System::Action_1<::MA::Flora::FloraSystem*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"add_WasCreated", {}, {::i2c::type_of<::System::Action_1<::MA::Flora::FloraSystem*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void MA::Flora::FloraSystem::remove_WasCreated(::System::Action_1<::MA::Flora::FloraSystem*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"remove_WasCreated", {}, {::i2c::type_of<::System::Action_1<::MA::Flora::FloraSystem*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void MA::Flora::FloraSystem::add_WillBeDestroyed(::System::Action_1<::MA::Flora::FloraSystem*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"add_WillBeDestroyed", {}, {::i2c::type_of<::System::Action_1<::MA::Flora::FloraSystem*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void MA::Flora::FloraSystem::remove_WillBeDestroyed(::System::Action_1<::MA::Flora::FloraSystem*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"remove_WillBeDestroyed", {}, {::i2c::type_of<::System::Action_1<::MA::Flora::FloraSystem*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void MA::Flora::FloraSystem::add_DidStartRendering(::System::Action_1<::MA::Flora::FloraSystem*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"add_DidStartRendering", {}, {::i2c::type_of<::System::Action_1<::MA::Flora::FloraSystem*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void MA::Flora::FloraSystem::remove_DidStartRendering(::System::Action_1<::MA::Flora::FloraSystem*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"remove_DidStartRendering", {}, {::i2c::type_of<::System::Action_1<::MA::Flora::FloraSystem*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void MA::Flora::FloraSystem::add_WillStopRendering(::System::Action_1<::MA::Flora::FloraSystem*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"add_WillStopRendering", {}, {::i2c::type_of<::System::Action_1<::MA::Flora::FloraSystem*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void MA::Flora::FloraSystem::remove_WillStopRendering(::System::Action_1<::MA::Flora::FloraSystem*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"remove_WillStopRendering", {}, {::i2c::type_of<::System::Action_1<::MA::Flora::FloraSystem*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::MA::Flora::FloraRenderPipelineType MA::Flora::FloraSystem::get_RenderPipelineType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_RenderPipelineType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraRenderPipelineType>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::set_RenderPipelineType(::MA::Flora::FloraRenderPipelineType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"set_RenderPipelineType", {}, {::i2c::type_of<::MA::Flora::FloraRenderPipelineType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool MA::Flora::FloraSystem::get_RenderingEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_RenderingEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::FloraSystem::get_RenderTerrainFoliage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_RenderTerrainFoliage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::FloraSystem::get_AllowGPUOcclusionCulling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowGPUOcclusionCulling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::FloraSystem::get_AllowDensityCulling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowDensityCulling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::FloraSystem::get_AllowLegacyLightProbes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowLegacyLightProbes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::FloraSystem::get_AllowPerTreeLightProbes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowPerTreeLightProbes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::FloraSystem::get_AllowPerDetailLightProbes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowPerDetailLightProbes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::FloraSystem::get_AllowPerObjectMotionVectors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowPerObjectMotionVectors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::FloraSystem::get_AllowAdditionalLightShadows()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowAdditionalLightShadows", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::FloraSystem::get_AllowPerTreeMotionVectors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowPerTreeMotionVectors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::FloraSystem::get_AllowPerDetailMotionVectors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowPerDetailMotionVectors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::BatchRendererGroup* MA::Flora::FloraSystem::get_BatchRendererGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_BatchRendererGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchRendererGroup*>(this, ___internal_method);
}
inline ::MA::Flora::FloraRuntimeResources* MA::Flora::FloraSystem::get_Resources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_Resources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraRuntimeResources*>(this, ___internal_method);
}
inline int32_t MA::Flora::FloraSystem::get_RegisteredInstanceCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_RegisteredInstanceCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::by_ref<::Unity::Collections::RewindableAllocator> MA::Flora::FloraSystem::get_FrameAllocator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_FrameAllocator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Collections::RewindableAllocator>>(this, ___internal_method);
}
inline ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager> MA::Flora::FloraSystem::get_InstanceManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_InstanceManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>>(this, ___internal_method);
}
inline ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid> MA::Flora::FloraSystem::get_CullingGrid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_CullingGrid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>>(this, ___internal_method);
}
inline ::MA::Flora::CullingSystem* MA::Flora::FloraSystem::get_CullingSystem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_CullingSystem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::CullingSystem*>(this, ___internal_method);
}
inline bool MA::Flora::FloraSystem::get_AllowDensityCullingOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_AllowDensityCullingOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::set_AllowDensityCullingOverride(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"set_AllowDensityCullingOverride", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool MA::Flora::FloraSystem::get_HasInstancesOrObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_HasInstancesOrObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool MA::Flora::FloraSystem::IsSupportedOnSystem(::by_ref<::StringW>  failReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"IsSupportedOnSystem", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, failReason);
}
inline bool MA::Flora::FloraSystem::CheckGLVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"CheckGLVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::MA::Flora::FloraCullingPipeline MA::Flora::FloraSystem::get_CullingPipeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_CullingPipeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraCullingPipeline>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Light> MA::Flora::FloraSystem::get_MainLightOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"get_MainLightOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Light>>(this, ___internal_method);
}
inline void MA::Flora::FloraSystem::add_BeginFrame(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"add_BeginFrame", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void MA::Flora::FloraSystem::remove_BeginFrame(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"remove_BeginFrame", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void MA::Flora::FloraSystem::add_DelayCall(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"add_DelayCall", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void MA::Flora::FloraSystem::remove_DelayCall(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"remove_DelayCall", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void MA::Flora::FloraSystem::add_PostLateUpdate(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"add_PostLateUpdate", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void MA::Flora::FloraSystem::remove_PostLateUpdate(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"remove_PostLateUpdate", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> MA::Flora::FloraSystem::GetInstancePrefab(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstancePrefab", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, instance);
}
inline ::UnityW<::UnityEngine::GameObject> MA::Flora::FloraSystem::GetAuthoringGameObjectOf(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetAuthoringGameObjectOf", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, instance);
}
inline ::UnityW<::UnityEngine::Transform> MA::Flora::FloraSystem::GetAuthoringTransformOf(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetAuthoringTransformOf", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, instance);
}
inline ::UnityW<::UnityEngine::Terrain> MA::Flora::FloraSystem::GetAuthoringTerrainOf(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetAuthoringTerrainOf", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Terrain>>(this, ___internal_method, instance);
}
inline ::UnityW<::UnityEngine::Terrain> MA::Flora::FloraSystem::GetInstanceParentTerrain(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"GetInstanceParentTerrain", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Terrain>>(this, ___internal_method, instance);
}
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::FindInstancesInSphere(::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesInSphere", {}, {::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, sphere, allocator);
}
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::FindInstancesInSphereMatching(::MA::Flora::FloraInstanceFilter  filter, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesInSphereMatching", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, filter, sphere, allocator);
}
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::FindInstancesInSphereMatching(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  prefabGameObjectIDs, ::UnityEngine::BoundingSphere  sphere, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesInSphereMatching", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::UnityEngine::BoundingSphere>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, prefabGameObjectIDs, sphere, allocator);
}
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::FindInstancesInBounds(::UnityEngine::Bounds  bounds, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesInBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, bounds, allocator);
}
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::FindInstancesInBoundsMatching(::MA::Flora::FloraInstanceFilter  filter, ::UnityEngine::Bounds  bounds, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesInBoundsMatching", {}, {::i2c::type_of<::MA::Flora::FloraInstanceFilter>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, filter, bounds, allocator);
}
inline ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle> MA::Flora::FloraSystem::FindInstancesInBoundsMatching(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  prefabGameObjectIDs, ::UnityEngine::Bounds  bounds, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSystem*>(),
                        {"FindInstancesInBoundsMatching", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>>(this, ___internal_method, prefabGameObjectIDs, bounds, allocator);
}
inline ::MA::Flora::FloraSystem* MA::Flora::FloraSystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraSystem*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSystem::FloraSystem()   {
}
