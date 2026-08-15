#pragma once
// IWYU pragma private; include "MA/Flora/FloraDetailRendering.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FloraDetailRendering)
// Forward declare root types
namespace MA::Flora {
class FloraDetailRendering;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraDetailRendering*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraDetailRendering*, "MA.Flora", "FloraDetailRendering");
// Dependencies UnityEngine.MonoBehaviour
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraDetailRendering
class CORDL_TYPE FloraDetailRendering : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Enabled, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_Enabled, put=__cordl_internal_set_Enabled)) bool  Enabled;

static inline ::MA::Flora::FloraDetailRendering* New_ctor() ;

constexpr bool const& __cordl_internal_get_Enabled() const;

constexpr bool& __cordl_internal_get_Enabled() ;

constexpr void __cordl_internal_set_Enabled(bool  value) ;

/// @brief Method .ctor, addr 0x180538bd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraDetailRendering() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraDetailRendering", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraDetailRendering(FloraDetailRendering && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraDetailRendering", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraDetailRendering(FloraDetailRendering const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13273};

/// @brief Field Enabled, offset: 0x20, size: 0x1, def value: None
 bool  ___Enabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraDetailRendering, ___Enabled) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraDetailRendering) == 0x28, "Size mismatch!");

} // namespace end def MA::Flora
