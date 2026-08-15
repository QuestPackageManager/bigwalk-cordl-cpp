#pragma once
// IWYU pragma private; include "GlobalNamespace/EOSProjectPlatform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EOSProjectPlatform)
// Forward declare root types
namespace GlobalNamespace {
class EOSProjectPlatform;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EOSProjectPlatform*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSProjectPlatform*, "", "EOSProjectPlatform");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSProjectPlatform
class CORDL_TYPE EOSProjectPlatform : public ::System::Object {
public:
// Declarations
static inline ::GlobalNamespace::EOSProjectPlatform* New_ctor() ;

/// @brief Method Setup, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Setup() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSProjectPlatform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSProjectPlatform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSProjectPlatform(EOSProjectPlatform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSProjectPlatform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSProjectPlatform(EOSProjectPlatform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5538};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EOSProjectPlatform) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
