#pragma once
// IWYU pragma private; include "UnityEngine/Mesh.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndexFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__MeshUpdateFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubMeshDescriptor_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttribute_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__CombineInstance_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__MeshLodRange_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Mesh_LodSelectionCurve.get_lodSlope
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Mesh_LodSelectionCurve::*)()>(&::UnityEngine::Mesh_LodSelectionCurve::get_lodSlope)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d56c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_LodSelectionCurve>(),
                        {"get_lodSlope", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_LodSelectionCurve.get_lodBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Mesh_LodSelectionCurve::*)()>(&::UnityEngine::Mesh_LodSelectionCurve::get_lodBias)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d56e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_LodSelectionCurve>(),
                        {"get_lodBias", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t UnityEngine::Mesh_LodSelectionCurve::get_lodSlope()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_LodSelectionCurve>(),
                        {"get_lodSlope", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::Mesh_LodSelectionCurve::get_lodBias()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_LodSelectionCurve>(),
                        {"get_lodBias", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_LodSlope", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LodBias", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Mesh_LodSelectionCurve::Mesh_LodSelectionCurve(float_t  m_LodSlope, float_t  m_LodBias) noexcept  {
this->m_LodSlope = m_LodSlope;
this->m_LodBias = m_LodBias;
}
// Ctor Parameters []
constexpr ::UnityEngine::Mesh_LodSelectionCurve::Mesh_LodSelectionCurve()   {
}
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.HasVertexAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh_MeshData::HasVertexAttribute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182256540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"HasVertexAttribute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.GetVertexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh_MeshData::GetVertexCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822564b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetVertexCount", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.GetVertexBufferCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh_MeshData::GetVertexBufferCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822564a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetVertexBufferCount", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.GetVertexDataPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh_MeshData::GetVertexDataPtr)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822564c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetVertexDataPtr", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.GetVertexDataSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh_MeshData::GetVertexDataSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822564d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetVertexDataSize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.CopyAttributeIntoPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t, ::System::IntPtr)>(&::UnityEngine::Mesh_MeshData::CopyAttributeIntoPtr)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822563a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"CopyAttributeIntoPtr", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.GetIndexDataPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Mesh_MeshData::GetIndexDataPtr)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822563b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetIndexDataPtr", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.GetIndexDataSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh_MeshData::GetIndexDataSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822563c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetIndexDataSize", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.GetSubMeshCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh_MeshData::GetSubMeshCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822563d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetSubMeshCount", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.GetSubMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SubMeshDescriptor (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh_MeshData::GetSubMesh)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822563f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetSubMesh", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetVertexBufferParamsFromArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>)>(&::UnityEngine::Mesh_MeshData::SetVertexBufferParamsFromArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182256650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"SetVertexBufferParamsFromArray", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetIndexBufferParamsImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::UnityEngine::Rendering::IndexFormat)>(&::UnityEngine::Mesh_MeshData::SetIndexBufferParamsImpl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182256570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"SetIndexBufferParamsImpl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetSubMeshCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh_MeshData::SetSubMeshCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822565a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"SetSubMeshCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetSubMeshImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::UnityEngine::Rendering::SubMeshDescriptor, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh_MeshData::SetSubMeshImpl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822565c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"SetSubMeshImpl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::SubMeshDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.get_vertexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh_MeshData::*)()>(&::UnityEngine::Mesh_MeshData::get_vertexCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822567a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"get_vertexCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.get_vertexBufferCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh_MeshData::*)()>(&::UnityEngine::Mesh_MeshData::get_vertexBufferCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182256780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"get_vertexBufferCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.HasVertexAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Mesh_MeshData::*)(::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh_MeshData::HasVertexAttribute)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182256550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"HasVertexAttribute", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.GetVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshData::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>)>(&::UnityEngine::Mesh_MeshData::GetVertices)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822564e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetVertices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetVertexBufferParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshData::*)(int32_t, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>)>(&::UnityEngine::Mesh_MeshData::SetVertexBufferParams)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822566d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"SetVertexBufferParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetIndexBufferParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshData::*)(int32_t, ::UnityEngine::Rendering::IndexFormat)>(&::UnityEngine::Mesh_MeshData::SetIndexBufferParams)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182256580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"SetIndexBufferParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.get_subMeshCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh_MeshData::*)()>(&::UnityEngine::Mesh_MeshData::get_subMeshCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182256760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"get_subMeshCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.set_subMeshCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshData::*)(int32_t)>(&::UnityEngine::Mesh_MeshData::set_subMeshCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822567c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"set_subMeshCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.GetSubMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SubMeshDescriptor (::UnityEngine::Mesh_MeshData::*)(int32_t)>(&::UnityEngine::Mesh_MeshData::GetSubMesh)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182256430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetSubMesh", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetSubMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshData::*)(int32_t, ::UnityEngine::Rendering::SubMeshDescriptor, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh_MeshData::SetSubMesh)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822565d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"SetSubMesh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::SubMeshDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.GetSubMesh_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>)>(&::UnityEngine::Mesh_MeshData::GetSubMesh_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822563e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetSubMesh_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetVertexBufferParamsFromArray_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Mesh_MeshData::SetVertexBufferParamsFromArray_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182256640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"SetVertexBufferParamsFromArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshData.SetSubMeshImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh_MeshData::SetSubMeshImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822565b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"SetSubMeshImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Mesh_MeshData::HasVertexAttribute(::System::IntPtr  self, ::UnityEngine::Rendering::VertexAttribute  attr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"HasVertexAttribute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, self, attr);
}
inline int32_t UnityEngine::Mesh_MeshData::GetVertexCount(::System::IntPtr  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetVertexCount", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, self);
}
inline int32_t UnityEngine::Mesh_MeshData::GetVertexBufferCount(::System::IntPtr  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetVertexBufferCount", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, self);
}
inline ::System::IntPtr UnityEngine::Mesh_MeshData::GetVertexDataPtr(::System::IntPtr  self, int32_t  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetVertexDataPtr", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, self, stream);
}
inline uint64_t UnityEngine::Mesh_MeshData::GetVertexDataSize(::System::IntPtr  self, int32_t  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetVertexDataSize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, self, stream);
}
inline void UnityEngine::Mesh_MeshData::CopyAttributeIntoPtr(::System::IntPtr  self, ::UnityEngine::Rendering::VertexAttribute  attr, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::IntPtr  dst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"CopyAttributeIntoPtr", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, attr, format, dim, dst);
}
inline ::System::IntPtr UnityEngine::Mesh_MeshData::GetIndexDataPtr(::System::IntPtr  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetIndexDataPtr", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, self);
}
inline uint64_t UnityEngine::Mesh_MeshData::GetIndexDataSize(::System::IntPtr  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetIndexDataSize", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, self);
}
inline int32_t UnityEngine::Mesh_MeshData::GetSubMeshCount(::System::IntPtr  self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetSubMeshCount", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, self);
}
inline ::UnityEngine::Rendering::SubMeshDescriptor UnityEngine::Mesh_MeshData::GetSubMesh(::System::IntPtr  self, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetSubMesh", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SubMeshDescriptor>(nullptr, ___internal_method, self, index);
}
inline void UnityEngine::Mesh_MeshData::SetVertexBufferParamsFromArray(::System::IntPtr  self, int32_t  vertexCount, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"SetVertexBufferParamsFromArray", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, vertexCount, attributes);
}
inline void UnityEngine::Mesh_MeshData::SetIndexBufferParamsImpl(::System::IntPtr  self, int32_t  indexCount, ::UnityEngine::Rendering::IndexFormat  indexFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"SetIndexBufferParamsImpl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, indexCount, indexFormat);
}
inline void UnityEngine::Mesh_MeshData::SetSubMeshCount(::System::IntPtr  self, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"SetSubMeshCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, count);
}
inline void UnityEngine::Mesh_MeshData::SetSubMeshImpl(::System::IntPtr  self, int32_t  index, ::UnityEngine::Rendering::SubMeshDescriptor  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"SetSubMeshImpl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::SubMeshDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, index, desc, flags);
}
inline int32_t UnityEngine::Mesh_MeshData::get_vertexCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"get_vertexCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::Mesh_MeshData::get_vertexBufferCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"get_vertexBufferCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Mesh_MeshData::HasVertexAttribute(::UnityEngine::Rendering::VertexAttribute  attr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"HasVertexAttribute", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, attr);
}
inline void UnityEngine::Mesh_MeshData::GetVertices(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  outVertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetVertices", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, outVertices);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> UnityEngine::Mesh_MeshData::GetVertexData(int32_t  stream)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                    {"GetVertexData", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, stream);
}
template<typename T>
inline void UnityEngine::Mesh_MeshData::CopyAttributeInto(::Unity::Collections::NativeArray_1<T>  buffer, ::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                    {"CopyAttributeInto", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer, channel, format, dim);
}
inline void UnityEngine::Mesh_MeshData::SetVertexBufferParams(int32_t  vertexCount, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"SetVertexBufferParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vertexCount, attributes);
}
inline void UnityEngine::Mesh_MeshData::SetIndexBufferParams(int32_t  indexCount, ::UnityEngine::Rendering::IndexFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"SetIndexBufferParams", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, indexCount, format);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> UnityEngine::Mesh_MeshData::GetIndexData()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                    {"GetIndexData", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method);
}
inline int32_t UnityEngine::Mesh_MeshData::get_subMeshCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"get_subMeshCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Mesh_MeshData::set_subMeshCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"set_subMeshCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::SubMeshDescriptor UnityEngine::Mesh_MeshData::GetSubMesh(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetSubMesh", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SubMeshDescriptor>(*this, ___internal_method, index);
}
inline void UnityEngine::Mesh_MeshData::SetSubMesh(int32_t  index, ::UnityEngine::Rendering::SubMeshDescriptor  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"SetSubMesh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::SubMeshDescriptor>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, desc, flags);
}
inline void UnityEngine::Mesh_MeshData::GetSubMesh_Injected(::System::IntPtr  self, int32_t  index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"GetSubMesh_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, index, ret);
}
inline void UnityEngine::Mesh_MeshData::SetVertexBufferParamsFromArray_Injected(::System::IntPtr  self, int32_t  vertexCount, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"SetVertexBufferParamsFromArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, vertexCount, attributes);
}
inline void UnityEngine::Mesh_MeshData::SetSubMeshImpl_Injected(::System::IntPtr  self, int32_t  index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshData>(),
                        {"SetSubMeshImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self, index, desc, flags);
}
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Mesh_MeshData::Mesh_MeshData(::System::IntPtr  m_Ptr) noexcept  {
this->m_Ptr = m_Ptr;
}
// Ctor Parameters []
constexpr ::UnityEngine::Mesh_MeshData::Mesh_MeshData()   {
}
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.AcquireReadOnlyMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::System::IntPtr*)>(&::UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182255c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"AcquireReadOnlyMeshData", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::IntPtr*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.AcquireReadOnlyMeshDatas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Mesh*>, ::System::IntPtr*, int32_t)>(&::UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshDatas)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182255cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"AcquireReadOnlyMeshDatas", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.AcquireMeshDataCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::System::IntPtr*)>(&::UnityEngine::Mesh_MeshDataArray::AcquireMeshDataCopy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182255b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"AcquireMeshDataCopy", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::IntPtr*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.AcquireMeshDatasCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Mesh*>, ::System::IntPtr*, int32_t)>(&::UnityEngine::Mesh_MeshDataArray::AcquireMeshDatasCopy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182255bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"AcquireMeshDatasCopy", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.ReleaseMeshDatas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr*, int32_t)>(&::UnityEngine::Mesh_MeshDataArray::ReleaseMeshDatas)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182255f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"ReleaseMeshDatas", {}, {::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.CreateNewMeshDatas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr*, int32_t)>(&::UnityEngine::Mesh_MeshDataArray::CreateNewMeshDatas)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182255eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"CreateNewMeshDatas", {}, {::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.ApplyToMeshImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::System::IntPtr, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh_MeshDataArray::ApplyToMeshImpl)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182255e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"ApplyToMeshImpl", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh_MeshDataArray::*)()>(&::UnityEngine::Mesh_MeshDataArray::get_Length)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Mesh_MeshData (::UnityEngine::Mesh_MeshDataArray::*)(int32_t)>(&::UnityEngine::Mesh_MeshDataArray::get_Item)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180bd4b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshDataArray::*)()>(&::UnityEngine::Mesh_MeshDataArray::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182255ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.ApplyToMeshAndDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshDataArray::*)(::UnityEngine::Mesh*, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh_MeshDataArray::ApplyToMeshAndDispose)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182255d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"ApplyToMeshAndDispose", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshDataArray::*)(::UnityEngine::Mesh*, bool, bool)>(&::UnityEngine::Mesh_MeshDataArray::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x182255f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshDataArray::*)(::ArrayW<::UnityEngine::Mesh*>, int32_t, bool, bool)>(&::UnityEngine::Mesh_MeshDataArray::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x182256180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh_MeshDataArray::*)(int32_t)>(&::UnityEngine::Mesh_MeshDataArray::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1822560e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.AcquireReadOnlyMeshData_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr*)>(&::UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshData_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182255c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"AcquireReadOnlyMeshData_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.AcquireReadOnlyMeshDatas_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Mesh*>, ::System::IntPtr*, int32_t)>(&::UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshDatas_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182255cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"AcquireReadOnlyMeshDatas_Injected", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.AcquireMeshDataCopy_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr*)>(&::UnityEngine::Mesh_MeshDataArray::AcquireMeshDataCopy_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182255b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"AcquireMeshDataCopy_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.AcquireMeshDatasCopy_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Mesh*>, ::System::IntPtr*, int32_t)>(&::UnityEngine::Mesh_MeshDataArray::AcquireMeshDatasCopy_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182255be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"AcquireMeshDatasCopy_Injected", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh_MeshDataArray.ApplyToMeshImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh_MeshDataArray::ApplyToMeshImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182255e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"ApplyToMeshImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshData(::UnityEngine::Mesh*  mesh, ::System::IntPtr*  datas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"AcquireReadOnlyMeshData", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::IntPtr*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, datas);
}
inline void UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshDatas(::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"AcquireReadOnlyMeshDatas", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshes, datas, count);
}
inline void UnityEngine::Mesh_MeshDataArray::AcquireMeshDataCopy(::UnityEngine::Mesh*  mesh, ::System::IntPtr*  datas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"AcquireMeshDataCopy", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::IntPtr*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, datas);
}
inline void UnityEngine::Mesh_MeshDataArray::AcquireMeshDatasCopy(::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"AcquireMeshDatasCopy", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshes, datas, count);
}
inline void UnityEngine::Mesh_MeshDataArray::ReleaseMeshDatas(::System::IntPtr*  datas, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"ReleaseMeshDatas", {}, {::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, datas, count);
}
inline void UnityEngine::Mesh_MeshDataArray::CreateNewMeshDatas(::System::IntPtr*  datas, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"CreateNewMeshDatas", {}, {::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, datas, count);
}
inline void UnityEngine::Mesh_MeshDataArray::ApplyToMeshImpl(::UnityEngine::Mesh*  mesh, ::System::IntPtr  data, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"ApplyToMeshImpl", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, data, flags);
}
inline int32_t UnityEngine::Mesh_MeshDataArray::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Mesh_MeshData UnityEngine::Mesh_MeshDataArray::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_MeshData>(*this, ___internal_method, index);
}
inline void UnityEngine::Mesh_MeshDataArray::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Mesh_MeshDataArray::ApplyToMeshAndDispose(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"ApplyToMeshAndDispose", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, flags);
}
inline void UnityEngine::Mesh_MeshDataArray::_ctor(::UnityEngine::Mesh*  mesh, bool  checkReadWrite, bool  createAsCopy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, checkReadWrite, createAsCopy);
}
inline void UnityEngine::Mesh_MeshDataArray::_ctor(::ArrayW<::UnityEngine::Mesh*>  meshes, int32_t  meshesCount, bool  checkReadWrite, bool  createAsCopy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, meshes, meshesCount, checkReadWrite, createAsCopy);
}
inline void UnityEngine::Mesh_MeshDataArray::_ctor(int32_t  meshesCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, meshesCount);
}
inline void UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshData_Injected(::System::IntPtr  mesh, ::System::IntPtr*  datas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"AcquireReadOnlyMeshData_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, datas);
}
inline void UnityEngine::Mesh_MeshDataArray::AcquireReadOnlyMeshDatas_Injected(::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"AcquireReadOnlyMeshDatas_Injected", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshes, datas, count);
}
inline void UnityEngine::Mesh_MeshDataArray::AcquireMeshDataCopy_Injected(::System::IntPtr  mesh, ::System::IntPtr*  datas)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"AcquireMeshDataCopy_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, datas);
}
inline void UnityEngine::Mesh_MeshDataArray::AcquireMeshDatasCopy_Injected(::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"AcquireMeshDatasCopy_Injected", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>(), ::i2c::type_of<::System::IntPtr*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshes, datas, count);
}
inline void UnityEngine::Mesh_MeshDataArray::ApplyToMeshImpl_Injected(::System::IntPtr  mesh, ::System::IntPtr  data, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh_MeshDataArray>(),
                        {"ApplyToMeshImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, data, flags);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Mesh_MeshDataArray::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Mesh_MeshDataArray::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Ptrs", ty: "::System::IntPtr*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Mesh_MeshDataArray::Mesh_MeshDataArray(::System::IntPtr*  m_Ptrs, int32_t  m_Length) noexcept  {
this->m_Ptrs = m_Ptrs;
this->m_Length = m_Length;
}
// Ctor Parameters []
constexpr ::UnityEngine::Mesh_MeshDataArray::Mesh_MeshDataArray()   {
}
//  Writing Method size for method: ::UnityEngine::Mesh.Internal_Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*)>(&::UnityEngine::Mesh::Internal_Create)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"Internal_Create", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_indexFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IndexFormat (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_indexFormat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_indexFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_indexFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::IndexFormat)>(&::UnityEngine::Mesh::set_indexFormat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_indexFormat", {}, {::i2c::type_of<::UnityEngine::Rendering::IndexFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexCountImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Mesh::*)(int32_t, int32_t)>(&::UnityEngine::Mesh::GetIndexCountImpl)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182257240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndexCountImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTrianglesImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::Mesh::*)(int32_t, bool, int32_t)>(&::UnityEngine::Mesh::GetTrianglesImpl)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182257830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetTrianglesImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndicesImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::Mesh::*)(int32_t, bool, int32_t)>(&::UnityEngine::Mesh::GetIndicesImpl)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182257310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndicesImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndicesImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::UnityEngine::MeshTopology, ::UnityEngine::Rendering::IndexFormat, ::System::Array*, int32_t, int32_t, bool, int32_t, int32_t)>(&::UnityEngine::Mesh::SetIndicesImpl)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822585a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndicesImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.PrintErrorCantAccessChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::PrintErrorCantAccessChannel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182257f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"PrintErrorCantAccessChannel", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.HasVertexAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::HasVertexAttribute)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182257e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"HasVertexAttribute", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeDimension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::GetVertexAttributeDimension)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182257bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexAttributeDimension", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::VertexAttributeFormat (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::GetVertexAttributeFormat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182257c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexAttributeFormat", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::GetVertexAttributeStream)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182257ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexAttributeStream", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::GetVertexAttributeOffset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182257c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexAttributeOffset", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetArrayForChannelImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t, ::System::Array*, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetArrayForChannelImpl)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822583a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetArrayForChannelImpl", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNativeArrayForChannelImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t, ::System::IntPtr, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetNativeArrayForChannelImpl)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182258e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetNativeArrayForChannelImpl", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetAllocArrayFromChannelImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t)>(&::UnityEngine::Mesh::GetAllocArrayFromChannelImpl)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182257010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetAllocArrayFromChannelImpl", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetArrayFromChannelImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t, ::System::Array*)>(&::UnityEngine::Mesh::GetArrayFromChannelImpl)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182257070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetArrayFromChannelImpl", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexBufferStride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetVertexBufferStride)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182257d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexBufferStride", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexBufferImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetVertexBufferImpl)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182257cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexBufferImpl", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexBufferImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetIndexBufferImpl)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182257150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndexBufferImpl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_vertexBufferTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer_Target (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_vertexBufferTarget)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_vertexBufferTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_vertexBufferTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::GraphicsBuffer_Target)>(&::UnityEngine::Mesh::set_vertexBufferTarget)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_vertexBufferTarget", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_indexBufferTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer_Target (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_indexBufferTarget)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_indexBufferTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_indexBufferTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::GraphicsBuffer_Target)>(&::UnityEngine::Mesh::set_indexBufferTarget)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_indexBufferTarget", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_isReadable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_isReadable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_isReadable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_canAccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_canAccess)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_canAccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_vertexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_vertexCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_vertexCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_subMeshCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_subMeshCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_subMeshCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_subMeshCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::set_subMeshCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_subMeshCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetSubMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SubMeshDescriptor (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetSubMesh)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182257700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetSubMesh", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetLodCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetLodCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182257610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetLodCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetLodSelectionCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Mesh_LodSelectionCurve (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetLodSelectionCurve)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182257650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetLodSelectionCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MeshLodRange (::UnityEngine::Mesh::*)(int32_t, int32_t)>(&::UnityEngine::Mesh::GetLod)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822576a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetLod", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_bounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_bounds)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18225a130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_bounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_bounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Bounds)>(&::UnityEngine::Mesh::set_bounds)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_bounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.ClearImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(bool)>(&::UnityEngine::Mesh::ClearImpl)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182256e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"ClearImpl", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateBoundsImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::RecalculateBoundsImpl)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182257fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateBoundsImpl", {}, {::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateNormalsImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::RecalculateNormalsImpl)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182258100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateNormalsImpl", {}, {::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateTangentsImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::RecalculateTangentsImpl)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182258250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateTangentsImpl", {}, {::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.MarkDynamicImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::MarkDynamicImpl)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182257ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"MarkDynamicImpl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.UploadMeshDataImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(bool)>(&::UnityEngine::Mesh::UploadMeshDataImpl)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"UploadMeshDataImpl", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTopologyImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MeshTopology (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetTopologyImpl)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182257760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetTopologyImpl", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CombineMeshesImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::CombineInstance>, bool, bool, bool)>(&::UnityEngine::Mesh::CombineMeshesImpl)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182256ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"CombineMeshesImpl", {}, {::i2c::type_of<::ArrayW<::UnityEngine::CombineInstance>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetUVChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::VertexAttribute (*)(int32_t)>(&::UnityEngine::Mesh::GetUVChannel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182257b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetUVChannel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.DefaultDimensionForChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::DefaultDimensionForChannel)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182256fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"DefaultDimensionForChannel", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetSizedArrayForChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t, ::System::Array*, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetSizedArrayForChannel)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x182258f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetSizedArrayForChannel", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetSizedNativeArrayForChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t, ::System::IntPtr, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetSizedNativeArrayForChannel)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x182259260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetSizedNativeArrayForChannel", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_vertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_vertices)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_vertices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_vertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::Mesh::set_vertices)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18225a7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_vertices", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_normals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_normals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_normals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_normals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::Mesh::set_normals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_normals", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_tangents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector4> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_tangents)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_tangents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_tangents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector4>)>(&::UnityEngine::Mesh::set_tangents)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_tangents", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_uv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector2>)>(&::UnityEngine::Mesh::set_uv)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_uv", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_uv2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector2>)>(&::UnityEngine::Mesh::set_uv2)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_uv2", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_colors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_colors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_colors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_colors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Color>)>(&::UnityEngine::Mesh::set_colors)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_colors", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_colors32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Color32> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_colors32)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_colors32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_colors32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Color32>)>(&::UnityEngine::Mesh::set_colors32)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_colors32", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color32>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_lodCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_lodCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182257610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_lodCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_lodSelectionCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Mesh_LodSelectionCurve (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_lodSelectionCurve)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182257650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_lodSelectionCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182259fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetVertices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, int32_t, int32_t)>(&::UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182259ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetVertices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182259e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetVertices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182259ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetVertices", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector3>, int32_t, int32_t)>(&::UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18225a010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetVertices", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::Vector3>, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetVertices)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182259f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetVertices", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182258f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetNormals", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, int32_t, int32_t)>(&::UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182258ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetNormals", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetNormals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182258ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetNormals", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTangents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182259550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetTangents", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTangents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, int32_t, int32_t)>(&::UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822595d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetTangents", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTangents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetTangents)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822595a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetTangents", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Color>*)>(&::UnityEngine::Mesh::GetColors)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1822570c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetColors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Color>*)>(&::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182258540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetColors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Color>*, int32_t, int32_t)>(&::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182258440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetColors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Color>*, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822584d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetColors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Color32>*)>(&::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182258470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetColors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color32>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Color32>*, int32_t, int32_t)>(&::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182258500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetColors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color32>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<::UnityEngine::Color32>*, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetColors)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822583f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetColors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color32>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182259af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182259c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, int32_t, int32_t)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182259c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182259cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, int32_t, int32_t)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182259b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182259a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUvsImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, int32_t, ::System::Array*, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetUvsImpl)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182259d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUvsImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::ArrayW<::UnityEngine::Vector2>)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182259bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::ArrayW<::UnityEngine::Vector4>)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182259d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::ArrayW<::UnityEngine::Vector2>, int32_t, int32_t)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182259b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::ArrayW<::UnityEngine::Vector2>, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182259ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::ArrayW<::UnityEngine::Vector4>, int32_t, int32_t)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182259ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::ArrayW<::UnityEngine::Vector4>, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetUVs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182259a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::UnityEngine::Mesh::GetUVs)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182257b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetUVs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*)>(&::UnityEngine::Mesh::GetUVs)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182257b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.AcquireReadOnlyMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Mesh_MeshDataArray (*)(::UnityEngine::Mesh*)>(&::UnityEngine::Mesh::AcquireReadOnlyMeshData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822569a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"AcquireReadOnlyMeshData", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.AcquireReadOnlyMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Mesh_MeshDataArray (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*)>(&::UnityEngine::Mesh::AcquireReadOnlyMeshData)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822569d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"AcquireReadOnlyMeshData", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.AllocateWritableMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Mesh_MeshDataArray (*)(int32_t)>(&::UnityEngine::Mesh::AllocateWritableMeshData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182256a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"AllocateWritableMeshData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.ApplyAndDisposeWritableMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh_MeshDataArray, ::UnityEngine::Mesh*, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::ApplyAndDisposeWritableMeshData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182256a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"ApplyAndDisposeWritableMeshData", {}, {::i2c::type_of<::UnityEngine::Mesh_MeshDataArray>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetVertexBuffer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182257d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::GetIndexBuffer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822571a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndexBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.PrintErrorCantAccessIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::PrintErrorCantAccessIndices)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182257f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"PrintErrorCantAccessIndices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CheckCanAccessSubmesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Mesh::*)(int32_t, bool)>(&::UnityEngine::Mesh::CheckCanAccessSubmesh)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x182256b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"CheckCanAccessSubmesh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CheckCanAccessSubmeshTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::CheckCanAccessSubmeshTriangles)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182256b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"CheckCanAccessSubmeshTriangles", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CheckCanAccessSubmeshIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::CheckCanAccessSubmeshIndices)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182256b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"CheckCanAccessSubmeshIndices", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_triangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::get_triangles)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18225a310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_triangles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_triangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>)>(&::UnityEngine::Mesh::set_triangles)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18225a5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_triangles", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::Mesh::*)(int32_t, bool)>(&::UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182257a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetTriangles", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::Mesh::*)(int32_t, int32_t, bool)>(&::UnityEngine::Mesh::GetTriangles)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182257930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetTriangles", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x182257410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndices", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::UnityEngine::Mesh::*)(int32_t, int32_t, bool)>(&::UnityEngine::Mesh::GetIndices)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182257500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndices", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetIndexCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182257280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndexCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CheckIndicesArrayRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, int32_t, int32_t)>(&::UnityEngine::Mesh::CheckIndicesArrayRange)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x182256c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"CheckIndicesArrayRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTrianglesImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(int32_t, ::UnityEngine::Rendering::IndexFormat, ::System::Array*, int32_t, int32_t, int32_t, bool, int32_t, int32_t)>(&::UnityEngine::Mesh::SetTrianglesImpl)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182259600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetTrianglesImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182259950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetTriangles", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x182259860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetTriangles", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t, int32_t, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1822596c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetTriangles", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t, int32_t, int32_t, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetTriangles)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182259790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetTriangles", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, ::UnityEngine::MeshTopology, int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182258890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, ::UnityEngine::MeshTopology, int32_t, bool)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182258e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, ::UnityEngine::MeshTopology, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182258bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, int32_t, int32_t, ::UnityEngine::MeshTopology, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1822587c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<int32_t>, int32_t, int32_t, ::UnityEngine::MeshTopology, int32_t, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1822586e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<uint16_t>, ::UnityEngine::MeshTopology, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182258600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<uint16_t>, int32_t, int32_t, ::UnityEngine::MeshTopology, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182258c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<uint16_t>, int32_t, int32_t, ::UnityEngine::MeshTopology, int32_t, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182258d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, ::UnityEngine::MeshTopology, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1822588b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t, int32_t, ::UnityEngine::MeshTopology, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1822589b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::System::Collections::Generic::List_1<int32_t>*, int32_t, int32_t, ::UnityEngine::MeshTopology, int32_t, int32_t, bool, int32_t)>(&::UnityEngine::Mesh::SetIndices)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182258ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::Clear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182256ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::RecalculateBounds)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182257fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::RecalculateNormals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182258130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateNormals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateTangents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::RecalculateTangents)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182258280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateTangents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::RecalculateBounds)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182258060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateBounds", {}, {::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::RecalculateNormals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822581b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateNormals", {}, {::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateTangents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::RecalculateTangents)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182258300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateTangents", {}, {::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.MarkDynamic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)()>(&::UnityEngine::Mesh::MarkDynamic)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182257ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"MarkDynamic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.UploadMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(bool)>(&::UnityEngine::Mesh::UploadMeshData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18225a0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"UploadMeshData", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTopology
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MeshTopology (::UnityEngine::Mesh::*)(int32_t)>(&::UnityEngine::Mesh::GetTopology)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1822577a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetTopology", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CombineMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Mesh::*)(::ArrayW<::UnityEngine::CombineInstance>, bool, bool, bool)>(&::UnityEngine::Mesh::CombineMeshes)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182256ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"CombineMeshes", {}, {::i2c::type_of<::ArrayW<::UnityEngine::CombineInstance>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_indexFormat_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IndexFormat (*)(::System::IntPtr)>(&::UnityEngine::Mesh::get_indexFormat_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_indexFormat_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_indexFormat_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::IndexFormat)>(&::UnityEngine::Mesh::set_indexFormat_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_indexFormat_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexCountImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Mesh::GetIndexCountImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndexCountImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTrianglesImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, bool, int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Mesh::GetTrianglesImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetTrianglesImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndicesImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, bool, int32_t, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Mesh::GetIndicesImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndicesImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetIndicesImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::UnityEngine::MeshTopology, ::UnityEngine::Rendering::IndexFormat, ::System::Array*, int32_t, int32_t, bool, int32_t, int32_t)>(&::UnityEngine::Mesh::SetIndicesImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182258590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndicesImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.PrintErrorCantAccessChannel_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::PrintErrorCantAccessChannel_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"PrintErrorCantAccessChannel_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.HasVertexAttribute_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::HasVertexAttribute_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"HasVertexAttribute_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeDimension_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::GetVertexAttributeDimension_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexAttributeDimension_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeFormat_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::VertexAttributeFormat (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::GetVertexAttributeFormat_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexAttributeFormat_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeStream_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::GetVertexAttributeStream_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexAttributeStream_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexAttributeOffset_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute)>(&::UnityEngine::Mesh::GetVertexAttributeOffset_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexAttributeOffset_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetArrayForChannelImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t, ::System::Array*, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetArrayForChannelImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182258390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetArrayForChannelImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.SetNativeArrayForChannelImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t, ::System::IntPtr, int32_t, int32_t, int32_t, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::SetNativeArrayForChannelImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182258e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetNativeArrayForChannelImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetAllocArrayFromChannelImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t)>(&::UnityEngine::Mesh::GetAllocArrayFromChannelImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetAllocArrayFromChannelImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetArrayFromChannelImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, int32_t, ::System::Array*)>(&::UnityEngine::Mesh::GetArrayFromChannelImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetArrayFromChannelImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexBufferStride_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::GetVertexBufferStride_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexBufferStride_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetVertexBufferImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::GetVertexBufferImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexBufferImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetIndexBufferImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Mesh::GetIndexBufferImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndexBufferImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_vertexBufferTarget_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer_Target (*)(::System::IntPtr)>(&::UnityEngine::Mesh::get_vertexBufferTarget_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_vertexBufferTarget_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_vertexBufferTarget_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::GraphicsBuffer_Target)>(&::UnityEngine::Mesh::set_vertexBufferTarget_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_vertexBufferTarget_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_indexBufferTarget_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer_Target (*)(::System::IntPtr)>(&::UnityEngine::Mesh::get_indexBufferTarget_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_indexBufferTarget_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_indexBufferTarget_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::GraphicsBuffer_Target)>(&::UnityEngine::Mesh::set_indexBufferTarget_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_indexBufferTarget_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_isReadable_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Mesh::get_isReadable_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_isReadable_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_canAccess_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Mesh::get_canAccess_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_canAccess_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_vertexCount_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh::get_vertexCount_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_vertexCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_subMeshCount_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh::get_subMeshCount_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_subMeshCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_subMeshCount_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::set_subMeshCount_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_subMeshCount_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetSubMesh_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>)>(&::UnityEngine::Mesh::GetSubMesh_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822576f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetSubMesh_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetLodCount_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Mesh::GetLodCount_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetLodCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetLodSelectionCurve_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Mesh_LodSelectionCurve>)>(&::UnityEngine::Mesh::GetLodSelectionCurve_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetLodSelectionCurve_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Mesh_LodSelectionCurve>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetLod_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, ::by_ref<::UnityEngine::MeshLodRange>)>(&::UnityEngine::Mesh::GetLod_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetLod_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::MeshLodRange>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.get_bounds_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::Mesh::get_bounds_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_bounds_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.set_bounds_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::Mesh::set_bounds_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_bounds_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.ClearImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Mesh::ClearImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182256e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"ClearImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateBoundsImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::RecalculateBoundsImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateBoundsImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateNormalsImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::RecalculateNormalsImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822580f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateNormalsImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.RecalculateTangentsImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::MeshUpdateFlags)>(&::UnityEngine::Mesh::RecalculateTangentsImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182258240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateTangentsImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.MarkDynamicImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Mesh::MarkDynamicImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"MarkDynamicImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.UploadMeshDataImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Mesh::UploadMeshDataImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"UploadMeshDataImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.GetTopologyImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MeshTopology (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Mesh::GetTopologyImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182257750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetTopologyImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Mesh.CombineMeshesImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool, bool, bool)>(&::UnityEngine::Mesh::CombineMeshesImpl_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182256ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"CombineMeshesImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Mesh::Internal_Create(::UnityEngine::Mesh*  mono)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"Internal_Create", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mono);
}
inline void UnityEngine::Mesh::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::IndexFormat UnityEngine::Mesh::get_indexFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_indexFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IndexFormat>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_indexFormat(::UnityEngine::Rendering::IndexFormat  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_indexFormat", {}, {::i2c::type_of<::UnityEngine::Rendering::IndexFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::Mesh::GetIndexCountImpl(int32_t  submesh, int32_t  meshlod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndexCountImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, submesh, meshlod);
}
inline ::ArrayW<int32_t> UnityEngine::Mesh::GetTrianglesImpl(int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetTrianglesImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, submesh, applyBaseVertex, meshlod);
}
inline ::ArrayW<int32_t> UnityEngine::Mesh::GetIndicesImpl(int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndicesImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, submesh, applyBaseVertex, meshlod);
}
inline void UnityEngine::Mesh::SetIndicesImpl(int32_t  submesh, ::UnityEngine::MeshTopology  topology, ::UnityEngine::Rendering::IndexFormat  indicesFormat, ::System::Array*  indices, int32_t  arrayStart, int32_t  arraySize, bool  calculateBounds, int32_t  baseVertex, int32_t  meshlod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndicesImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, submesh, topology, indicesFormat, indices, arrayStart, arraySize, calculateBounds, baseVertex, meshlod);
}
inline void UnityEngine::Mesh::PrintErrorCantAccessChannel(::UnityEngine::Rendering::VertexAttribute  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"PrintErrorCantAccessChannel", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline bool UnityEngine::Mesh::HasVertexAttribute(::UnityEngine::Rendering::VertexAttribute  attr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"HasVertexAttribute", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attr);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributeDimension(::UnityEngine::Rendering::VertexAttribute  attr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexAttributeDimension", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, attr);
}
inline ::UnityEngine::Rendering::VertexAttributeFormat UnityEngine::Mesh::GetVertexAttributeFormat(::UnityEngine::Rendering::VertexAttribute  attr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexAttributeFormat", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VertexAttributeFormat>(this, ___internal_method, attr);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributeStream(::UnityEngine::Rendering::VertexAttribute  attr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexAttributeStream", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, attr);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributeOffset(::UnityEngine::Rendering::VertexAttribute  attr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexAttributeOffset", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, attr);
}
inline void UnityEngine::Mesh::SetArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Array*  values, int32_t  arraySize, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetArrayForChannelImpl", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, format, dim, values, arraySize, valuesStart, valuesCount, flags);
}
inline void UnityEngine::Mesh::SetNativeArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::IntPtr  values, int32_t  arraySize, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetNativeArrayForChannelImpl", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, format, dim, values, arraySize, valuesStart, valuesCount, flags);
}
inline ::System::Array* UnityEngine::Mesh::GetAllocArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetAllocArrayFromChannelImpl", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Array*>(this, ___internal_method, channel, format, dim);
}
inline void UnityEngine::Mesh::GetArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Array*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetArrayFromChannelImpl", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, format, dim, values);
}
inline int32_t UnityEngine::Mesh::GetVertexBufferStride(int32_t  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexBufferStride", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, stream);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Mesh::GetVertexBufferImpl(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexBufferImpl", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method, index);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Mesh::GetIndexBufferImpl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndexBufferImpl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer_Target UnityEngine::Mesh::get_vertexBufferTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_vertexBufferTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer_Target>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_vertexBufferTarget(::UnityEngine::GraphicsBuffer_Target  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_vertexBufferTarget", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GraphicsBuffer_Target UnityEngine::Mesh::get_indexBufferTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_indexBufferTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer_Target>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_indexBufferTarget(::UnityEngine::GraphicsBuffer_Target  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_indexBufferTarget", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Mesh::get_isReadable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_isReadable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Mesh::get_canAccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_canAccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::Mesh::get_vertexCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_vertexCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Mesh::get_subMeshCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_subMeshCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_subMeshCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_subMeshCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::SubMeshDescriptor UnityEngine::Mesh::GetSubMesh(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetSubMesh", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SubMeshDescriptor>(this, ___internal_method, index);
}
inline int32_t UnityEngine::Mesh::GetLodCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetLodCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Mesh_LodSelectionCurve UnityEngine::Mesh::GetLodSelectionCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetLodSelectionCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_LodSelectionCurve>(this, ___internal_method);
}
inline ::UnityEngine::MeshLodRange UnityEngine::Mesh::GetLod(int32_t  subMeshIndex, int32_t  levelIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetLod", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshLodRange>(this, ___internal_method, subMeshIndex, levelIndex);
}
inline ::UnityEngine::Bounds UnityEngine::Mesh::get_bounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_bounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_bounds(::UnityEngine::Bounds  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_bounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Mesh::ClearImpl(bool  keepVertexLayout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"ClearImpl", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keepVertexLayout);
}
inline void UnityEngine::Mesh::RecalculateBoundsImpl(::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateBoundsImpl", {}, {::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline void UnityEngine::Mesh::RecalculateNormalsImpl(::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateNormalsImpl", {}, {::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline void UnityEngine::Mesh::RecalculateTangentsImpl(::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateTangentsImpl", {}, {::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline void UnityEngine::Mesh::MarkDynamicImpl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"MarkDynamicImpl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Mesh::UploadMeshDataImpl(bool  markNoLongerReadable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"UploadMeshDataImpl", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markNoLongerReadable);
}
inline ::UnityEngine::MeshTopology UnityEngine::Mesh::GetTopologyImpl(int32_t  submesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetTopologyImpl", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshTopology>(this, ___internal_method, submesh);
}
inline void UnityEngine::Mesh::CombineMeshesImpl(::ArrayW<::UnityEngine::CombineInstance>  combine, bool  mergeSubMeshes, bool  useMatrices, bool  hasLightmapData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"CombineMeshesImpl", {}, {::i2c::type_of<::ArrayW<::UnityEngine::CombineInstance>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, combine, mergeSubMeshes, useMatrices, hasLightmapData);
}
inline ::UnityEngine::Rendering::VertexAttribute UnityEngine::Mesh::GetUVChannel(int32_t  uvIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetUVChannel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VertexAttribute>(nullptr, ___internal_method, uvIndex);
}
inline int32_t UnityEngine::Mesh::DefaultDimensionForChannel(::UnityEngine::Rendering::VertexAttribute  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"DefaultDimensionForChannel", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, channel);
}
template<typename T>
inline ::ArrayW<T> UnityEngine::Mesh::GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"GetAllocArrayFromChannel", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, channel, format, dim);
}
template<typename T>
inline ::ArrayW<T> UnityEngine::Mesh::GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute  channel)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"GetAllocArrayFromChannel", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, channel);
}
inline void UnityEngine::Mesh::SetSizedArrayForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Array*  values, int32_t  valuesArrayLength, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetSizedArrayForChannel", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, format, dim, values, valuesArrayLength, valuesStart, valuesCount, flags);
}
inline void UnityEngine::Mesh::SetSizedNativeArrayForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::IntPtr  values, int32_t  valuesArrayLength, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetSizedNativeArrayForChannel", {}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, format, dim, values, valuesArrayLength, valuesStart, valuesCount, flags);
}
template<typename T>
inline void UnityEngine::Mesh::SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::ArrayW<T>  values, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"SetArrayForChannel", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, format, dim, values, flags);
}
template<typename T>
inline void UnityEngine::Mesh::SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::ArrayW<T>  values, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"SetArrayForChannel", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, values, flags);
}
template<typename T>
inline void UnityEngine::Mesh::SetListForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Collections::Generic::List_1<T>*  values, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"SetListForChannel", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, format, dim, values, start, length, flags);
}
template<typename T>
inline void UnityEngine::Mesh::SetListForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::System::Collections::Generic::List_1<T>*  values, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"SetListForChannel", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, values, start, length, flags);
}
template<typename T>
inline void UnityEngine::Mesh::GetListForChannel(::System::Collections::Generic::List_1<T>*  buffer, int32_t  capacity, ::UnityEngine::Rendering::VertexAttribute  channel, int32_t  dim)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"GetListForChannel", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, capacity, channel, dim);
}
template<typename T>
inline void UnityEngine::Mesh::GetListForChannel(::System::Collections::Generic::List_1<T>*  buffer, int32_t  capacity, ::UnityEngine::Rendering::VertexAttribute  channel, int32_t  dim, ::UnityEngine::Rendering::VertexAttributeFormat  channelType)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"GetListForChannel", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, capacity, channel, dim, channelType);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::Mesh::get_vertices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_vertices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_vertices(::ArrayW<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_vertices", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::Mesh::get_normals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_normals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_normals(::ArrayW<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_normals", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector4> UnityEngine::Mesh::get_tangents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_tangents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_tangents(::ArrayW<::UnityEngine::Vector4>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_tangents", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Mesh::set_uv(::ArrayW<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_uv", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Mesh::set_uv2(::ArrayW<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_uv2", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Color> UnityEngine::Mesh::get_colors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_colors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_colors(::ArrayW<::UnityEngine::Color>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_colors", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Color32> UnityEngine::Mesh::get_colors32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_colors32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color32>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_colors32(::ArrayW<::UnityEngine::Color32>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_colors32", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Color32>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Mesh::get_lodCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_lodCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Mesh_LodSelectionCurve UnityEngine::Mesh::get_lodSelectionCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_lodSelectionCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_LodSelectionCurve>(this, ___internal_method);
}
inline void UnityEngine::Mesh::SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inVertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetVertices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVertices);
}
inline void UnityEngine::Mesh::SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inVertices, int32_t  start, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetVertices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVertices, start, length);
}
inline void UnityEngine::Mesh::SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inVertices, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetVertices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVertices, start, length, flags);
}
inline void UnityEngine::Mesh::SetVertices(::ArrayW<::UnityEngine::Vector3>  inVertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetVertices", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVertices);
}
inline void UnityEngine::Mesh::SetVertices(::ArrayW<::UnityEngine::Vector3>  inVertices, int32_t  start, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetVertices", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVertices, start, length);
}
inline void UnityEngine::Mesh::SetVertices(::ArrayW<::UnityEngine::Vector3>  inVertices, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetVertices", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVertices, start, length, flags);
}
template<typename T>
inline void UnityEngine::Mesh::SetVertices(::Unity::Collections::NativeArray_1<T>  inVertices)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"SetVertices", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVertices);
}
template<typename T>
inline void UnityEngine::Mesh::SetVertices(::Unity::Collections::NativeArray_1<T>  inVertices, int32_t  start, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"SetVertices", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVertices, start, length);
}
template<typename T>
inline void UnityEngine::Mesh::SetVertices(::Unity::Collections::NativeArray_1<T>  inVertices, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"SetVertices", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inVertices, start, length, flags);
}
inline void UnityEngine::Mesh::SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inNormals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetNormals", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inNormals);
}
inline void UnityEngine::Mesh::SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inNormals, int32_t  start, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetNormals", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inNormals, start, length);
}
inline void UnityEngine::Mesh::SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inNormals, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetNormals", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inNormals, start, length, flags);
}
template<typename T>
inline void UnityEngine::Mesh::SetNormals(::Unity::Collections::NativeArray_1<T>  inNormals)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"SetNormals", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inNormals);
}
template<typename T>
inline void UnityEngine::Mesh::SetNormals(::Unity::Collections::NativeArray_1<T>  inNormals, int32_t  start, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"SetNormals", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inNormals, start, length);
}
template<typename T>
inline void UnityEngine::Mesh::SetNormals(::Unity::Collections::NativeArray_1<T>  inNormals, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"SetNormals", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inNormals, start, length, flags);
}
inline void UnityEngine::Mesh::SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  inTangents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetTangents", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inTangents);
}
inline void UnityEngine::Mesh::SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  inTangents, int32_t  start, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetTangents", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inTangents, start, length);
}
inline void UnityEngine::Mesh::SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  inTangents, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetTangents", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inTangents, start, length, flags);
}
template<typename T>
inline void UnityEngine::Mesh::SetTangents(::Unity::Collections::NativeArray_1<T>  inTangents)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"SetTangents", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inTangents);
}
template<typename T>
inline void UnityEngine::Mesh::SetTangents(::Unity::Collections::NativeArray_1<T>  inTangents, int32_t  start, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"SetTangents", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inTangents, start, length);
}
template<typename T>
inline void UnityEngine::Mesh::SetTangents(::Unity::Collections::NativeArray_1<T>  inTangents, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"SetTangents", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inTangents, start, length, flags);
}
inline void UnityEngine::Mesh::GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  colors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetColors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colors);
}
inline void UnityEngine::Mesh::SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  inColors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetColors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors);
}
inline void UnityEngine::Mesh::SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  inColors, int32_t  start, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetColors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors, start, length);
}
inline void UnityEngine::Mesh::SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  inColors, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetColors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors, start, length, flags);
}
inline void UnityEngine::Mesh::SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  inColors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetColors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color32>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors);
}
inline void UnityEngine::Mesh::SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  inColors, int32_t  start, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetColors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color32>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors, start, length);
}
inline void UnityEngine::Mesh::SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  inColors, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetColors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color32>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inColors, start, length, flags);
}
template<typename T>
inline void UnityEngine::Mesh::SetUvsImpl(int32_t  uvIndex, int32_t  dim, ::System::Collections::Generic::List_1<T>*  uvs, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"SetUvsImpl", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uvIndex, dim, uvs, start, length, flags);
}
inline void UnityEngine::Mesh::SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uvs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs, int32_t  start, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length);
}
inline void UnityEngine::Mesh::SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length, flags);
}
inline void UnityEngine::Mesh::SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uvs, int32_t  start, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length);
}
inline void UnityEngine::Mesh::SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uvs, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length, flags);
}
inline void UnityEngine::Mesh::SetUvsImpl(int32_t  uvIndex, int32_t  dim, ::System::Array*  uvs, int32_t  arrayStart, int32_t  arraySize, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUvsImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uvIndex, dim, uvs, arrayStart, arraySize, flags);
}
inline void UnityEngine::Mesh::SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector2>  uvs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector4>  uvs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector2>  uvs, int32_t  start, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length);
}
inline void UnityEngine::Mesh::SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector2>  uvs, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length, flags);
}
inline void UnityEngine::Mesh::SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector4>  uvs, int32_t  start, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length);
}
inline void UnityEngine::Mesh::SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector4>  uvs, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length, flags);
}
template<typename T>
inline void UnityEngine::Mesh::SetUVs(int32_t  channel, ::Unity::Collections::NativeArray_1<T>  uvs)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"SetUVs", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
template<typename T>
inline void UnityEngine::Mesh::SetUVs(int32_t  channel, ::Unity::Collections::NativeArray_1<T>  uvs, int32_t  start, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"SetUVs", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length);
}
template<typename T>
inline void UnityEngine::Mesh::SetUVs(int32_t  channel, ::Unity::Collections::NativeArray_1<T>  uvs, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"SetUVs", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs, start, length, flags);
}
template<typename T>
inline void UnityEngine::Mesh::GetUVsImpl(int32_t  uvIndex, ::System::Collections::Generic::List_1<T>*  uvs, int32_t  dim)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Mesh*>(),
                    {"GetUVsImpl", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uvIndex, uvs, dim);
}
inline void UnityEngine::Mesh::GetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  uvs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
inline void UnityEngine::Mesh::GetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uvs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetUVs", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, uvs);
}
inline ::UnityEngine::Mesh_MeshDataArray UnityEngine::Mesh::AcquireReadOnlyMeshData(::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"AcquireReadOnlyMeshData", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_MeshDataArray>(nullptr, ___internal_method, mesh);
}
inline ::UnityEngine::Mesh_MeshDataArray UnityEngine::Mesh::AcquireReadOnlyMeshData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  meshes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"AcquireReadOnlyMeshData", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_MeshDataArray>(nullptr, ___internal_method, meshes);
}
inline ::UnityEngine::Mesh_MeshDataArray UnityEngine::Mesh::AllocateWritableMeshData(int32_t  meshCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"AllocateWritableMeshData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh_MeshDataArray>(nullptr, ___internal_method, meshCount);
}
inline void UnityEngine::Mesh::ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray  data, ::UnityEngine::Mesh*  mesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"ApplyAndDisposeWritableMeshData", {}, {::i2c::type_of<::UnityEngine::Mesh_MeshDataArray>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, mesh, flags);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Mesh::GetVertexBuffer(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method, index);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Mesh::GetIndexBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndexBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(this, ___internal_method);
}
inline void UnityEngine::Mesh::PrintErrorCantAccessIndices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"PrintErrorCantAccessIndices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Mesh::CheckCanAccessSubmesh(int32_t  submesh, bool  errorAboutTriangles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"CheckCanAccessSubmesh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, submesh, errorAboutTriangles);
}
inline bool UnityEngine::Mesh::CheckCanAccessSubmeshTriangles(int32_t  submesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"CheckCanAccessSubmeshTriangles", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, submesh);
}
inline bool UnityEngine::Mesh::CheckCanAccessSubmeshIndices(int32_t  submesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"CheckCanAccessSubmeshIndices", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, submesh);
}
inline ::ArrayW<int32_t> UnityEngine::Mesh::get_triangles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_triangles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void UnityEngine::Mesh::set_triangles(::ArrayW<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_triangles", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<int32_t> UnityEngine::Mesh::GetTriangles(int32_t  submesh, bool  applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetTriangles", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, submesh, applyBaseVertex);
}
inline ::ArrayW<int32_t> UnityEngine::Mesh::GetTriangles(int32_t  submesh, int32_t  meshLod, bool  applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetTriangles", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, submesh, meshLod, applyBaseVertex);
}
inline ::ArrayW<int32_t> UnityEngine::Mesh::GetIndices(int32_t  submesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndices", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, submesh);
}
inline ::ArrayW<int32_t> UnityEngine::Mesh::GetIndices(int32_t  submesh, int32_t  meshLod, bool  applyBaseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndices", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, submesh, meshLod, applyBaseVertex);
}
inline uint32_t UnityEngine::Mesh::GetIndexCount(int32_t  submesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndexCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, submesh);
}
inline void UnityEngine::Mesh::CheckIndicesArrayRange(int32_t  valuesLength, int32_t  start, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"CheckIndicesArrayRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valuesLength, start, length);
}
inline void UnityEngine::Mesh::SetTrianglesImpl(int32_t  submesh, ::UnityEngine::Rendering::IndexFormat  indicesFormat, ::System::Array*  triangles, int32_t  trianglesArrayLength, int32_t  start, int32_t  length, bool  calculateBounds, int32_t  baseVertex, int32_t  meshLod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetTrianglesImpl", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, submesh, indicesFormat, triangles, trianglesArrayLength, start, length, calculateBounds, baseVertex, meshLod);
}
inline void UnityEngine::Mesh::SetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  submesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetTriangles", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh);
}
inline void UnityEngine::Mesh::SetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetTriangles", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  trianglesStart, int32_t  trianglesLength, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetTriangles", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, trianglesStart, trianglesLength, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  trianglesStart, int32_t  trianglesLength, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetTriangles", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triangles, trianglesStart, trianglesLength, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::ArrayW<int32_t>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, topology, submesh);
}
inline void UnityEngine::Mesh::SetIndices(::ArrayW<int32_t>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, topology, submesh, calculateBounds);
}
inline void UnityEngine::Mesh::SetIndices(::ArrayW<int32_t>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, topology, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::ArrayW<int32_t>  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, indicesStart, indicesLength, topology, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::ArrayW<int32_t>  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, indicesStart, indicesLength, topology, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::ArrayW<uint16_t>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, topology, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::ArrayW<uint16_t>  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, indicesStart, indicesLength, topology, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::ArrayW<uint16_t>  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, indicesStart, indicesLength, topology, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::System::Collections::Generic::List_1<int32_t>*  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, topology, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::System::Collections::Generic::List_1<int32_t>*  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, indicesStart, indicesLength, topology, submesh, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::SetIndices(::System::Collections::Generic::List_1<int32_t>*  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndices", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, indicesStart, indicesLength, topology, submesh, meshLod, calculateBounds, baseVertex);
}
inline void UnityEngine::Mesh::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Mesh::RecalculateBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Mesh::RecalculateNormals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateNormals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Mesh::RecalculateTangents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateTangents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Mesh::RecalculateBounds(::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateBounds", {}, {::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline void UnityEngine::Mesh::RecalculateNormals(::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateNormals", {}, {::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline void UnityEngine::Mesh::RecalculateTangents(::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateTangents", {}, {::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline void UnityEngine::Mesh::MarkDynamic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"MarkDynamic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Mesh::UploadMeshData(bool  markNoLongerReadable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"UploadMeshData", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markNoLongerReadable);
}
inline ::UnityEngine::MeshTopology UnityEngine::Mesh::GetTopology(int32_t  submesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetTopology", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshTopology>(this, ___internal_method, submesh);
}
inline void UnityEngine::Mesh::CombineMeshes(::ArrayW<::UnityEngine::CombineInstance>  combine, bool  mergeSubMeshes, bool  useMatrices, bool  hasLightmapData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"CombineMeshes", {}, {::i2c::type_of<::ArrayW<::UnityEngine::CombineInstance>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, combine, mergeSubMeshes, useMatrices, hasLightmapData);
}
inline ::UnityEngine::Rendering::IndexFormat UnityEngine::Mesh::get_indexFormat_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_indexFormat_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IndexFormat>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::set_indexFormat_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::IndexFormat  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_indexFormat_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline uint32_t UnityEngine::Mesh::GetIndexCountImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh, int32_t  meshlod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndexCountImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, _unity_self, submesh, meshlod);
}
inline void UnityEngine::Mesh::GetTrianglesImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetTrianglesImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, submesh, applyBaseVertex, meshlod, ret);
}
inline void UnityEngine::Mesh::GetIndicesImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndicesImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, submesh, applyBaseVertex, meshlod, ret);
}
inline void UnityEngine::Mesh::SetIndicesImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh, ::UnityEngine::MeshTopology  topology, ::UnityEngine::Rendering::IndexFormat  indicesFormat, ::System::Array*  indices, int32_t  arrayStart, int32_t  arraySize, bool  calculateBounds, int32_t  baseVertex, int32_t  meshlod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetIndicesImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<::UnityEngine::Rendering::IndexFormat>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, submesh, topology, indicesFormat, indices, arrayStart, arraySize, calculateBounds, baseVertex, meshlod);
}
inline void UnityEngine::Mesh::PrintErrorCantAccessChannel_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"PrintErrorCantAccessChannel_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ch);
}
inline bool UnityEngine::Mesh::HasVertexAttribute_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  attr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"HasVertexAttribute_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, attr);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributeDimension_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  attr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexAttributeDimension_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, attr);
}
inline ::UnityEngine::Rendering::VertexAttributeFormat UnityEngine::Mesh::GetVertexAttributeFormat_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  attr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexAttributeFormat_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::VertexAttributeFormat>(nullptr, ___internal_method, _unity_self, attr);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributeStream_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  attr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexAttributeStream_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, attr);
}
inline int32_t UnityEngine::Mesh::GetVertexAttributeOffset_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  attr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexAttributeOffset_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, attr);
}
inline void UnityEngine::Mesh::SetArrayForChannelImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Array*  values, int32_t  arraySize, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetArrayForChannelImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, channel, format, dim, values, arraySize, valuesStart, valuesCount, flags);
}
inline void UnityEngine::Mesh::SetNativeArrayForChannelImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::IntPtr  values, int32_t  arraySize, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"SetNativeArrayForChannelImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, channel, format, dim, values, arraySize, valuesStart, valuesCount, flags);
}
inline ::System::Array* UnityEngine::Mesh::GetAllocArrayFromChannelImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetAllocArrayFromChannelImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Array*>(nullptr, ___internal_method, _unity_self, channel, format, dim);
}
inline void UnityEngine::Mesh::GetArrayFromChannelImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Array*  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetArrayFromChannelImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttribute>(), ::i2c::type_of<::UnityEngine::Rendering::VertexAttributeFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, channel, format, dim, values);
}
inline int32_t UnityEngine::Mesh::GetVertexBufferStride_Injected(::System::IntPtr  _unity_self, int32_t  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexBufferStride_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, stream);
}
inline ::System::IntPtr UnityEngine::Mesh::GetVertexBufferImpl_Injected(::System::IntPtr  _unity_self, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetVertexBufferImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, index);
}
inline ::System::IntPtr UnityEngine::Mesh::GetIndexBufferImpl_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetIndexBufferImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::GraphicsBuffer_Target UnityEngine::Mesh::get_vertexBufferTarget_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_vertexBufferTarget_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer_Target>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::set_vertexBufferTarget_Injected(::System::IntPtr  _unity_self, ::UnityEngine::GraphicsBuffer_Target  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_vertexBufferTarget_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::GraphicsBuffer_Target UnityEngine::Mesh::get_indexBufferTarget_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_indexBufferTarget_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer_Target>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::set_indexBufferTarget_Injected(::System::IntPtr  _unity_self, ::UnityEngine::GraphicsBuffer_Target  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_indexBufferTarget_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Mesh::get_isReadable_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_isReadable_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Mesh::get_canAccess_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_canAccess_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Mesh::get_vertexCount_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_vertexCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Mesh::get_subMeshCount_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_subMeshCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::set_subMeshCount_Injected(::System::IntPtr  _unity_self, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_subMeshCount_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Mesh::GetSubMesh_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetSubMesh_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index, ret);
}
inline int32_t UnityEngine::Mesh::GetLodCount_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetLodCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::GetLodSelectionCurve_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Mesh_LodSelectionCurve>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetLodSelectionCurve_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Mesh_LodSelectionCurve>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Mesh::GetLod_Injected(::System::IntPtr  _unity_self, int32_t  subMeshIndex, int32_t  levelIndex, ::by_ref<::UnityEngine::MeshLodRange>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetLod_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::MeshLodRange>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, subMeshIndex, levelIndex, ret);
}
inline void UnityEngine::Mesh::get_bounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"get_bounds_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Mesh::set_bounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"set_bounds_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Mesh::ClearImpl_Injected(::System::IntPtr  _unity_self, bool  keepVertexLayout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"ClearImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, keepVertexLayout);
}
inline void UnityEngine::Mesh::RecalculateBoundsImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateBoundsImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, flags);
}
inline void UnityEngine::Mesh::RecalculateNormalsImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateNormalsImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, flags);
}
inline void UnityEngine::Mesh::RecalculateTangentsImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"RecalculateTangentsImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::MeshUpdateFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, flags);
}
inline void UnityEngine::Mesh::MarkDynamicImpl_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"MarkDynamicImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Mesh::UploadMeshDataImpl_Injected(::System::IntPtr  _unity_self, bool  markNoLongerReadable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"UploadMeshDataImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, markNoLongerReadable);
}
inline ::UnityEngine::MeshTopology UnityEngine::Mesh::GetTopologyImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"GetTopologyImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MeshTopology>(nullptr, ___internal_method, _unity_self, submesh);
}
inline void UnityEngine::Mesh::CombineMeshesImpl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  combine, bool  mergeSubMeshes, bool  useMatrices, bool  hasLightmapData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Mesh*>(),
                        {"CombineMeshesImpl_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, combine, mergeSubMeshes, useMatrices, hasLightmapData);
}
inline ::UnityEngine::Mesh* UnityEngine::Mesh::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Mesh*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Mesh::Mesh()   {
}
