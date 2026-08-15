#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/MeshUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__MeshUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__PrimitiveType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MeshUtilities.GetColliderMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::Collider*)>(&::UnityEngine::Rendering::PostProcessing::MeshUtilities::GetColliderMesh)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181fc0cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MeshUtilities*>(),
                        {"GetColliderMesh", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MeshUtilities.GetPrimitive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::PrimitiveType)>(&::UnityEngine::Rendering::PostProcessing::MeshUtilities::GetPrimitive)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181fc0e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MeshUtilities*>(),
                        {"GetPrimitive", {}, {::i2c::type_of<::UnityEngine::PrimitiveType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MeshUtilities.GetBuiltinMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::PrimitiveType)>(&::UnityEngine::Rendering::PostProcessing::MeshUtilities::GetBuiltinMesh)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fc0c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MeshUtilities*>(),
                        {"GetBuiltinMesh", {}, {::i2c::type_of<::UnityEngine::PrimitiveType>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::PostProcessing::MeshUtilities::setStaticF_s_Primitives(::System::Collections::Generic::Dictionary_2<::UnityEngine::PrimitiveType,::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::PrimitiveType,::UnityW<::UnityEngine::Mesh>>*, "s_Primitives", ::UnityEngine::Rendering::PostProcessing::MeshUtilities*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::PrimitiveType,::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::PrimitiveType,::UnityW<::UnityEngine::Mesh>>* UnityEngine::Rendering::PostProcessing::MeshUtilities::getStaticF_s_Primitives()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::PrimitiveType,::UnityW<::UnityEngine::Mesh>>*, "s_Primitives", ::UnityEngine::Rendering::PostProcessing::MeshUtilities*>();
}
inline void UnityEngine::Rendering::PostProcessing::MeshUtilities::setStaticF_s_ColliderPrimitives(::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::PrimitiveType>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::PrimitiveType>*, "s_ColliderPrimitives", ::UnityEngine::Rendering::PostProcessing::MeshUtilities*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::PrimitiveType>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::PrimitiveType>* UnityEngine::Rendering::PostProcessing::MeshUtilities::getStaticF_s_ColliderPrimitives()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::PrimitiveType>*, "s_ColliderPrimitives", ::UnityEngine::Rendering::PostProcessing::MeshUtilities*>();
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::PostProcessing::MeshUtilities::GetColliderMesh(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MeshUtilities*>(),
                        {"GetColliderMesh", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, collider);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::PostProcessing::MeshUtilities::GetPrimitive(::UnityEngine::PrimitiveType  primitiveType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MeshUtilities*>(),
                        {"GetPrimitive", {}, {::i2c::type_of<::UnityEngine::PrimitiveType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, primitiveType);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::PostProcessing::MeshUtilities::GetBuiltinMesh(::UnityEngine::PrimitiveType  primitiveType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MeshUtilities*>(),
                        {"GetBuiltinMesh", {}, {::i2c::type_of<::UnityEngine::PrimitiveType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, primitiveType);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::MeshUtilities::MeshUtilities()   {
}
