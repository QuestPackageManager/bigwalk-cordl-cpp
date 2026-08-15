#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CachedTypeAllocationException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__AllocationException_def.hpp"
CORDL_MODULE_EXPORT(CachedTypeAllocationException)
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Epic::OnlineServices {
class CachedTypeAllocationException;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::CachedTypeAllocationException*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CachedTypeAllocationException*, "Epic.OnlineServices", "CachedTypeAllocationException");
// Dependencies Epic.OnlineServices.AllocationException
namespace Epic::OnlineServices {
// Is value type: false
// CS Name: Epic.OnlineServices.CachedTypeAllocationException
class CORDL_TYPE CachedTypeAllocationException : public ::Epic::OnlineServices::AllocationException {
public:
// Declarations
static inline ::Epic::OnlineServices::CachedTypeAllocationException* New_ctor(::System::IntPtr  pointer, ::System::Type*  foundType, ::System::Type*  expectedType) ;

/// @brief Method .ctor, addr 0x1804d6c10, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  pointer, ::System::Type*  foundType, ::System::Type*  expectedType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CachedTypeAllocationException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CachedTypeAllocationException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CachedTypeAllocationException(CachedTypeAllocationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CachedTypeAllocationException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CachedTypeAllocationException(CachedTypeAllocationException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7434};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::CachedTypeAllocationException) == 0x90, "Size mismatch!");

} // namespace end def Epic::OnlineServices
