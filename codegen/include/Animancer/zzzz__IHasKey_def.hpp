#pragma once
// IWYU pragma private; include "Animancer/IHasKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHasKey)
namespace System {
class Object;
}
// Forward declare root types
namespace Animancer {
class IHasKey;
}
// Write type traits
MARK_REF_T(::Animancer::IHasKey*);
DEFINE_IL2CPP_CLASS(::Animancer::IHasKey*, "Animancer", "IHasKey");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.IHasKey
class CORDL_TYPE IHasKey {
public:
// Declarations
 __declspec(property(get=get_Key)) ::System::Object*  Key;

/// @brief Method get_Key, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* get_Key() ;

// Ctor Parameters [CppParam { name: "", ty: "IHasKey", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHasKey(IHasKey const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18140};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
