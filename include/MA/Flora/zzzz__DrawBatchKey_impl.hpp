#pragma once
// IWYU pragma private; include "MA/Flora/DrawBatchKey.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_impl.hpp"
#include "MA/Flora/zzzz__DrawRangeIndex_impl.hpp"
#include "MA/Flora/zzzz__IndirectStateFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__MeshTopology_impl.hpp"
#include "MA/Flora/zzzz__DrawBatchKey_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::MA::Flora::DrawBatchKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawBatchKey::*)(::MA::Flora::DrawBatchKey)>(&::MA::Flora::DrawBatchKey::Equals)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814ba480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawBatchKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::DrawBatchKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawBatchKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::DrawBatchKey::*)()>(&::MA::Flora::DrawBatchKey::GetHashCode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814ba570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::DrawBatchKey>(),
                    {::i2c::class_of<::MA::Flora::DrawBatchKey>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool MA::Flora::DrawBatchKey::Equals(::MA::Flora::DrawBatchKey  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawBatchKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::DrawBatchKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t MA::Flora::DrawBatchKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::DrawBatchKey>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::DrawBatchKey>"
constexpr  MA::Flora::DrawBatchKey::operator ::System::IEquatable_1<::MA::Flora::DrawBatchKey>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::DrawBatchKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::DrawBatchKey>"
constexpr ::System::IEquatable_1<::MA::Flora::DrawBatchKey>* MA::Flora::DrawBatchKey::i___System__IEquatable_1___MA__Flora__DrawBatchKey_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::DrawBatchKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "RangeIndex", ty: "::MA::Flora::DrawRangeIndex", modifiers: "", def_value: Some("{}") }, CppParam { name: "BatchDomainIndex", ty: "::MA::Flora::BatchDomainIndex", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshID", ty: "::UnityEngine::Rendering::BatchMeshID", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshEntityId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "LodIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ActiveMeshLod", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SubMeshIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaterialID", ty: "::UnityEngine::Rendering::BatchMaterialID", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaterialEntityId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "Flags", ty: "::UnityEngine::Rendering::BatchDrawCommandFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "SupportedStateFlags", ty: "::MA::Flora::IndirectStateFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "SupportedStateMask", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Topology", ty: "::UnityEngine::MeshTopology", modifiers: "", def_value: Some("{}") }, CppParam { name: "BaseVertex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FirstIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DrawBatchKey::DrawBatchKey(::MA::Flora::DrawRangeIndex  RangeIndex, ::MA::Flora::BatchDomainIndex  BatchDomainIndex, ::UnityEngine::Rendering::BatchMeshID  MeshID, ::UnityEngine::EntityId  MeshEntityId, int32_t  LodIndex, int32_t  ActiveMeshLod, uint16_t  SubMeshIndex, ::UnityEngine::Rendering::BatchMaterialID  MaterialID, ::UnityEngine::EntityId  MaterialEntityId, ::UnityEngine::Rendering::BatchDrawCommandFlags  Flags, ::MA::Flora::IndirectStateFlags  SupportedStateFlags, uint8_t  SupportedStateMask, ::UnityEngine::MeshTopology  Topology, uint32_t  BaseVertex, uint32_t  FirstIndex, uint32_t  IndexCount) noexcept  {
this->RangeIndex = RangeIndex;
this->BatchDomainIndex = BatchDomainIndex;
this->MeshID = MeshID;
this->MeshEntityId = MeshEntityId;
this->LodIndex = LodIndex;
this->ActiveMeshLod = ActiveMeshLod;
this->SubMeshIndex = SubMeshIndex;
this->MaterialID = MaterialID;
this->MaterialEntityId = MaterialEntityId;
this->Flags = Flags;
this->SupportedStateFlags = SupportedStateFlags;
this->SupportedStateMask = SupportedStateMask;
this->Topology = Topology;
this->BaseVertex = BaseVertex;
this->FirstIndex = FirstIndex;
this->IndexCount = IndexCount;
}
// Ctor Parameters []
constexpr ::MA::Flora::DrawBatchKey::DrawBatchKey()   {
}
