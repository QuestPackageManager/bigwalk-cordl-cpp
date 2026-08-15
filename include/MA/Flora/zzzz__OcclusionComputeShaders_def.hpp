#pragma once
// IWYU pragma private; include "MA/Flora/OcclusionComputeShaders.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OcclusionComputeShaders)
namespace MA::Flora {
class FloraRuntimeResources;
}
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace MA::Flora {
class OcclusionComputeShaders;
}
// Write type traits
MARK_REF_T(::MA::Flora::OcclusionComputeShaders*);
DEFINE_IL2CPP_CLASS(::MA::Flora::OcclusionComputeShaders*, "MA.Flora", "OcclusionComputeShaders");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.OcclusionComputeShaders
class CORDL_TYPE OcclusionComputeShaders : public ::System::Object {
public:
// Declarations
/// @brief Field BuildOcclusionDepthCS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BuildOcclusionDepthCS, put=setStaticF_BuildOcclusionDepthCS)) ::UnityW<::UnityEngine::ComputeShader>  BuildOcclusionDepthCS;

/// @brief Field BuildOcclusionDepthDownscaleKernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_BuildOcclusionDepthDownscaleKernel, put=setStaticF_BuildOcclusionDepthDownscaleKernel)) int32_t  BuildOcclusionDepthDownscaleKernel;

/// @brief Field DebugOcclusionCS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DebugOcclusionCS, put=setStaticF_DebugOcclusionCS)) ::UnityW<::UnityEngine::ComputeShader>  DebugOcclusionCS;

/// @brief Field DebugOcclusionClearKernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DebugOcclusionClearKernel, put=setStaticF_DebugOcclusionClearKernel)) int32_t  DebugOcclusionClearKernel;

/// @brief Method Initialize, addr 0x1814cf1e0, size 0xf0, virtual false, abstract: false, final false
static inline void Initialize(::MA::Flora::FloraRuntimeResources*  runtimeResources) ;

static inline ::UnityW<::UnityEngine::ComputeShader> getStaticF_BuildOcclusionDepthCS() ;

static inline int32_t getStaticF_BuildOcclusionDepthDownscaleKernel() ;

static inline ::UnityW<::UnityEngine::ComputeShader> getStaticF_DebugOcclusionCS() ;

static inline int32_t getStaticF_DebugOcclusionClearKernel() ;

static inline void setStaticF_BuildOcclusionDepthCS(::UnityW<::UnityEngine::ComputeShader>  value) ;

static inline void setStaticF_BuildOcclusionDepthDownscaleKernel(int32_t  value) ;

static inline void setStaticF_DebugOcclusionCS(::UnityW<::UnityEngine::ComputeShader>  value) ;

static inline void setStaticF_DebugOcclusionClearKernel(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OcclusionComputeShaders() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OcclusionComputeShaders", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OcclusionComputeShaders(OcclusionComputeShaders && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OcclusionComputeShaders", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OcclusionComputeShaders(OcclusionComputeShaders const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13234};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::OcclusionComputeShaders) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
