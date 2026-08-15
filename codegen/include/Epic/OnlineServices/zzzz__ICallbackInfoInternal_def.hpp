#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ICallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICallbackInfoInternal)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices {
class ICallbackInfoInternal;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::ICallbackInfoInternal*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::ICallbackInfoInternal*, "Epic.OnlineServices", "ICallbackInfoInternal");
// Dependencies 
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.ICallbackInfoInternal
class CORDL_TYPE ICallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Method get_ClientDataPointer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IntPtr get_ClientDataPointer() ;

// Ctor Parameters [CppParam { name: "", ty: "ICallbackInfoInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICallbackInfoInternal(ICallbackInfoInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7438};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Epic::OnlineServices
