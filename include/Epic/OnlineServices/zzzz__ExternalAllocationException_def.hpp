#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ExternalAllocationException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__AllocationException_def.hpp"
CORDL_MODULE_EXPORT(ExternalAllocationException)
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Epic::OnlineServices {
class ExternalAllocationException;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::ExternalAllocationException*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::ExternalAllocationException*, "Epic.OnlineServices", "ExternalAllocationException");
// Dependencies Epic.OnlineServices.AllocationException
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.ExternalAllocationException
class CORDL_TYPE ExternalAllocationException : public ::Epic::OnlineServices::AllocationException {
public:
// Declarations
static inline ::Epic::OnlineServices::ExternalAllocationException* New_ctor(::System::IntPtr  pointer, ::System::Type*  type) ;

/// @brief Method .ctor, addr 0x1804d8b60, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  pointer, ::System::Type*  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExternalAllocationException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExternalAllocationException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExternalAllocationException(ExternalAllocationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExternalAllocationException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExternalAllocationException(ExternalAllocationException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7433};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::ExternalAllocationException) == 0x90, "Size mismatch!");

} // namespace end def Epic::OnlineServices
