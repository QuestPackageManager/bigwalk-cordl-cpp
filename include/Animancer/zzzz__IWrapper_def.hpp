#pragma once
// IWYU pragma private; include "Animancer/IWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWrapper)
namespace System {
class Object;
}
// Forward declare root types
namespace Animancer {
class IWrapper;
}
// Write type traits
MARK_REF_T(::Animancer::IWrapper*);
DEFINE_IL2CPP_CLASS(::Animancer::IWrapper*, "Animancer", "IWrapper");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.IWrapper
class CORDL_TYPE IWrapper {
public:
// Declarations
 __declspec(property(get=get_WrappedObject)) ::System::Object*  WrappedObject;

/// @brief Method get_WrappedObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* get_WrappedObject() ;

// Ctor Parameters [CppParam { name: "", ty: "IWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWrapper(IWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18147};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
