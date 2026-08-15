#pragma once
// IWYU pragma private; include "MA/Flora/OcclusionSamplers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OcclusionSamplers)
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
// Forward declare root types
namespace MA::Flora {
class OcclusionSamplers;
}
// Write type traits
MARK_REF_T(::MA::Flora::OcclusionSamplers*);
DEFINE_IL2CPP_CLASS(::MA::Flora::OcclusionSamplers*, "MA.Flora", "OcclusionSamplers");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.OcclusionSamplers
class CORDL_TYPE OcclusionSamplers : public ::System::Object {
public:
// Declarations
/// @brief Field OccluderOverlay, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OccluderOverlay, put=setStaticF_OccluderOverlay)) ::UnityEngine::Rendering::ProfilingSampler*  OccluderOverlay;

/// @brief Field OcclusionTestOverlay, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OcclusionTestOverlay, put=setStaticF_OcclusionTestOverlay)) ::UnityEngine::Rendering::ProfilingSampler*  OcclusionTestOverlay;

/// @brief Field UpdateOccluders, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UpdateOccluders, put=setStaticF_UpdateOccluders)) ::UnityEngine::Rendering::ProfilingSampler*  UpdateOccluders;

/// @brief Method Initialize, addr 0x1814d3960, size 0xf0, virtual false, abstract: false, final false
static inline void Initialize() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_OccluderOverlay() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_OcclusionTestOverlay() ;

static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_UpdateOccluders() ;

static inline void setStaticF_OccluderOverlay(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_OcclusionTestOverlay(::UnityEngine::Rendering::ProfilingSampler*  value) ;

static inline void setStaticF_UpdateOccluders(::UnityEngine::Rendering::ProfilingSampler*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OcclusionSamplers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OcclusionSamplers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OcclusionSamplers(OcclusionSamplers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OcclusionSamplers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OcclusionSamplers(OcclusionSamplers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13235};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::OcclusionSamplers) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
