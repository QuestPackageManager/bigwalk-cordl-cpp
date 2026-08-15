#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEBalnketBlending.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TVEBalnketBlending)
// Forward declare root types
namespace TheVisualEngine {
class TVEBalnketBlending;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEBalnketBlending*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEBalnketBlending*, "TheVisualEngine", "TVEBalnketBlending");
// Dependencies System.Object
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEBalnketBlending
class CORDL_TYPE TVEBalnketBlending : public ::System::Object {
public:
// Declarations
/// @brief Field blendMode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_blendMode, put=__cordl_internal_set_blendMode)) int32_t  blendMode;

static inline ::TheVisualEngine::TVEBalnketBlending* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_blendMode() const;

constexpr int32_t& __cordl_internal_get_blendMode() ;

constexpr void __cordl_internal_set_blendMode(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEBalnketBlending() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEBalnketBlending", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEBalnketBlending(TVEBalnketBlending && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEBalnketBlending", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEBalnketBlending(TVEBalnketBlending const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19609};

/// @brief Field blendMode, offset: 0x10, size: 0x4, def value: None
 int32_t  ___blendMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEBalnketBlending, ___blendMode) == 0x10, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEBalnketBlending) == 0x18, "Size mismatch!");

} // namespace end def TheVisualEngine
