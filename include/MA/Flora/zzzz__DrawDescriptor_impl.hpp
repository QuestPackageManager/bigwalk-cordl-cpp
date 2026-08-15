#pragma once
// IWYU pragma private; include "MA/Flora/DrawDescriptor.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_impl.hpp"
#include "MA/Flora/zzzz__DrawRangeKey_impl.hpp"
#include "MA/Flora/zzzz__IndirectStateFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandFlags_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__MeshTopology_impl.hpp"
#include "MA/Flora/zzzz__DrawDescriptor_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::DrawDescriptor.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawDescriptor::*)(::MA::Flora::DrawDescriptor)>(&::MA::Flora::DrawDescriptor::Equals)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1814ba760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawDescriptor>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::DrawDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawDescriptor.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawDescriptor::*)(::System::Object*)>(&::MA::Flora::DrawDescriptor::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814ba6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::DrawDescriptor>(),
                    {::i2c::class_of<::MA::Flora::DrawDescriptor>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawDescriptor.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::DrawDescriptor::*)()>(&::MA::Flora::DrawDescriptor::GetHashCode)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1814ba8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::DrawDescriptor>(),
                    {::i2c::class_of<::MA::Flora::DrawDescriptor>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool MA::Flora::DrawDescriptor::Equals(::MA::Flora::DrawDescriptor  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawDescriptor>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::DrawDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::DrawDescriptor::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::DrawDescriptor>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::DrawDescriptor::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::DrawDescriptor>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::DrawDescriptor>"
constexpr  MA::Flora::DrawDescriptor::operator ::System::IEquatable_1<::MA::Flora::DrawDescriptor>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::DrawDescriptor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::DrawDescriptor>"
constexpr ::System::IEquatable_1<::MA::Flora::DrawDescriptor>* MA::Flora::DrawDescriptor::i___System__IEquatable_1___MA__Flora__DrawDescriptor_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::DrawDescriptor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "RangeKey", ty: "::MA::Flora::DrawRangeKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "BatchDomainIndex", ty: "::MA::Flora::BatchDomainIndex", modifiers: "", def_value: Some("{}") }, CppParam { name: "MeshEntityId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "LodIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ActiveMeshLod", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SubMeshIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaterialEntityId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "Flags", ty: "::UnityEngine::Rendering::BatchDrawCommandFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "SupportedStateFlags", ty: "::MA::Flora::IndirectStateFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "SupportedStateMask", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Topology", ty: "::UnityEngine::MeshTopology", modifiers: "", def_value: Some("{}") }, CppParam { name: "BaseVertex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FirstIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DrawDescriptor::DrawDescriptor(::MA::Flora::DrawRangeKey  RangeKey, ::MA::Flora::BatchDomainIndex  BatchDomainIndex, ::UnityEngine::EntityId  MeshEntityId, int32_t  LodIndex, int32_t  ActiveMeshLod, uint16_t  SubMeshIndex, ::UnityEngine::EntityId  MaterialEntityId, ::UnityEngine::Rendering::BatchDrawCommandFlags  Flags, ::MA::Flora::IndirectStateFlags  SupportedStateFlags, uint8_t  SupportedStateMask, ::UnityEngine::MeshTopology  Topology, uint32_t  BaseVertex, uint32_t  FirstIndex, uint32_t  IndexCount) noexcept  {
this->RangeKey = RangeKey;
this->BatchDomainIndex = BatchDomainIndex;
this->MeshEntityId = MeshEntityId;
this->LodIndex = LodIndex;
this->ActiveMeshLod = ActiveMeshLod;
this->SubMeshIndex = SubMeshIndex;
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
constexpr ::MA::Flora::DrawDescriptor::DrawDescriptor()   {
}
