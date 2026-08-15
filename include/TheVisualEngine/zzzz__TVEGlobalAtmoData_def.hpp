#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEGlobalAtmoData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TVEGlobalAtmoData)
// Forward declare root types
namespace TheVisualEngine {
class TVEGlobalAtmoData;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEGlobalAtmoData*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEGlobalAtmoData*, "TheVisualEngine", "TVEGlobalAtmoData");
// Dependencies System.Object
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEGlobalAtmoData
class CORDL_TYPE TVEGlobalAtmoData : public ::System::Object {
public:
// Declarations
/// @brief Field drynessIntensity, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_drynessIntensity, put=__cordl_internal_set_drynessIntensity)) float_t  drynessIntensity;

/// @brief Field overlayIntensity, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_overlayIntensity, put=__cordl_internal_set_overlayIntensity)) float_t  overlayIntensity;

/// @brief Field raindropsIntensity, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_raindropsIntensity, put=__cordl_internal_set_raindropsIntensity)) float_t  raindropsIntensity;

/// @brief Field wetnessIntensity, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_wetnessIntensity, put=__cordl_internal_set_wetnessIntensity)) float_t  wetnessIntensity;

static inline ::TheVisualEngine::TVEGlobalAtmoData* New_ctor() ;

constexpr float_t const& __cordl_internal_get_drynessIntensity() const;

constexpr float_t& __cordl_internal_get_drynessIntensity() ;

constexpr float_t const& __cordl_internal_get_overlayIntensity() const;

constexpr float_t& __cordl_internal_get_overlayIntensity() ;

constexpr float_t const& __cordl_internal_get_raindropsIntensity() const;

constexpr float_t& __cordl_internal_get_raindropsIntensity() ;

constexpr float_t const& __cordl_internal_get_wetnessIntensity() const;

constexpr float_t& __cordl_internal_get_wetnessIntensity() ;

constexpr void __cordl_internal_set_drynessIntensity(float_t  value) ;

constexpr void __cordl_internal_set_overlayIntensity(float_t  value) ;

constexpr void __cordl_internal_set_raindropsIntensity(float_t  value) ;

constexpr void __cordl_internal_set_wetnessIntensity(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEGlobalAtmoData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEGlobalAtmoData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEGlobalAtmoData(TVEGlobalAtmoData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEGlobalAtmoData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEGlobalAtmoData(TVEGlobalAtmoData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19599};

/// @brief Field drynessIntensity, offset: 0x10, size: 0x4, def value: None
 float_t  ___drynessIntensity;

/// @brief Field overlayIntensity, offset: 0x14, size: 0x4, def value: None
 float_t  ___overlayIntensity;

/// @brief Field wetnessIntensity, offset: 0x18, size: 0x4, def value: None
 float_t  ___wetnessIntensity;

/// @brief Field raindropsIntensity, offset: 0x1c, size: 0x4, def value: None
 float_t  ___raindropsIntensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEGlobalAtmoData, ___drynessIntensity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGlobalAtmoData, ___overlayIntensity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGlobalAtmoData, ___wetnessIntensity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGlobalAtmoData, ___raindropsIntensity) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEGlobalAtmoData) == 0x20, "Size mismatch!");

} // namespace end def TheVisualEngine
