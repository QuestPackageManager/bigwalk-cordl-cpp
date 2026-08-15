#pragma once
// IWYU pragma private; include "GlobalNamespace/ICustomHomePositioner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICustomHomePositioner)
namespace GlobalNamespace {
class Prop;
}
// Forward declare root types
namespace GlobalNamespace {
class ICustomHomePositioner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ICustomHomePositioner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ICustomHomePositioner*, "", "ICustomHomePositioner");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ICustomHomePositioner
class CORDL_TYPE ICustomHomePositioner {
public:
// Declarations
/// @brief Method Position, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Position(::GlobalNamespace::Prop*  prop) ;

// Ctor Parameters [CppParam { name: "", ty: "ICustomHomePositioner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICustomHomePositioner(ICustomHomePositioner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5571};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
