#pragma once
// IWYU pragma private; include "MA/InternalBridge/GPUDriven/UnityGPUDrivenRendererGroupData.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupData_impl.hpp"
#include "MA/InternalBridge/GPUDriven/zzzz__UnityGPUDrivenRendererGroupData_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedRendererData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererEditorData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupData_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubMeshDescriptor_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.op_Implicit___MA__InternalBridge__GPUDriven__UnityGPUDrivenRendererGroupData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData (*)(::UnityEngine::Rendering::GPUDrivenRendererGroupData)>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::op_Implicit___MA__InternalBridge__GPUDriven__UnityGPUDrivenRendererGroupData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ece710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::GPUDrivenRendererGroupData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.op_Implicit___UnityEngine__Rendering__GPUDrivenRendererGroupData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GPUDrivenRendererGroupData (*)(::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData)>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::op_Implicit___UnityEngine__Rendering__GPUDrivenRendererGroupData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ece710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_rendererGroupID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_rendererGroupID)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ecdf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_rendererGroupID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_localBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Bounds> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_localBounds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_localBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_lightmapScaleOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_lightmapScaleOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_lightmapScaleOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_gameObjectLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_gameObjectLayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_gameObjectLayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_renderingLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint32_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_renderingLayerMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_renderingLayerMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_lodGroupID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_lodGroupID)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ece500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_lodGroupID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_lightmapIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_lightmapIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817f1380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_lightmapIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_packedRendererData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_packedRendererData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_packedRendererData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_rendererPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_rendererPriority)> {
  constexpr static std::size_t size = 0x2d20;
  constexpr static std::size_t addrs = 0x180eb4ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_rendererPriority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_meshIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_meshIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_meshIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_subMeshStartIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int16_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_subMeshStartIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_subMeshStartIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_materialsOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_materialsOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803717d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_materialsOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_materialsCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int16_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_materialsCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ece5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_materialsCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_instancesOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_instancesOffset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ece470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_instancesOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_instancesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_instancesCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ece430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_instancesCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_editorData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenRendererEditorData> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_editorData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181465d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_editorData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_invalidRendererGroupID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_invalidRendererGroupID)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ece4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_invalidRendererGroupID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_localToWorldMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_localToWorldMatrix)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_localToWorldMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_prevLocalToWorldMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_prevLocalToWorldMatrix)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181465d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_prevLocalToWorldMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_rendererGroupIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_rendererGroupIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181465d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_rendererGroupIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_meshID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_meshID)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ece620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_meshID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_subMeshCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int16_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_subMeshCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181465d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_subMeshCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_subMeshDescOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_subMeshDescOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181465da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_subMeshDescOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_subMeshDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SubMeshDescriptor> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_subMeshDesc)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181465d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_subMeshDesc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_materialIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_materialIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181465d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_materialIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_materialID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_materialID)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181ece590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_materialID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_packedMaterialData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_packedMaterialData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ece670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_packedMaterialData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData.get_materialFilterFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::*)()>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_materialFilterFlags)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ece550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_materialFilterFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::op_Implicit___MA__InternalBridge__GPUDriven__UnityGPUDrivenRendererGroupData(::UnityEngine::Rendering::GPUDrivenRendererGroupData  rendererGroupData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Rendering::GPUDrivenRendererGroupData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(nullptr, ___internal_method, rendererGroupData);
}
inline ::UnityEngine::Rendering::GPUDrivenRendererGroupData MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::op_Implicit___UnityEngine__Rendering__GPUDrivenRendererGroupData(::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData  rendererGroupData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUDrivenRendererGroupData>(nullptr, ___internal_method, rendererGroupData);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_rendererGroupID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_rendererGroupID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Bounds> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_localBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_localBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Bounds>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_lightmapScaleOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_lightmapScaleOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_gameObjectLayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_gameObjectLayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<uint32_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_renderingLayerMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_renderingLayerMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint32_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_lodGroupID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_lodGroupID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_lightmapIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_lightmapIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_packedRendererData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_packedRendererData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_rendererPriority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_rendererPriority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_meshIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_meshIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int16_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_subMeshStartIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_subMeshStartIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int16_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_materialsOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_materialsOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int16_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_materialsCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_materialsCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int16_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_instancesOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_instancesOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_instancesCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_instancesCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenRendererEditorData> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_editorData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_editorData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenRendererEditorData>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_invalidRendererGroupID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_invalidRendererGroupID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_localToWorldMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_localToWorldMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_prevLocalToWorldMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_prevLocalToWorldMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_rendererGroupIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_rendererGroupIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_meshID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_meshID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int16_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_subMeshCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_subMeshCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int16_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_subMeshDescOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_subMeshDescOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SubMeshDescriptor> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_subMeshDesc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_subMeshDesc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SubMeshDescriptor>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_materialIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_materialIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_materialID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_materialID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_packedMaterialData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_packedMaterialData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::get_materialFilterFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>(),
                        {"get_materialFilterFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_RendererGroupData", ty: "::UnityEngine::Rendering::GPUDrivenRendererGroupData", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::UnityGPUDrivenRendererGroupData(::UnityEngine::Rendering::GPUDrivenRendererGroupData  m_RendererGroupData) noexcept  {
this->m_RendererGroupData = m_RendererGroupData;
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData::UnityGPUDrivenRendererGroupData()   {
}
