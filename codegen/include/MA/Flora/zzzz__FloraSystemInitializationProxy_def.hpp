#pragma once
// IWYU pragma private; include "MA/Flora/FloraSystemInitializationProxy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FloraSystemInitializationProxy)
// Forward declare root types
namespace MA::Flora {
class FloraSystemInitializationProxy;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraSystemInitializationProxy*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraSystemInitializationProxy*, "MA.Flora", "FloraSystemInitializationProxy");
// Dependencies UnityEngine.MonoBehaviour
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraSystemInitializationProxy
class CORDL_TYPE FloraSystemInitializationProxy : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field IsActive, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsActive, put=__cordl_internal_set_IsActive)) bool  IsActive;

static inline ::MA::Flora::FloraSystemInitializationProxy* New_ctor() ;

/// @brief Method OnDisable, addr 0x1814e7e40, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1814e7e50, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr bool const& __cordl_internal_get_IsActive() const;

constexpr bool& __cordl_internal_get_IsActive() ;

constexpr void __cordl_internal_set_IsActive(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraSystemInitializationProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraSystemInitializationProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraSystemInitializationProxy(FloraSystemInitializationProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraSystemInitializationProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraSystemInitializationProxy(FloraSystemInitializationProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13305};

/// @brief Field IsActive, offset: 0x20, size: 0x1, def value: None
 bool  ___IsActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraSystemInitializationProxy, ___IsActive) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraSystemInitializationProxy) == 0x28, "Size mismatch!");

} // namespace end def MA::Flora
