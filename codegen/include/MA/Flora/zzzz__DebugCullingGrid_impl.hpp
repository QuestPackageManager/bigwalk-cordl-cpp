#pragma once
// IWYU pragma private; include "MA/Flora/DebugCullingGrid.hpp"
#include "MA/Flora/zzzz__CullingGrid_impl.hpp"
#include "MA/Flora/zzzz__DebugCullingGridShaderVariables_impl.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "MA/Flora/zzzz__DebugCullingGrid_def.hpp"
#include "MA/Flora/zzzz__DebugCullingGrid_def.hpp"
#include "MA/Flora/zzzz__FloraDebugDisplayProperties_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeResources_def.hpp"
#include "MA/Flora/zzzz__InstanceContext_def.hpp"
#include "MA/Flora/zzzz__NativeBitSet_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DebugCullingGrid_DrawType::DebugCullingGrid_DrawType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::DebugCullingGrid_DrawType::DebugCullingGrid_DrawType()   {
}
constexpr ::MA::Flora::DebugCullingGrid_DrawType  MA::Flora::DebugCullingGrid_DrawType::Blocks{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::DebugCullingGrid_DrawType  MA::Flora::DebugCullingGrid_DrawType::Cells{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::DebugCullingGrid_DrawType  MA::Flora::DebugCullingGrid_DrawType::Chunks{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::MA::Flora::DebugCullingGrid_ContextKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DebugCullingGrid_ContextKey::*)(::MA::Flora::DebugCullingGrid_ContextKey)>(&::MA::Flora::DebugCullingGrid_ContextKey::Equals)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814c2e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid_ContextKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::DebugCullingGrid_ContextKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugCullingGrid_ContextKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DebugCullingGrid_ContextKey::*)(::System::Object*)>(&::MA::Flora::DebugCullingGrid_ContextKey::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814c2df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::DebugCullingGrid_ContextKey>(),
                    {::i2c::class_of<::MA::Flora::DebugCullingGrid_ContextKey>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugCullingGrid_ContextKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::DebugCullingGrid_ContextKey::*)()>(&::MA::Flora::DebugCullingGrid_ContextKey::GetHashCode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814c2ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::DebugCullingGrid_ContextKey>(),
                    {::i2c::class_of<::MA::Flora::DebugCullingGrid_ContextKey>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool MA::Flora::DebugCullingGrid_ContextKey::Equals(::MA::Flora::DebugCullingGrid_ContextKey  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid_ContextKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::DebugCullingGrid_ContextKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::DebugCullingGrid_ContextKey::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::DebugCullingGrid_ContextKey>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::DebugCullingGrid_ContextKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::DebugCullingGrid_ContextKey>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::DebugCullingGrid_ContextKey>"
constexpr  MA::Flora::DebugCullingGrid_ContextKey::operator ::System::IEquatable_1<::MA::Flora::DebugCullingGrid_ContextKey>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::DebugCullingGrid_ContextKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::DebugCullingGrid_ContextKey>"
constexpr ::System::IEquatable_1<::MA::Flora::DebugCullingGrid_ContextKey>* MA::Flora::DebugCullingGrid_ContextKey::i___System__IEquatable_1___MA__Flora__DebugCullingGrid_ContextKey_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::DebugCullingGrid_ContextKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Type", ty: "::MA::Flora::DebugCullingGrid_DrawType", modifiers: "", def_value: Some("{}") }, CppParam { name: "CameraId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DebugCullingGrid_ContextKey::DebugCullingGrid_ContextKey(::MA::Flora::DebugCullingGrid_DrawType  Type, ::UnityEngine::EntityId  CameraId) noexcept  {
this->Type = Type;
this->CameraId = CameraId;
}
// Ctor Parameters []
constexpr ::MA::Flora::DebugCullingGrid_ContextKey::DebugCullingGrid_ContextKey()   {
}
//  Writing Method size for method: ::MA::Flora::DebugCullingGrid_ContextHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugCullingGrid_ContextHandle::*)(::MA::Flora::FloraRuntimeResources*)>(&::MA::Flora::DebugCullingGrid_ContextHandle::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814c2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid_ContextHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugCullingGrid_ContextHandle.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugCullingGrid_ContextHandle::*)()>(&::MA::Flora::DebugCullingGrid_ContextHandle::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814c2d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid_ContextHandle*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::Flora::DebugCullingGrid_DrawType& MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::MA::Flora::DebugCullingGrid_DrawType const& MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_set_Type(::MA::Flora::DebugCullingGrid_DrawType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
constexpr ::UnityEngine::EntityId& MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_get_CameraId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraId;
}
constexpr ::UnityEngine::EntityId const& MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_get_CameraId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CameraId;
}
constexpr void MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_set_CameraId(::UnityEngine::EntityId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CameraId = value;
}
constexpr int32_t& MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_get_LastUsedFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastUsedFrame;
}
constexpr int32_t const& MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_get_LastUsedFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastUsedFrame;
}
constexpr void MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_set_LastUsedFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastUsedFrame = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_get_DebugShaderVariablesBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugShaderVariablesBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_get_DebugShaderVariablesBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugShaderVariablesBuffer;
}
constexpr void MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_set_DebugShaderVariablesBuffer(::UnityEngine::GraphicsBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugShaderVariablesBuffer = value;
}
constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::DebugCullingGridShaderVariables>& MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_get_DebugShaderVariablesData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugShaderVariablesData;
}
constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::DebugCullingGridShaderVariables> const& MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_get_DebugShaderVariablesData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugShaderVariablesData;
}
constexpr void MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_set_DebugShaderVariablesData(::Unity::Collections::NativeArray_1<::MA::Flora::DebugCullingGridShaderVariables>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugShaderVariablesData = value;
}
constexpr ::UnityW<::UnityEngine::Material>& MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_get_LineMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LineMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_get_LineMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LineMaterial;
}
constexpr void MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_set_LineMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LineMaterial = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_get_LineVertexBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LineVertexBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_get_LineVertexBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LineVertexBuffer;
}
constexpr void MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_set_LineVertexBuffer(::UnityEngine::GraphicsBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LineVertexBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_get_LineCounterBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LineCounterBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_get_LineCounterBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LineCounterBuffer;
}
constexpr void MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_set_LineCounterBuffer(::UnityEngine::GraphicsBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LineCounterBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_get_LineDrawArgsBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LineDrawArgsBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_get_LineDrawArgsBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LineDrawArgsBuffer;
}
constexpr void MA::Flora::DebugCullingGrid_ContextHandle::__cordl_internal_set_LineDrawArgsBuffer(::UnityEngine::GraphicsBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LineDrawArgsBuffer = value;
}
inline void MA::Flora::DebugCullingGrid_ContextHandle::_ctor(::MA::Flora::FloraRuntimeResources*  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid_ContextHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resources);
}
inline void MA::Flora::DebugCullingGrid_ContextHandle::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid_ContextHandle*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::DebugCullingGrid_ContextHandle* MA::Flora::DebugCullingGrid_ContextHandle::New_ctor(::MA::Flora::FloraRuntimeResources*  resources)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::DebugCullingGrid_ContextHandle*>(resources));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::DebugCullingGrid_ContextHandle::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::DebugCullingGrid_ContextHandle::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::Flora::DebugCullingGrid_ContextHandle::DebugCullingGrid_ContextHandle()   {
}
inline void MA::Flora::DebugCullingGrid_LocalNameID::setStaticF_DebugCullingGridShaderVariables(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DebugCullingGridShaderVariables", ::MA::Flora::DebugCullingGrid_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::DebugCullingGrid_LocalNameID::getStaticF_DebugCullingGridShaderVariables()  {
return ::cordl_internals::getStaticField<int32_t, "DebugCullingGridShaderVariables", ::MA::Flora::DebugCullingGrid_LocalNameID*>();
}
inline void MA::Flora::DebugCullingGrid_LocalNameID::setStaticF__BlockCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BlockCount", ::MA::Flora::DebugCullingGrid_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::DebugCullingGrid_LocalNameID::getStaticF__BlockCount()  {
return ::cordl_internals::getStaticField<int32_t, "_BlockCount", ::MA::Flora::DebugCullingGrid_LocalNameID*>();
}
inline void MA::Flora::DebugCullingGrid_LocalNameID::setStaticF__BlockData(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BlockData", ::MA::Flora::DebugCullingGrid_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::DebugCullingGrid_LocalNameID::getStaticF__BlockData()  {
return ::cordl_internals::getStaticField<int32_t, "_BlockData", ::MA::Flora::DebugCullingGrid_LocalNameID*>();
}
inline void MA::Flora::DebugCullingGrid_LocalNameID::setStaticF__BlockIndices(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BlockIndices", ::MA::Flora::DebugCullingGrid_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::DebugCullingGrid_LocalNameID::getStaticF__BlockIndices()  {
return ::cordl_internals::getStaticField<int32_t, "_BlockIndices", ::MA::Flora::DebugCullingGrid_LocalNameID*>();
}
inline void MA::Flora::DebugCullingGrid_LocalNameID::setStaticF__CellCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CellCount", ::MA::Flora::DebugCullingGrid_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::DebugCullingGrid_LocalNameID::getStaticF__CellCount()  {
return ::cordl_internals::getStaticField<int32_t, "_CellCount", ::MA::Flora::DebugCullingGrid_LocalNameID*>();
}
inline void MA::Flora::DebugCullingGrid_LocalNameID::setStaticF__CellIndices(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CellIndices", ::MA::Flora::DebugCullingGrid_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::DebugCullingGrid_LocalNameID::getStaticF__CellIndices()  {
return ::cordl_internals::getStaticField<int32_t, "_CellIndices", ::MA::Flora::DebugCullingGrid_LocalNameID*>();
}
inline void MA::Flora::DebugCullingGrid_LocalNameID::setStaticF__CellInstanceCounts(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CellInstanceCounts", ::MA::Flora::DebugCullingGrid_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::DebugCullingGrid_LocalNameID::getStaticF__CellInstanceCounts()  {
return ::cordl_internals::getStaticField<int32_t, "_CellInstanceCounts", ::MA::Flora::DebugCullingGrid_LocalNameID*>();
}
inline void MA::Flora::DebugCullingGrid_LocalNameID::setStaticF__ChunkCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ChunkCount", ::MA::Flora::DebugCullingGrid_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::DebugCullingGrid_LocalNameID::getStaticF__ChunkCount()  {
return ::cordl_internals::getStaticField<int32_t, "_ChunkCount", ::MA::Flora::DebugCullingGrid_LocalNameID*>();
}
inline void MA::Flora::DebugCullingGrid_LocalNameID::setStaticF__ChunkIndices(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ChunkIndices", ::MA::Flora::DebugCullingGrid_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::DebugCullingGrid_LocalNameID::getStaticF__ChunkIndices()  {
return ::cordl_internals::getStaticField<int32_t, "_ChunkIndices", ::MA::Flora::DebugCullingGrid_LocalNameID*>();
}
inline void MA::Flora::DebugCullingGrid_LocalNameID::setStaticF__CullingChunkBatches(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingChunkBatches", ::MA::Flora::DebugCullingGrid_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::DebugCullingGrid_LocalNameID::getStaticF__CullingChunkBatches()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingChunkBatches", ::MA::Flora::DebugCullingGrid_LocalNameID*>();
}
inline void MA::Flora::DebugCullingGrid_LocalNameID::setStaticF__CullingChunkCells(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingChunkCells", ::MA::Flora::DebugCullingGrid_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::DebugCullingGrid_LocalNameID::getStaticF__CullingChunkCells()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingChunkCells", ::MA::Flora::DebugCullingGrid_LocalNameID*>();
}
inline void MA::Flora::DebugCullingGrid_LocalNameID::setStaticF__CullingChunkAttributes(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CullingChunkAttributes", ::MA::Flora::DebugCullingGrid_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::DebugCullingGrid_LocalNameID::getStaticF__CullingChunkAttributes()  {
return ::cordl_internals::getStaticField<int32_t, "_CullingChunkAttributes", ::MA::Flora::DebugCullingGrid_LocalNameID*>();
}
inline void MA::Flora::DebugCullingGrid_LocalNameID::setStaticF__LineVertices(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_LineVertices", ::MA::Flora::DebugCullingGrid_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::DebugCullingGrid_LocalNameID::getStaticF__LineVertices()  {
return ::cordl_internals::getStaticField<int32_t, "_LineVertices", ::MA::Flora::DebugCullingGrid_LocalNameID*>();
}
inline void MA::Flora::DebugCullingGrid_LocalNameID::setStaticF__LineVertexCounter(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_LineVertexCounter", ::MA::Flora::DebugCullingGrid_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::DebugCullingGrid_LocalNameID::getStaticF__LineVertexCounter()  {
return ::cordl_internals::getStaticField<int32_t, "_LineVertexCounter", ::MA::Flora::DebugCullingGrid_LocalNameID*>();
}
inline void MA::Flora::DebugCullingGrid_LocalNameID::setStaticF__LineDrawArgs(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_LineDrawArgs", ::MA::Flora::DebugCullingGrid_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::DebugCullingGrid_LocalNameID::getStaticF__LineDrawArgs()  {
return ::cordl_internals::getStaticField<int32_t, "_LineDrawArgs", ::MA::Flora::DebugCullingGrid_LocalNameID*>();
}
// Ctor Parameters []
constexpr ::MA::Flora::DebugCullingGrid_LocalNameID::DebugCullingGrid_LocalNameID()   {
}
//  Writing Method size for method: ::MA::Flora::DebugCullingGrid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugCullingGrid::*)(::MA::Flora::InstanceContext, ::MA::Flora::FloraRuntimeResources*)>(&::MA::Flora::DebugCullingGrid::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814c5040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::InstanceContext>(), ::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugCullingGrid.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugCullingGrid::*)()>(&::MA::Flora::DebugCullingGrid::Dispose)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814c2ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugCullingGrid.GetOrCreateContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::DebugCullingGrid_ContextHandle* (::MA::Flora::DebugCullingGrid::*)(::MA::Flora::DebugCullingGrid_DrawType, ::UnityEngine::Camera*)>(&::MA::Flora::DebugCullingGrid::GetOrCreateContext)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1814c44f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"GetOrCreateContext", {}, {::i2c::type_of<::MA::Flora::DebugCullingGrid_DrawType>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugCullingGrid.NextFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugCullingGrid::*)()>(&::MA::Flora::DebugCullingGrid::NextFrame)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1814c4630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"NextFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugCullingGrid.UpdateDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugCullingGrid::*)(::UnityEngine::Camera*)>(&::MA::Flora::DebugCullingGrid::UpdateDisplay)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814c4f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"UpdateDisplay", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugCullingGrid.BeginContextDraw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CommandBuffer* (::MA::Flora::DebugCullingGrid::*)(::UnityEngine::Camera*, ::by_ref<::MA::Flora::DebugCullingGrid_ContextHandle*>, ::by_ref<::MA::Flora::FloraDebugDisplayProperties>, int32_t)>(&::MA::Flora::DebugCullingGrid::BeginContextDraw)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814c2ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"BeginContextDraw", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::MA::Flora::DebugCullingGrid_ContextHandle*>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraDebugDisplayProperties>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugCullingGrid.SubmitContextDraw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugCullingGrid::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::by_ref<::MA::Flora::DebugCullingGrid_ContextHandle*>)>(&::MA::Flora::DebugCullingGrid::SubmitContextDraw)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1814c48f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"SubmitContextDraw", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::MA::Flora::DebugCullingGrid_ContextHandle*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugCullingGrid.DrawBlocks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugCullingGrid::*)(::UnityEngine::Camera*, ::by_ref<::MA::Flora::FloraDebugDisplayProperties>)>(&::MA::Flora::DebugCullingGrid::DrawBlocks)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x1814c30d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"DrawBlocks", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraDebugDisplayProperties>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugCullingGrid.DrawCells
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugCullingGrid::*)(::UnityEngine::Camera*, ::by_ref<::MA::Flora::FloraDebugDisplayProperties>)>(&::MA::Flora::DebugCullingGrid::DrawCells)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x1814c3680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"DrawCells", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraDebugDisplayProperties>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugCullingGrid.DrawChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugCullingGrid::*)(::UnityEngine::Camera*, ::by_ref<::MA::Flora::FloraDebugDisplayProperties>)>(&::MA::Flora::DebugCullingGrid::DrawChunks)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x1814c3c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"DrawChunks", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraDebugDisplayProperties>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugCullingGrid.UpdateContextShaderVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DebugCullingGrid::*)(::UnityEngine::Rendering::CommandBuffer*, ::MA::Flora::DebugCullingGrid_ContextHandle*, ::UnityEngine::Camera*, float_t, bool)>(&::MA::Flora::DebugCullingGrid::UpdateContextShaderVariables)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1814c4c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"UpdateContextShaderVariables", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::MA::Flora::DebugCullingGrid_ContextHandle*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugCullingGrid.EnsureLineBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::DebugCullingGrid_ContextHandle*, int32_t)>(&::MA::Flora::DebugCullingGrid::EnsureLineBuffers)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1814c4380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"EnsureLineBuffers", {}, {::i2c::type_of<::MA::Flora::DebugCullingGrid_ContextHandle*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DebugCullingGrid.UpdateBitArrayBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::MA::Flora::NativeBitSet, ::by_ref<::UnityEngine::GraphicsBuffer*>)>(&::MA::Flora::DebugCullingGrid::UpdateBitArrayBuffer)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814c4b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"UpdateBitArrayBuffer", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::MA::Flora::NativeBitSet>(), ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>& MA::Flora::DebugCullingGrid::__cordl_internal_get_m_CullingGrid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CullingGrid;
}
constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid> const& MA::Flora::DebugCullingGrid::__cordl_internal_get_m_CullingGrid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CullingGrid;
}
constexpr void MA::Flora::DebugCullingGrid::__cordl_internal_set_m_CullingGrid(::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CullingGrid = value;
}
constexpr ::MA::Flora::FloraRuntimeResources*& MA::Flora::DebugCullingGrid::__cordl_internal_get_m_Resources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Resources;
}
constexpr ::MA::Flora::FloraRuntimeResources* const& MA::Flora::DebugCullingGrid::__cordl_internal_get_m_Resources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Resources;
}
constexpr void MA::Flora::DebugCullingGrid::__cordl_internal_set_m_Resources(::MA::Flora::FloraRuntimeResources*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Resources = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& MA::Flora::DebugCullingGrid::__cordl_internal_get_m_DebugCullingGridCS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebugCullingGridCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& MA::Flora::DebugCullingGrid::__cordl_internal_get_m_DebugCullingGridCS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebugCullingGridCS;
}
constexpr void MA::Flora::DebugCullingGrid::__cordl_internal_set_m_DebugCullingGridCS(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DebugCullingGridCS = value;
}
constexpr int32_t& MA::Flora::DebugCullingGrid::__cordl_internal_get_m_BuildBlockLinesKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BuildBlockLinesKernel;
}
constexpr int32_t const& MA::Flora::DebugCullingGrid::__cordl_internal_get_m_BuildBlockLinesKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BuildBlockLinesKernel;
}
constexpr void MA::Flora::DebugCullingGrid::__cordl_internal_set_m_BuildBlockLinesKernel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BuildBlockLinesKernel = value;
}
constexpr int32_t& MA::Flora::DebugCullingGrid::__cordl_internal_get_m_BuildCellLinesKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BuildCellLinesKernel;
}
constexpr int32_t const& MA::Flora::DebugCullingGrid::__cordl_internal_get_m_BuildCellLinesKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BuildCellLinesKernel;
}
constexpr void MA::Flora::DebugCullingGrid::__cordl_internal_set_m_BuildCellLinesKernel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BuildCellLinesKernel = value;
}
constexpr int32_t& MA::Flora::DebugCullingGrid::__cordl_internal_get_m_BuildChunkLinesKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BuildChunkLinesKernel;
}
constexpr int32_t const& MA::Flora::DebugCullingGrid::__cordl_internal_get_m_BuildChunkLinesKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BuildChunkLinesKernel;
}
constexpr void MA::Flora::DebugCullingGrid::__cordl_internal_set_m_BuildChunkLinesKernel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BuildChunkLinesKernel = value;
}
constexpr int32_t& MA::Flora::DebugCullingGrid::__cordl_internal_get_m_BuildDrawArgsKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BuildDrawArgsKernel;
}
constexpr int32_t const& MA::Flora::DebugCullingGrid::__cordl_internal_get_m_BuildDrawArgsKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BuildDrawArgsKernel;
}
constexpr void MA::Flora::DebugCullingGrid::__cordl_internal_set_m_BuildDrawArgsKernel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BuildDrawArgsKernel = value;
}
constexpr int32_t& MA::Flora::DebugCullingGrid::__cordl_internal_get_m_FrameIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameIndex;
}
constexpr int32_t const& MA::Flora::DebugCullingGrid::__cordl_internal_get_m_FrameIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameIndex;
}
constexpr void MA::Flora::DebugCullingGrid::__cordl_internal_set_m_FrameIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FrameIndex = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::MA::Flora::DebugCullingGrid_ContextKey,::MA::Flora::DebugCullingGrid_ContextHandle*>*& MA::Flora::DebugCullingGrid::__cordl_internal_get_m_Contexts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Contexts;
}
constexpr ::System::Collections::Generic::Dictionary_2<::MA::Flora::DebugCullingGrid_ContextKey,::MA::Flora::DebugCullingGrid_ContextHandle*>* const& MA::Flora::DebugCullingGrid::__cordl_internal_get_m_Contexts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Contexts;
}
constexpr void MA::Flora::DebugCullingGrid::__cordl_internal_set_m_Contexts(::System::Collections::Generic::Dictionary_2<::MA::Flora::DebugCullingGrid_ContextKey,::MA::Flora::DebugCullingGrid_ContextHandle*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Contexts = value;
}
inline void MA::Flora::DebugCullingGrid::_ctor(::MA::Flora::InstanceContext  context, ::MA::Flora::FloraRuntimeResources*  resources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::InstanceContext>(), ::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, resources);
}
inline void MA::Flora::DebugCullingGrid::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::DebugCullingGrid_ContextHandle* MA::Flora::DebugCullingGrid::GetOrCreateContext(::MA::Flora::DebugCullingGrid_DrawType  type, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"GetOrCreateContext", {}, {::i2c::type_of<::MA::Flora::DebugCullingGrid_DrawType>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::DebugCullingGrid_ContextHandle*>(this, ___internal_method, type, camera);
}
inline void MA::Flora::DebugCullingGrid::NextFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"NextFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::DebugCullingGrid::UpdateDisplay(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"UpdateDisplay", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera);
}
inline ::UnityEngine::Rendering::CommandBuffer* MA::Flora::DebugCullingGrid::BeginContextDraw(::UnityEngine::Camera*  camera, ::by_ref<::MA::Flora::DebugCullingGrid_ContextHandle*>  ctx, ::by_ref<::MA::Flora::FloraDebugDisplayProperties>  debugSettings, int32_t  boxCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"BeginContextDraw", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::MA::Flora::DebugCullingGrid_ContextHandle*>>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraDebugDisplayProperties>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*>(this, ___internal_method, camera, ctx, debugSettings, boxCount);
}
inline void MA::Flora::DebugCullingGrid::SubmitContextDraw(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Camera*  camera, ::by_ref<::MA::Flora::DebugCullingGrid_ContextHandle*>  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"SubmitContextDraw", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::MA::Flora::DebugCullingGrid_ContextHandle*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, camera, ctx);
}
inline void MA::Flora::DebugCullingGrid::DrawBlocks(::UnityEngine::Camera*  camera, ::by_ref<::MA::Flora::FloraDebugDisplayProperties>  debugSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"DrawBlocks", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraDebugDisplayProperties>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, debugSettings);
}
inline void MA::Flora::DebugCullingGrid::DrawCells(::UnityEngine::Camera*  camera, ::by_ref<::MA::Flora::FloraDebugDisplayProperties>  debugSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"DrawCells", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraDebugDisplayProperties>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, debugSettings);
}
inline void MA::Flora::DebugCullingGrid::DrawChunks(::UnityEngine::Camera*  camera, ::by_ref<::MA::Flora::FloraDebugDisplayProperties>  debugSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"DrawChunks", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraDebugDisplayProperties>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, debugSettings);
}
inline void MA::Flora::DebugCullingGrid::UpdateContextShaderVariables(::UnityEngine::Rendering::CommandBuffer*  cmd, ::MA::Flora::DebugCullingGrid_ContextHandle*  ctx, ::UnityEngine::Camera*  camera, float_t  maxDistance, bool  isHeatmap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"UpdateContextShaderVariables", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::MA::Flora::DebugCullingGrid_ContextHandle*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, ctx, camera, maxDistance, isHeatmap);
}
inline void MA::Flora::DebugCullingGrid::EnsureLineBuffers(::MA::Flora::DebugCullingGrid_ContextHandle*  contextHandle, int32_t  maxLineCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"EnsureLineBuffers", {}, {::i2c::type_of<::MA::Flora::DebugCullingGrid_ContextHandle*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, contextHandle, maxLineCount);
}
inline void MA::Flora::DebugCullingGrid::UpdateBitArrayBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd, ::MA::Flora::NativeBitSet  bitset, ::by_ref<::UnityEngine::GraphicsBuffer*>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DebugCullingGrid*>(),
                        {"UpdateBitArrayBuffer", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::MA::Flora::NativeBitSet>(), ::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, bitset, buffer);
}
inline ::MA::Flora::DebugCullingGrid* MA::Flora::DebugCullingGrid::New_ctor(::MA::Flora::InstanceContext  context, ::MA::Flora::FloraRuntimeResources*  resources)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::DebugCullingGrid*>(context, resources));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::DebugCullingGrid::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::DebugCullingGrid::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::Flora::DebugCullingGrid::DebugCullingGrid()   {
}
