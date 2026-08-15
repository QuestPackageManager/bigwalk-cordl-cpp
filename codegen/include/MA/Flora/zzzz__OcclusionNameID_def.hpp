#pragma once
// IWYU pragma private; include "MA/Flora/OcclusionNameID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OcclusionNameID)
// Forward declare root types
namespace MA::Flora {
class OcclusionNameID;
}
// Write type traits
MARK_REF_T(::MA::Flora::OcclusionNameID*);
DEFINE_IL2CPP_CLASS(::MA::Flora::OcclusionNameID*, "MA.Flora", "OcclusionNameID");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.OcclusionNameID
class CORDL_TYPE OcclusionNameID : public ::System::Object {
public:
// Declarations
/// @brief Field OccluderDepthPyramid, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_OccluderDepthPyramid, put=setStaticF_OccluderDepthPyramid)) int32_t  OccluderDepthPyramid;

/// @brief Field OccluderTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_OccluderTexture, put=setStaticF_OccluderTexture)) int32_t  OccluderTexture;

/// @brief Field OcclusionCullingCommonShaderVariables, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_OcclusionCullingCommonShaderVariables, put=setStaticF_OcclusionCullingCommonShaderVariables)) int32_t  OcclusionCullingCommonShaderVariables;

/// @brief Field OcclusionCullingDebugShaderVariables, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_OcclusionCullingDebugShaderVariables, put=setStaticF_OcclusionCullingDebugShaderVariables)) int32_t  OcclusionCullingDebugShaderVariables;

/// @brief Field OcclusionDebugOverlay, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_OcclusionDebugOverlay, put=setStaticF_OcclusionDebugOverlay)) int32_t  OcclusionDebugOverlay;

/// @brief Field ValidRange, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ValidRange, put=setStaticF_ValidRange)) int32_t  ValidRange;

static inline int32_t getStaticF_OccluderDepthPyramid() ;

static inline int32_t getStaticF_OccluderTexture() ;

static inline int32_t getStaticF_OcclusionCullingCommonShaderVariables() ;

static inline int32_t getStaticF_OcclusionCullingDebugShaderVariables() ;

static inline int32_t getStaticF_OcclusionDebugOverlay() ;

static inline int32_t getStaticF_ValidRange() ;

static inline void setStaticF_OccluderDepthPyramid(int32_t  value) ;

static inline void setStaticF_OccluderTexture(int32_t  value) ;

static inline void setStaticF_OcclusionCullingCommonShaderVariables(int32_t  value) ;

static inline void setStaticF_OcclusionCullingDebugShaderVariables(int32_t  value) ;

static inline void setStaticF_OcclusionDebugOverlay(int32_t  value) ;

static inline void setStaticF_ValidRange(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OcclusionNameID() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OcclusionNameID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OcclusionNameID(OcclusionNameID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OcclusionNameID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OcclusionNameID(OcclusionNameID const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13232};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::OcclusionNameID) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
