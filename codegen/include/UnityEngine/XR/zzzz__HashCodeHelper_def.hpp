#pragma once
// IWYU pragma private; include "UnityEngine/XR/HashCodeHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashCodeHelper)
// Forward declare root types
namespace UnityEngine::XR {
class HashCodeHelper;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::HashCodeHelper*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::HashCodeHelper*, "UnityEngine.XR", "HashCodeHelper");
// Dependencies System.Object
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.HashCodeHelper
class CORDL_TYPE HashCodeHelper : public ::System::Object {
public:
// Declarations
/// @brief Method Combine, addr 0x18254e0c0, size 0x10, virtual false, abstract: false, final false
static inline int32_t Combine(int32_t  hash1, int32_t  hash2) ;

/// @brief Method Combine, addr 0x18254e190, size 0x20, virtual false, abstract: false, final false
static inline int32_t Combine(int32_t  hash1, int32_t  hash2, int32_t  hash3) ;

/// @brief Method Combine, addr 0x18254e1b0, size 0x20, virtual false, abstract: false, final false
static inline int32_t Combine(int32_t  hash1, int32_t  hash2, int32_t  hash3, int32_t  hash4) ;

/// @brief Method Combine, addr 0x18254e110, size 0x30, virtual false, abstract: false, final false
static inline int32_t Combine(int32_t  hash1, int32_t  hash2, int32_t  hash3, int32_t  hash4, int32_t  hash5) ;

/// @brief Method Combine, addr 0x18254e0d0, size 0x40, virtual false, abstract: false, final false
static inline int32_t Combine(int32_t  hash1, int32_t  hash2, int32_t  hash3, int32_t  hash4, int32_t  hash5, int32_t  hash6) ;

/// @brief Method Combine, addr 0x18254e080, size 0x40, virtual false, abstract: false, final false
static inline int32_t Combine(int32_t  hash1, int32_t  hash2, int32_t  hash3, int32_t  hash4, int32_t  hash5, int32_t  hash6, int32_t  hash7) ;

/// @brief Method Combine, addr 0x18254e140, size 0x50, virtual false, abstract: false, final false
static inline int32_t Combine(int32_t  hash1, int32_t  hash2, int32_t  hash3, int32_t  hash4, int32_t  hash5, int32_t  hash6, int32_t  hash7, int32_t  hash8) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HashCodeHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HashCodeHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HashCodeHelper(HashCodeHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashCodeHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashCodeHelper(HashCodeHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21001};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::HashCodeHelper) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR
