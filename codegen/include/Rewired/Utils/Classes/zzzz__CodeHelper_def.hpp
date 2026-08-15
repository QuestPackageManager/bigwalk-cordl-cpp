#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/CodeHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CodeHelper)
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils::Classes {
class CodeHelper;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Classes::CodeHelper*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::CodeHelper*, "Rewired.Utils.Classes", "CodeHelper");
// Dependencies System.Object
namespace Rewired::Utils::Classes {
// Is value type: false
// CS Name: Rewired.Utils.Classes.CodeHelper
class CORDL_TYPE CodeHelper : public ::System::Object {
public:
// Declarations
/// @brief Method Equals, addr 0x1816735a0, size 0x10, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x1815f4340, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Rewired::Utils::Classes::CodeHelper* New_ctor() ;

/// @brief Method ToString, addr 0x1802e2520, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CodeHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CodeHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CodeHelper(CodeHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CodeHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CodeHelper(CodeHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2965};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::Classes::CodeHelper) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes
