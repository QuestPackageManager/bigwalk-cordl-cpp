#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEGlobalCoatData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TVEGlobalCoatData)
// Forward declare root types
namespace TheVisualEngine {
class TVEGlobalCoatData;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEGlobalCoatData*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEGlobalCoatData*, "TheVisualEngine", "TVEGlobalCoatData");
// Dependencies System.Object
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEGlobalCoatData
class CORDL_TYPE TVEGlobalCoatData : public ::System::Object {
public:
// Declarations
/// @brief Field detailIntensity, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_detailIntensity, put=__cordl_internal_set_detailIntensity)) float_t  detailIntensity;

/// @brief Field layerIntensity, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerIntensity, put=__cordl_internal_set_layerIntensity)) float_t  layerIntensity;

/// @brief Field stackIntensity, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_stackIntensity, put=__cordl_internal_set_stackIntensity)) float_t  stackIntensity;

static inline ::TheVisualEngine::TVEGlobalCoatData* New_ctor() ;

constexpr float_t const& __cordl_internal_get_detailIntensity() const;

constexpr float_t& __cordl_internal_get_detailIntensity() ;

constexpr float_t const& __cordl_internal_get_layerIntensity() const;

constexpr float_t& __cordl_internal_get_layerIntensity() ;

constexpr float_t const& __cordl_internal_get_stackIntensity() const;

constexpr float_t& __cordl_internal_get_stackIntensity() ;

constexpr void __cordl_internal_set_detailIntensity(float_t  value) ;

constexpr void __cordl_internal_set_layerIntensity(float_t  value) ;

constexpr void __cordl_internal_set_stackIntensity(float_t  value) ;

/// @brief Method .ctor, addr 0x1804b96b0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEGlobalCoatData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEGlobalCoatData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEGlobalCoatData(TVEGlobalCoatData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEGlobalCoatData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEGlobalCoatData(TVEGlobalCoatData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19596};

/// @brief Field layerIntensity, offset: 0x10, size: 0x4, def value: None
 float_t  ___layerIntensity;

/// @brief Field detailIntensity, offset: 0x14, size: 0x4, def value: None
 float_t  ___detailIntensity;

/// @brief Field stackIntensity, offset: 0x18, size: 0x4, def value: None
 float_t  ___stackIntensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEGlobalCoatData, ___layerIntensity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGlobalCoatData, ___detailIntensity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGlobalCoatData, ___stackIntensity) == 0x18, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEGlobalCoatData) == 0x20, "Size mismatch!");

} // namespace end def TheVisualEngine
