#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/MeshUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MeshUtilities)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct PrimitiveType;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class MeshUtilities;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::MeshUtilities*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::MeshUtilities*, "UnityEngine.Rendering.PostProcessing", "MeshUtilities");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.MeshUtilities
class CORDL_TYPE MeshUtilities : public ::System::Object {
public:
// Declarations
/// @brief Field s_ColliderPrimitives, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ColliderPrimitives, put=setStaticF_s_ColliderPrimitives)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::PrimitiveType>*  s_ColliderPrimitives;

/// @brief Field s_Primitives, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Primitives, put=setStaticF_s_Primitives)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::PrimitiveType,::UnityW<::UnityEngine::Mesh>>*  s_Primitives;

/// @brief Method GetBuiltinMesh, addr 0x181fc0c60, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> GetBuiltinMesh(::UnityEngine::PrimitiveType  primitiveType) ;

/// @brief Method GetColliderMesh, addr 0x181fc0cc0, size 0x1a0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> GetColliderMesh(::UnityEngine::Collider*  collider) ;

/// @brief Method GetPrimitive, addr 0x181fc0e60, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> GetPrimitive(::UnityEngine::PrimitiveType  primitiveType) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::PrimitiveType>* getStaticF_s_ColliderPrimitives() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::PrimitiveType,::UnityW<::UnityEngine::Mesh>>* getStaticF_s_Primitives() ;

static inline void setStaticF_s_ColliderPrimitives(::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::PrimitiveType>*  value) ;

static inline void setStaticF_s_Primitives(::System::Collections::Generic::Dictionary_2<::UnityEngine::PrimitiveType,::UnityW<::UnityEngine::Mesh>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshUtilities(MeshUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshUtilities(MeshUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18656};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::MeshUtilities) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
