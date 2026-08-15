#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEGlobalFormData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TVEGlobalFormData)
// Forward declare root types
namespace TheVisualEngine {
class TVEGlobalFormData;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEGlobalFormData*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEGlobalFormData*, "TheVisualEngine", "TVEGlobalFormData");
// Dependencies System.Object
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEGlobalFormData
class CORDL_TYPE TVEGlobalFormData : public ::System::Object {
public:
// Declarations
/// @brief Field confromHeight, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_confromHeight, put=__cordl_internal_set_confromHeight)) float_t  confromHeight;

/// @brief Field sizeFadeValue, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_sizeFadeValue, put=__cordl_internal_set_sizeFadeValue)) float_t  sizeFadeValue;

static inline ::TheVisualEngine::TVEGlobalFormData* New_ctor() ;

constexpr float_t const& __cordl_internal_get_confromHeight() const;

constexpr float_t& __cordl_internal_get_confromHeight() ;

constexpr float_t const& __cordl_internal_get_sizeFadeValue() const;

constexpr float_t& __cordl_internal_get_sizeFadeValue() ;

constexpr void __cordl_internal_set_confromHeight(float_t  value) ;

constexpr void __cordl_internal_set_sizeFadeValue(float_t  value) ;

/// @brief Method .ctor, addr 0x1804b96d0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEGlobalFormData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEGlobalFormData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEGlobalFormData(TVEGlobalFormData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEGlobalFormData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEGlobalFormData(TVEGlobalFormData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19600};

/// @brief Field confromHeight, offset: 0x10, size: 0x4, def value: None
 float_t  ___confromHeight;

/// @brief Field sizeFadeValue, offset: 0x14, size: 0x4, def value: None
 float_t  ___sizeFadeValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEGlobalFormData, ___confromHeight) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEGlobalFormData, ___sizeFadeValue) == 0x14, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEGlobalFormData) == 0x18, "Size mismatch!");

} // namespace end def TheVisualEngine
