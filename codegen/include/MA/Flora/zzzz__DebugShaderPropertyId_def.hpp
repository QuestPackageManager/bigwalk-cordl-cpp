#pragma once
// IWYU pragma private; include "MA/Flora/DebugShaderPropertyId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugShaderPropertyId)
// Forward declare root types
namespace MA::Flora {
class DebugShaderPropertyId;
}
// Write type traits
MARK_REF_T(::MA::Flora::DebugShaderPropertyId*);
DEFINE_IL2CPP_CLASS(::MA::Flora::DebugShaderPropertyId*, "MA.Flora", "DebugShaderPropertyId");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.DebugShaderPropertyId
class CORDL_TYPE DebugShaderPropertyId : public ::System::Object {
public:
// Declarations
/// @brief Field flora_DebugDrawVisibility, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_flora_DebugDrawVisibility, put=setStaticF_flora_DebugDrawVisibility)) int32_t  flora_DebugDrawVisibility;

/// @brief Field flora_DebugOpacity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_flora_DebugOpacity, put=setStaticF_flora_DebugOpacity)) int32_t  flora_DebugOpacity;

/// @brief Field flora_DebugParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_flora_DebugParams, put=setStaticF_flora_DebugParams)) int32_t  flora_DebugParams;

/// @brief Field flora_DebugViewMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_flora_DebugViewMode, put=setStaticF_flora_DebugViewMode)) int32_t  flora_DebugViewMode;

static inline int32_t getStaticF_flora_DebugDrawVisibility() ;

static inline int32_t getStaticF_flora_DebugOpacity() ;

static inline int32_t getStaticF_flora_DebugParams() ;

static inline int32_t getStaticF_flora_DebugViewMode() ;

static inline void setStaticF_flora_DebugDrawVisibility(int32_t  value) ;

static inline void setStaticF_flora_DebugOpacity(int32_t  value) ;

static inline void setStaticF_flora_DebugParams(int32_t  value) ;

static inline void setStaticF_flora_DebugViewMode(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugShaderPropertyId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugShaderPropertyId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugShaderPropertyId(DebugShaderPropertyId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugShaderPropertyId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugShaderPropertyId(DebugShaderPropertyId const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13257};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::DebugShaderPropertyId) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
